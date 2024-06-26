﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UserStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CognitoIdentityProvider
  {
    namespace Model
    {
      namespace UserStatusTypeMapper
      {

        static const int UNCONFIRMED_HASH = HashingUtils::HashString("UNCONFIRMED");
        static const int CONFIRMED_HASH = HashingUtils::HashString("CONFIRMED");
        static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");
        static const int COMPROMISED_HASH = HashingUtils::HashString("COMPROMISED");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");
        static const int RESET_REQUIRED_HASH = HashingUtils::HashString("RESET_REQUIRED");
        static const int FORCE_CHANGE_PASSWORD_HASH = HashingUtils::HashString("FORCE_CHANGE_PASSWORD");
        static const int EXTERNAL_PROVIDER_HASH = HashingUtils::HashString("EXTERNAL_PROVIDER");


        UserStatusType GetUserStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNCONFIRMED_HASH)
          {
            return UserStatusType::UNCONFIRMED;
          }
          else if (hashCode == CONFIRMED_HASH)
          {
            return UserStatusType::CONFIRMED;
          }
          else if (hashCode == ARCHIVED_HASH)
          {
            return UserStatusType::ARCHIVED;
          }
          else if (hashCode == COMPROMISED_HASH)
          {
            return UserStatusType::COMPROMISED;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return UserStatusType::UNKNOWN;
          }
          else if (hashCode == RESET_REQUIRED_HASH)
          {
            return UserStatusType::RESET_REQUIRED;
          }
          else if (hashCode == FORCE_CHANGE_PASSWORD_HASH)
          {
            return UserStatusType::FORCE_CHANGE_PASSWORD;
          }
          else if (hashCode == EXTERNAL_PROVIDER_HASH)
          {
            return UserStatusType::EXTERNAL_PROVIDER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserStatusType>(hashCode);
          }

          return UserStatusType::NOT_SET;
        }

        Aws::String GetNameForUserStatusType(UserStatusType enumValue)
        {
          switch(enumValue)
          {
          case UserStatusType::NOT_SET:
            return {};
          case UserStatusType::UNCONFIRMED:
            return "UNCONFIRMED";
          case UserStatusType::CONFIRMED:
            return "CONFIRMED";
          case UserStatusType::ARCHIVED:
            return "ARCHIVED";
          case UserStatusType::COMPROMISED:
            return "COMPROMISED";
          case UserStatusType::UNKNOWN:
            return "UNKNOWN";
          case UserStatusType::RESET_REQUIRED:
            return "RESET_REQUIRED";
          case UserStatusType::FORCE_CHANGE_PASSWORD:
            return "FORCE_CHANGE_PASSWORD";
          case UserStatusType::EXTERNAL_PROVIDER:
            return "EXTERNAL_PROVIDER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserStatusTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
