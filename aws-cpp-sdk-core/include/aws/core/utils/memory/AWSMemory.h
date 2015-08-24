/*
 * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 * 
 *  http://aws.amazon.com/apache2.0
 * 
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/MemorySystemInterface.h>

#include <memory>
#include <cstdlib>

namespace Aws
{
namespace Utils
{
namespace Memory
{

// InitializeAWSMemory should be called at the very start of your program
AWS_CORE_API void InitializeAWSMemorySystem(MemorySystemInterface& memorySystem);

// ShutdownAWSMemory should be called the very end of your program
AWS_CORE_API void ShutdownAWSMemorySystem(void);

AWS_CORE_API MemorySystemInterface* GetMemorySystem();

} // namespace Memory
} // namespace Utils

// ::new, ::delete, ::malloc, ::free, std::make_shared, and std::make_unique should not be used in SDK code
// use these functions instead or Aws::MakeShared
AWS_CORE_API void* Malloc(const char* allocationTag, size_t allocationSize);
AWS_CORE_API void Free(void* memoryPtr);

template<typename T, typename ...ArgTypes>
T* New(const char* allocationTag, ArgTypes&&... args)
{
    void *rawMemory = Malloc(allocationTag, sizeof(T));

    T *constructedMemory = new (rawMemory) T(std::forward<ArgTypes>(args)...);
    return constructedMemory;
}

template<typename T>
void Delete(T* pointerToT)
{
    if(pointerToT == nullptr)
    {
        return;
    }

    pointerToT->~T();
    Free(pointerToT);
}

template<typename T>
bool ShouldConstructArrayMembers()
{
    return std::is_class<T>::value;
}

template<typename T>
bool ShouldDestroyArrayMembers()
{
    return !std::is_trivially_destructible<T>::value;
}

template<typename T>
T* NewArray(std::size_t amount, const char* allocationTag)
{
    if(amount > 0)
    {
        bool constructMembers = ShouldConstructArrayMembers<T>();
        bool trackMemberCount = ShouldDestroyArrayMembers<T>();

        // if we need to remember the # of items in the array (because we need to call their destructors) then allocate extra memory and keep the # of items in the extra slot
        std::size_t allocationSize = amount * sizeof(T);
        if(trackMemberCount)
        {
            allocationSize += sizeof(std::size_t);
        }

        void* rawMemory = Malloc(allocationTag, allocationSize);
        T* pointerToT = nullptr;

        if(trackMemberCount)
        {
            std::size_t* pointerToAmount = reinterpret_cast<std::size_t*>(rawMemory);
            *pointerToAmount = amount;
            pointerToT = reinterpret_cast<T*>(reinterpret_cast<void*>(pointerToAmount + 1));
        }
        else
        {
            pointerToT = reinterpret_cast<T*>(rawMemory);
        } 
            
        if(constructMembers)
        {
            for(std::size_t i = 0; i < amount; ++i)
            {
                new (pointerToT + i) T;
            }
        }

        return pointerToT;
    }
    
    return nullptr;
}

template<typename T>
void DeleteArray(T* pointerToTArray)
{
    if(pointerToTArray == nullptr)
    {
        return;
    }

    bool destroyMembers = ShouldDestroyArrayMembers<T>();
    void* rawMemory = nullptr;

    if(destroyMembers)
    {
        std::size_t *pointerToAmount = reinterpret_cast<std::size_t *>(reinterpret_cast<void *>(pointerToTArray)) - 1;
        std::size_t amount = *pointerToAmount;

        for(std::size_t i = amount; i > 0; --i)
        {
            (pointerToTArray + i - 1)->~T();
        }
        rawMemory = reinterpret_cast<void *>(pointerToAmount);
    }
    else
    {
        rawMemory = reinterpret_cast<void *>(pointerToTArray);
    }

    Free(rawMemory);
}

// modeled from std::default_delete
#ifdef AWS_CUSTOM_MEMORY_MANAGEMENT

template<typename T>
struct Deleter
{	
    Deleter() {}

    template<class U, class = typename std::enable_if<std::is_convertible<U *, T *>::value, void>::type>
    Deleter(const Deleter<U>&)
    {
    }

    void operator()(T *pointerToT) const
    {	
	    static_assert(0 < sizeof (T), "can't delete an incomplete type");
	    Aws::Delete(pointerToT);
    }
};

#else

template< typename T > using Deleter = std::default_delete< T >;

#endif // AWS_CUSTOM_MEMORY_MANAGEMENT

template< typename T > using UniquePtr = std::unique_ptr< T, Deleter< T > >;

template<typename T, typename ...ArgTypes>
UniquePtr<T> MakeUnique(const char* allocationTag, ArgTypes&&... args)
{
    return UniquePtr<T>(Aws::New<T>(allocationTag, std::forward<ArgTypes>(args)...));
}

#ifdef AWS_CUSTOM_MEMORY_MANAGEMENT

template<typename T>
struct ArrayDeleter
{	
    ArrayDeleter() {}

    template<class U, class = typename std::enable_if<std::is_convertible<U *, T *>::value, void>::type>
    ArrayDeleter(const ArrayDeleter<U>&)
    {
    }

    void operator()(T *pointerToTArray) const
    {	
	    static_assert(0 < sizeof (T), "can't delete an incomplete type");
	    Aws::DeleteArray(pointerToTArray);
    }
};

#else

template< typename T > using ArrayDeleter = std::default_delete< T[] >;

#endif

template< typename T > using UniqueArrayPtr = std::unique_ptr< T, ArrayDeleter< T > >;

template<typename T, typename ...ArgTypes>
UniqueArrayPtr<T> MakeUniqueArray(std::size_t amount, const char* allocationTag, ArgTypes&&... args)
{
    return UniqueArrayPtr<T>(Aws::NewArray<T>(amount, allocationTag, std::forward<ArgTypes>(args)...));
}

} // namespace Aws
