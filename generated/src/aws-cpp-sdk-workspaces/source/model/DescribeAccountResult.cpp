﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeAccountResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAccountResult::DescribeAccountResult() : 
    m_dedicatedTenancySupport(DedicatedTenancySupportResultEnum::NOT_SET),
    m_dedicatedTenancyAccountType(DedicatedTenancyAccountType::NOT_SET)
{
}

DescribeAccountResult::DescribeAccountResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_dedicatedTenancySupport(DedicatedTenancySupportResultEnum::NOT_SET),
    m_dedicatedTenancyAccountType(DedicatedTenancyAccountType::NOT_SET)
{
  *this = result;
}

DescribeAccountResult& DescribeAccountResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DedicatedTenancySupport"))
  {
    m_dedicatedTenancySupport = DedicatedTenancySupportResultEnumMapper::GetDedicatedTenancySupportResultEnumForName(jsonValue.GetString("DedicatedTenancySupport"));

  }

  if(jsonValue.ValueExists("DedicatedTenancyManagementCidrRange"))
  {
    m_dedicatedTenancyManagementCidrRange = jsonValue.GetString("DedicatedTenancyManagementCidrRange");

  }

  if(jsonValue.ValueExists("DedicatedTenancyAccountType"))
  {
    m_dedicatedTenancyAccountType = DedicatedTenancyAccountTypeMapper::GetDedicatedTenancyAccountTypeForName(jsonValue.GetString("DedicatedTenancyAccountType"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
