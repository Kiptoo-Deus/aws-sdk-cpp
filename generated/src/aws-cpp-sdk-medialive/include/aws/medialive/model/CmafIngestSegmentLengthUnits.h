﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class CmafIngestSegmentLengthUnits
  {
    NOT_SET,
    MILLISECONDS,
    SECONDS
  };

namespace CmafIngestSegmentLengthUnitsMapper
{
AWS_MEDIALIVE_API CmafIngestSegmentLengthUnits GetCmafIngestSegmentLengthUnitsForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForCmafIngestSegmentLengthUnits(CmafIngestSegmentLengthUnits value);
} // namespace CmafIngestSegmentLengthUnitsMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
