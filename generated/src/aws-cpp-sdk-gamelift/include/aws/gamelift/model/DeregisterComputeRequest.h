﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class DeregisterComputeRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API DeregisterComputeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterCompute"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the fleet the compute resource is currently
     * registered to.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for the fleet the compute resource is currently
     * registered to.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the fleet the compute resource is currently
     * registered to.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>A unique identifier for the fleet the compute resource is currently
     * registered to.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for the fleet the compute resource is currently
     * registered to.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for the fleet the compute resource is currently
     * registered to.</p>
     */
    inline DeregisterComputeRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the fleet the compute resource is currently
     * registered to.</p>
     */
    inline DeregisterComputeRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the fleet the compute resource is currently
     * registered to.</p>
     */
    inline DeregisterComputeRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>The unique identifier of the compute resource to deregister. For an Anywhere
     * fleet compute, use the registered compute name. For a container fleet, use the
     * compute name (for example,
     * <code>a123b456c789012d3e4567f8a901b23c/1a234b56-7cd8-9e0f-a1b2-c34d567ef8a9</code>)
     * or the compute ARN.</p>
     */
    inline const Aws::String& GetComputeName() const{ return m_computeName; }

    /**
     * <p>The unique identifier of the compute resource to deregister. For an Anywhere
     * fleet compute, use the registered compute name. For a container fleet, use the
     * compute name (for example,
     * <code>a123b456c789012d3e4567f8a901b23c/1a234b56-7cd8-9e0f-a1b2-c34d567ef8a9</code>)
     * or the compute ARN.</p>
     */
    inline bool ComputeNameHasBeenSet() const { return m_computeNameHasBeenSet; }

    /**
     * <p>The unique identifier of the compute resource to deregister. For an Anywhere
     * fleet compute, use the registered compute name. For a container fleet, use the
     * compute name (for example,
     * <code>a123b456c789012d3e4567f8a901b23c/1a234b56-7cd8-9e0f-a1b2-c34d567ef8a9</code>)
     * or the compute ARN.</p>
     */
    inline void SetComputeName(const Aws::String& value) { m_computeNameHasBeenSet = true; m_computeName = value; }

    /**
     * <p>The unique identifier of the compute resource to deregister. For an Anywhere
     * fleet compute, use the registered compute name. For a container fleet, use the
     * compute name (for example,
     * <code>a123b456c789012d3e4567f8a901b23c/1a234b56-7cd8-9e0f-a1b2-c34d567ef8a9</code>)
     * or the compute ARN.</p>
     */
    inline void SetComputeName(Aws::String&& value) { m_computeNameHasBeenSet = true; m_computeName = std::move(value); }

    /**
     * <p>The unique identifier of the compute resource to deregister. For an Anywhere
     * fleet compute, use the registered compute name. For a container fleet, use the
     * compute name (for example,
     * <code>a123b456c789012d3e4567f8a901b23c/1a234b56-7cd8-9e0f-a1b2-c34d567ef8a9</code>)
     * or the compute ARN.</p>
     */
    inline void SetComputeName(const char* value) { m_computeNameHasBeenSet = true; m_computeName.assign(value); }

    /**
     * <p>The unique identifier of the compute resource to deregister. For an Anywhere
     * fleet compute, use the registered compute name. For a container fleet, use the
     * compute name (for example,
     * <code>a123b456c789012d3e4567f8a901b23c/1a234b56-7cd8-9e0f-a1b2-c34d567ef8a9</code>)
     * or the compute ARN.</p>
     */
    inline DeregisterComputeRequest& WithComputeName(const Aws::String& value) { SetComputeName(value); return *this;}

    /**
     * <p>The unique identifier of the compute resource to deregister. For an Anywhere
     * fleet compute, use the registered compute name. For a container fleet, use the
     * compute name (for example,
     * <code>a123b456c789012d3e4567f8a901b23c/1a234b56-7cd8-9e0f-a1b2-c34d567ef8a9</code>)
     * or the compute ARN.</p>
     */
    inline DeregisterComputeRequest& WithComputeName(Aws::String&& value) { SetComputeName(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the compute resource to deregister. For an Anywhere
     * fleet compute, use the registered compute name. For a container fleet, use the
     * compute name (for example,
     * <code>a123b456c789012d3e4567f8a901b23c/1a234b56-7cd8-9e0f-a1b2-c34d567ef8a9</code>)
     * or the compute ARN.</p>
     */
    inline DeregisterComputeRequest& WithComputeName(const char* value) { SetComputeName(value); return *this;}

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_computeName;
    bool m_computeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
