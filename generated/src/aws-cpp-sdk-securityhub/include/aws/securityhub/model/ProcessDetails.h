﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The details of process-related information about a finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ProcessDetails">AWS
   * API Reference</a></p>
   */
  class ProcessDetails
  {
  public:
    AWS_SECURITYHUB_API ProcessDetails();
    AWS_SECURITYHUB_API ProcessDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ProcessDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the process.</p> <p>Length Constraints: Minimum of 1. Maximum of
     * 64.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the process.</p> <p>Length Constraints: Minimum of 1. Maximum of
     * 64.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the process.</p> <p>Length Constraints: Minimum of 1. Maximum of
     * 64.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the process.</p> <p>Length Constraints: Minimum of 1. Maximum of
     * 64.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the process.</p> <p>Length Constraints: Minimum of 1. Maximum of
     * 64.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the process.</p> <p>Length Constraints: Minimum of 1. Maximum of
     * 64.</p>
     */
    inline ProcessDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the process.</p> <p>Length Constraints: Minimum of 1. Maximum of
     * 64.</p>
     */
    inline ProcessDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the process.</p> <p>Length Constraints: Minimum of 1. Maximum of
     * 64.</p>
     */
    inline ProcessDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The path to the process executable.</p> <p>Length Constraints: Minimum of 1.
     * Maximum of 512.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path to the process executable.</p> <p>Length Constraints: Minimum of 1.
     * Maximum of 512.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path to the process executable.</p> <p>Length Constraints: Minimum of 1.
     * Maximum of 512.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path to the process executable.</p> <p>Length Constraints: Minimum of 1.
     * Maximum of 512.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path to the process executable.</p> <p>Length Constraints: Minimum of 1.
     * Maximum of 512.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path to the process executable.</p> <p>Length Constraints: Minimum of 1.
     * Maximum of 512.</p>
     */
    inline ProcessDetails& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path to the process executable.</p> <p>Length Constraints: Minimum of 1.
     * Maximum of 512.</p>
     */
    inline ProcessDetails& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path to the process executable.</p> <p>Length Constraints: Minimum of 1.
     * Maximum of 512.</p>
     */
    inline ProcessDetails& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The process ID.</p>
     */
    inline int GetPid() const{ return m_pid; }

    /**
     * <p>The process ID.</p>
     */
    inline bool PidHasBeenSet() const { return m_pidHasBeenSet; }

    /**
     * <p>The process ID.</p>
     */
    inline void SetPid(int value) { m_pidHasBeenSet = true; m_pid = value; }

    /**
     * <p>The process ID.</p>
     */
    inline ProcessDetails& WithPid(int value) { SetPid(value); return *this;}


    /**
     * <p>The parent process ID. This field accepts positive integers between
     * <code>O</code> and <code>2147483647</code>.</p>
     */
    inline int GetParentPid() const{ return m_parentPid; }

    /**
     * <p>The parent process ID. This field accepts positive integers between
     * <code>O</code> and <code>2147483647</code>.</p>
     */
    inline bool ParentPidHasBeenSet() const { return m_parentPidHasBeenSet; }

    /**
     * <p>The parent process ID. This field accepts positive integers between
     * <code>O</code> and <code>2147483647</code>.</p>
     */
    inline void SetParentPid(int value) { m_parentPidHasBeenSet = true; m_parentPid = value; }

    /**
     * <p>The parent process ID. This field accepts positive integers between
     * <code>O</code> and <code>2147483647</code>.</p>
     */
    inline ProcessDetails& WithParentPid(int value) { SetParentPid(value); return *this;}


    /**
     * <p>Indicates when the process was launched.</p> <p>This field accepts only the
     * specified formats. Timestamps can end with <code>Z</code> or <code>("+" / "-")
     * time-hour [":" time-minute]</code>. The time-secfrac after seconds is limited to
     * a maximum of 9 digits. The offset is bounded by +/-18:00. Here are valid
     * timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline const Aws::String& GetLaunchedAt() const{ return m_launchedAt; }

    /**
     * <p>Indicates when the process was launched.</p> <p>This field accepts only the
     * specified formats. Timestamps can end with <code>Z</code> or <code>("+" / "-")
     * time-hour [":" time-minute]</code>. The time-secfrac after seconds is limited to
     * a maximum of 9 digits. The offset is bounded by +/-18:00. Here are valid
     * timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline bool LaunchedAtHasBeenSet() const { return m_launchedAtHasBeenSet; }

    /**
     * <p>Indicates when the process was launched.</p> <p>This field accepts only the
     * specified formats. Timestamps can end with <code>Z</code> or <code>("+" / "-")
     * time-hour [":" time-minute]</code>. The time-secfrac after seconds is limited to
     * a maximum of 9 digits. The offset is bounded by +/-18:00. Here are valid
     * timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline void SetLaunchedAt(const Aws::String& value) { m_launchedAtHasBeenSet = true; m_launchedAt = value; }

    /**
     * <p>Indicates when the process was launched.</p> <p>This field accepts only the
     * specified formats. Timestamps can end with <code>Z</code> or <code>("+" / "-")
     * time-hour [":" time-minute]</code>. The time-secfrac after seconds is limited to
     * a maximum of 9 digits. The offset is bounded by +/-18:00. Here are valid
     * timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline void SetLaunchedAt(Aws::String&& value) { m_launchedAtHasBeenSet = true; m_launchedAt = std::move(value); }

    /**
     * <p>Indicates when the process was launched.</p> <p>This field accepts only the
     * specified formats. Timestamps can end with <code>Z</code> or <code>("+" / "-")
     * time-hour [":" time-minute]</code>. The time-secfrac after seconds is limited to
     * a maximum of 9 digits. The offset is bounded by +/-18:00. Here are valid
     * timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline void SetLaunchedAt(const char* value) { m_launchedAtHasBeenSet = true; m_launchedAt.assign(value); }

    /**
     * <p>Indicates when the process was launched.</p> <p>This field accepts only the
     * specified formats. Timestamps can end with <code>Z</code> or <code>("+" / "-")
     * time-hour [":" time-minute]</code>. The time-secfrac after seconds is limited to
     * a maximum of 9 digits. The offset is bounded by +/-18:00. Here are valid
     * timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline ProcessDetails& WithLaunchedAt(const Aws::String& value) { SetLaunchedAt(value); return *this;}

    /**
     * <p>Indicates when the process was launched.</p> <p>This field accepts only the
     * specified formats. Timestamps can end with <code>Z</code> or <code>("+" / "-")
     * time-hour [":" time-minute]</code>. The time-secfrac after seconds is limited to
     * a maximum of 9 digits. The offset is bounded by +/-18:00. Here are valid
     * timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline ProcessDetails& WithLaunchedAt(Aws::String&& value) { SetLaunchedAt(std::move(value)); return *this;}

    /**
     * <p>Indicates when the process was launched.</p> <p>This field accepts only the
     * specified formats. Timestamps can end with <code>Z</code> or <code>("+" / "-")
     * time-hour [":" time-minute]</code>. The time-secfrac after seconds is limited to
     * a maximum of 9 digits. The offset is bounded by +/-18:00. Here are valid
     * timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline ProcessDetails& WithLaunchedAt(const char* value) { SetLaunchedAt(value); return *this;}


    /**
     * <p>Indicates when the process was terminated.</p> <p>This field accepts only the
     * specified formats. Timestamps can end with <code>Z</code> or <code>("+" / "-")
     * time-hour [":" time-minute]</code>. The time-secfrac after seconds is limited to
     * a maximum of 9 digits. The offset is bounded by +/-18:00. Here are valid
     * timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline const Aws::String& GetTerminatedAt() const{ return m_terminatedAt; }

    /**
     * <p>Indicates when the process was terminated.</p> <p>This field accepts only the
     * specified formats. Timestamps can end with <code>Z</code> or <code>("+" / "-")
     * time-hour [":" time-minute]</code>. The time-secfrac after seconds is limited to
     * a maximum of 9 digits. The offset is bounded by +/-18:00. Here are valid
     * timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline bool TerminatedAtHasBeenSet() const { return m_terminatedAtHasBeenSet; }

    /**
     * <p>Indicates when the process was terminated.</p> <p>This field accepts only the
     * specified formats. Timestamps can end with <code>Z</code> or <code>("+" / "-")
     * time-hour [":" time-minute]</code>. The time-secfrac after seconds is limited to
     * a maximum of 9 digits. The offset is bounded by +/-18:00. Here are valid
     * timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline void SetTerminatedAt(const Aws::String& value) { m_terminatedAtHasBeenSet = true; m_terminatedAt = value; }

    /**
     * <p>Indicates when the process was terminated.</p> <p>This field accepts only the
     * specified formats. Timestamps can end with <code>Z</code> or <code>("+" / "-")
     * time-hour [":" time-minute]</code>. The time-secfrac after seconds is limited to
     * a maximum of 9 digits. The offset is bounded by +/-18:00. Here are valid
     * timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline void SetTerminatedAt(Aws::String&& value) { m_terminatedAtHasBeenSet = true; m_terminatedAt = std::move(value); }

    /**
     * <p>Indicates when the process was terminated.</p> <p>This field accepts only the
     * specified formats. Timestamps can end with <code>Z</code> or <code>("+" / "-")
     * time-hour [":" time-minute]</code>. The time-secfrac after seconds is limited to
     * a maximum of 9 digits. The offset is bounded by +/-18:00. Here are valid
     * timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline void SetTerminatedAt(const char* value) { m_terminatedAtHasBeenSet = true; m_terminatedAt.assign(value); }

    /**
     * <p>Indicates when the process was terminated.</p> <p>This field accepts only the
     * specified formats. Timestamps can end with <code>Z</code> or <code>("+" / "-")
     * time-hour [":" time-minute]</code>. The time-secfrac after seconds is limited to
     * a maximum of 9 digits. The offset is bounded by +/-18:00. Here are valid
     * timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline ProcessDetails& WithTerminatedAt(const Aws::String& value) { SetTerminatedAt(value); return *this;}

    /**
     * <p>Indicates when the process was terminated.</p> <p>This field accepts only the
     * specified formats. Timestamps can end with <code>Z</code> or <code>("+" / "-")
     * time-hour [":" time-minute]</code>. The time-secfrac after seconds is limited to
     * a maximum of 9 digits. The offset is bounded by +/-18:00. Here are valid
     * timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline ProcessDetails& WithTerminatedAt(Aws::String&& value) { SetTerminatedAt(std::move(value)); return *this;}

    /**
     * <p>Indicates when the process was terminated.</p> <p>This field accepts only the
     * specified formats. Timestamps can end with <code>Z</code> or <code>("+" / "-")
     * time-hour [":" time-minute]</code>. The time-secfrac after seconds is limited to
     * a maximum of 9 digits. The offset is bounded by +/-18:00. Here are valid
     * timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline ProcessDetails& WithTerminatedAt(const char* value) { SetTerminatedAt(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    int m_pid;
    bool m_pidHasBeenSet = false;

    int m_parentPid;
    bool m_parentPidHasBeenSet = false;

    Aws::String m_launchedAt;
    bool m_launchedAtHasBeenSet = false;

    Aws::String m_terminatedAt;
    bool m_terminatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
