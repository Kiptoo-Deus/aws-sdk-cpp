﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/WorkSpacesWebRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/CookieSynchronizationConfiguration.h>
#include <aws/workspaces-web/model/EnabledType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-web/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   */
  class CreateUserSettingsRequest : public WorkSpacesWebRequest
  {
  public:
    AWS_WORKSPACESWEB_API CreateUserSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUserSettings"; }

    AWS_WORKSPACESWEB_API Aws::String SerializePayload() const override;


    /**
     * <p>The additional encryption context of the user settings.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalEncryptionContext() const{ return m_additionalEncryptionContext; }

    /**
     * <p>The additional encryption context of the user settings.</p>
     */
    inline bool AdditionalEncryptionContextHasBeenSet() const { return m_additionalEncryptionContextHasBeenSet; }

    /**
     * <p>The additional encryption context of the user settings.</p>
     */
    inline void SetAdditionalEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext = value; }

    /**
     * <p>The additional encryption context of the user settings.</p>
     */
    inline void SetAdditionalEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext = std::move(value); }

    /**
     * <p>The additional encryption context of the user settings.</p>
     */
    inline CreateUserSettingsRequest& WithAdditionalEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalEncryptionContext(value); return *this;}

    /**
     * <p>The additional encryption context of the user settings.</p>
     */
    inline CreateUserSettingsRequest& WithAdditionalEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalEncryptionContext(std::move(value)); return *this;}

    /**
     * <p>The additional encryption context of the user settings.</p>
     */
    inline CreateUserSettingsRequest& AddAdditionalEncryptionContext(const Aws::String& key, const Aws::String& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, value); return *this; }

    /**
     * <p>The additional encryption context of the user settings.</p>
     */
    inline CreateUserSettingsRequest& AddAdditionalEncryptionContext(Aws::String&& key, const Aws::String& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>The additional encryption context of the user settings.</p>
     */
    inline CreateUserSettingsRequest& AddAdditionalEncryptionContext(const Aws::String& key, Aws::String&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The additional encryption context of the user settings.</p>
     */
    inline CreateUserSettingsRequest& AddAdditionalEncryptionContext(Aws::String&& key, Aws::String&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The additional encryption context of the user settings.</p>
     */
    inline CreateUserSettingsRequest& AddAdditionalEncryptionContext(const char* key, Aws::String&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The additional encryption context of the user settings.</p>
     */
    inline CreateUserSettingsRequest& AddAdditionalEncryptionContext(Aws::String&& key, const char* value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>The additional encryption context of the user settings.</p>
     */
    inline CreateUserSettingsRequest& AddAdditionalEncryptionContext(const char* key, const char* value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, value); return *this; }


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the Amazon Web Services SDK.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the Amazon Web Services SDK.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the Amazon Web Services SDK.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the Amazon Web Services SDK.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the Amazon Web Services SDK.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the Amazon Web Services SDK.</p>
     */
    inline CreateUserSettingsRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the Amazon Web Services SDK.</p>
     */
    inline CreateUserSettingsRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token returns the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the Amazon Web Services SDK.</p>
     */
    inline CreateUserSettingsRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The configuration that specifies which cookies should be synchronized from
     * the end user's local browser to the remote browser.</p>
     */
    inline const CookieSynchronizationConfiguration& GetCookieSynchronizationConfiguration() const{ return m_cookieSynchronizationConfiguration; }

    /**
     * <p>The configuration that specifies which cookies should be synchronized from
     * the end user's local browser to the remote browser.</p>
     */
    inline bool CookieSynchronizationConfigurationHasBeenSet() const { return m_cookieSynchronizationConfigurationHasBeenSet; }

    /**
     * <p>The configuration that specifies which cookies should be synchronized from
     * the end user's local browser to the remote browser.</p>
     */
    inline void SetCookieSynchronizationConfiguration(const CookieSynchronizationConfiguration& value) { m_cookieSynchronizationConfigurationHasBeenSet = true; m_cookieSynchronizationConfiguration = value; }

    /**
     * <p>The configuration that specifies which cookies should be synchronized from
     * the end user's local browser to the remote browser.</p>
     */
    inline void SetCookieSynchronizationConfiguration(CookieSynchronizationConfiguration&& value) { m_cookieSynchronizationConfigurationHasBeenSet = true; m_cookieSynchronizationConfiguration = std::move(value); }

    /**
     * <p>The configuration that specifies which cookies should be synchronized from
     * the end user's local browser to the remote browser.</p>
     */
    inline CreateUserSettingsRequest& WithCookieSynchronizationConfiguration(const CookieSynchronizationConfiguration& value) { SetCookieSynchronizationConfiguration(value); return *this;}

    /**
     * <p>The configuration that specifies which cookies should be synchronized from
     * the end user's local browser to the remote browser.</p>
     */
    inline CreateUserSettingsRequest& WithCookieSynchronizationConfiguration(CookieSynchronizationConfiguration&& value) { SetCookieSynchronizationConfiguration(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the user can copy text from the streaming session to the
     * local device.</p>
     */
    inline const EnabledType& GetCopyAllowed() const{ return m_copyAllowed; }

    /**
     * <p>Specifies whether the user can copy text from the streaming session to the
     * local device.</p>
     */
    inline bool CopyAllowedHasBeenSet() const { return m_copyAllowedHasBeenSet; }

    /**
     * <p>Specifies whether the user can copy text from the streaming session to the
     * local device.</p>
     */
    inline void SetCopyAllowed(const EnabledType& value) { m_copyAllowedHasBeenSet = true; m_copyAllowed = value; }

    /**
     * <p>Specifies whether the user can copy text from the streaming session to the
     * local device.</p>
     */
    inline void SetCopyAllowed(EnabledType&& value) { m_copyAllowedHasBeenSet = true; m_copyAllowed = std::move(value); }

    /**
     * <p>Specifies whether the user can copy text from the streaming session to the
     * local device.</p>
     */
    inline CreateUserSettingsRequest& WithCopyAllowed(const EnabledType& value) { SetCopyAllowed(value); return *this;}

    /**
     * <p>Specifies whether the user can copy text from the streaming session to the
     * local device.</p>
     */
    inline CreateUserSettingsRequest& WithCopyAllowed(EnabledType&& value) { SetCopyAllowed(std::move(value)); return *this;}


    /**
     * <p>The customer managed key used to encrypt sensitive information in the user
     * settings.</p>
     */
    inline const Aws::String& GetCustomerManagedKey() const{ return m_customerManagedKey; }

    /**
     * <p>The customer managed key used to encrypt sensitive information in the user
     * settings.</p>
     */
    inline bool CustomerManagedKeyHasBeenSet() const { return m_customerManagedKeyHasBeenSet; }

    /**
     * <p>The customer managed key used to encrypt sensitive information in the user
     * settings.</p>
     */
    inline void SetCustomerManagedKey(const Aws::String& value) { m_customerManagedKeyHasBeenSet = true; m_customerManagedKey = value; }

    /**
     * <p>The customer managed key used to encrypt sensitive information in the user
     * settings.</p>
     */
    inline void SetCustomerManagedKey(Aws::String&& value) { m_customerManagedKeyHasBeenSet = true; m_customerManagedKey = std::move(value); }

    /**
     * <p>The customer managed key used to encrypt sensitive information in the user
     * settings.</p>
     */
    inline void SetCustomerManagedKey(const char* value) { m_customerManagedKeyHasBeenSet = true; m_customerManagedKey.assign(value); }

    /**
     * <p>The customer managed key used to encrypt sensitive information in the user
     * settings.</p>
     */
    inline CreateUserSettingsRequest& WithCustomerManagedKey(const Aws::String& value) { SetCustomerManagedKey(value); return *this;}

    /**
     * <p>The customer managed key used to encrypt sensitive information in the user
     * settings.</p>
     */
    inline CreateUserSettingsRequest& WithCustomerManagedKey(Aws::String&& value) { SetCustomerManagedKey(std::move(value)); return *this;}

    /**
     * <p>The customer managed key used to encrypt sensitive information in the user
     * settings.</p>
     */
    inline CreateUserSettingsRequest& WithCustomerManagedKey(const char* value) { SetCustomerManagedKey(value); return *this;}


    /**
     * <p>The amount of time that a streaming session remains active after users
     * disconnect.</p>
     */
    inline int GetDisconnectTimeoutInMinutes() const{ return m_disconnectTimeoutInMinutes; }

    /**
     * <p>The amount of time that a streaming session remains active after users
     * disconnect.</p>
     */
    inline bool DisconnectTimeoutInMinutesHasBeenSet() const { return m_disconnectTimeoutInMinutesHasBeenSet; }

    /**
     * <p>The amount of time that a streaming session remains active after users
     * disconnect.</p>
     */
    inline void SetDisconnectTimeoutInMinutes(int value) { m_disconnectTimeoutInMinutesHasBeenSet = true; m_disconnectTimeoutInMinutes = value; }

    /**
     * <p>The amount of time that a streaming session remains active after users
     * disconnect.</p>
     */
    inline CreateUserSettingsRequest& WithDisconnectTimeoutInMinutes(int value) { SetDisconnectTimeoutInMinutes(value); return *this;}


    /**
     * <p>Specifies whether the user can download files from the streaming session to
     * the local device.</p>
     */
    inline const EnabledType& GetDownloadAllowed() const{ return m_downloadAllowed; }

    /**
     * <p>Specifies whether the user can download files from the streaming session to
     * the local device.</p>
     */
    inline bool DownloadAllowedHasBeenSet() const { return m_downloadAllowedHasBeenSet; }

    /**
     * <p>Specifies whether the user can download files from the streaming session to
     * the local device.</p>
     */
    inline void SetDownloadAllowed(const EnabledType& value) { m_downloadAllowedHasBeenSet = true; m_downloadAllowed = value; }

    /**
     * <p>Specifies whether the user can download files from the streaming session to
     * the local device.</p>
     */
    inline void SetDownloadAllowed(EnabledType&& value) { m_downloadAllowedHasBeenSet = true; m_downloadAllowed = std::move(value); }

    /**
     * <p>Specifies whether the user can download files from the streaming session to
     * the local device.</p>
     */
    inline CreateUserSettingsRequest& WithDownloadAllowed(const EnabledType& value) { SetDownloadAllowed(value); return *this;}

    /**
     * <p>Specifies whether the user can download files from the streaming session to
     * the local device.</p>
     */
    inline CreateUserSettingsRequest& WithDownloadAllowed(EnabledType&& value) { SetDownloadAllowed(std::move(value)); return *this;}


    /**
     * <p>The amount of time that users can be idle (inactive) before they are
     * disconnected from their streaming session and the disconnect timeout interval
     * begins.</p>
     */
    inline int GetIdleDisconnectTimeoutInMinutes() const{ return m_idleDisconnectTimeoutInMinutes; }

    /**
     * <p>The amount of time that users can be idle (inactive) before they are
     * disconnected from their streaming session and the disconnect timeout interval
     * begins.</p>
     */
    inline bool IdleDisconnectTimeoutInMinutesHasBeenSet() const { return m_idleDisconnectTimeoutInMinutesHasBeenSet; }

    /**
     * <p>The amount of time that users can be idle (inactive) before they are
     * disconnected from their streaming session and the disconnect timeout interval
     * begins.</p>
     */
    inline void SetIdleDisconnectTimeoutInMinutes(int value) { m_idleDisconnectTimeoutInMinutesHasBeenSet = true; m_idleDisconnectTimeoutInMinutes = value; }

    /**
     * <p>The amount of time that users can be idle (inactive) before they are
     * disconnected from their streaming session and the disconnect timeout interval
     * begins.</p>
     */
    inline CreateUserSettingsRequest& WithIdleDisconnectTimeoutInMinutes(int value) { SetIdleDisconnectTimeoutInMinutes(value); return *this;}


    /**
     * <p>Specifies whether the user can paste text from the local device to the
     * streaming session.</p>
     */
    inline const EnabledType& GetPasteAllowed() const{ return m_pasteAllowed; }

    /**
     * <p>Specifies whether the user can paste text from the local device to the
     * streaming session.</p>
     */
    inline bool PasteAllowedHasBeenSet() const { return m_pasteAllowedHasBeenSet; }

    /**
     * <p>Specifies whether the user can paste text from the local device to the
     * streaming session.</p>
     */
    inline void SetPasteAllowed(const EnabledType& value) { m_pasteAllowedHasBeenSet = true; m_pasteAllowed = value; }

    /**
     * <p>Specifies whether the user can paste text from the local device to the
     * streaming session.</p>
     */
    inline void SetPasteAllowed(EnabledType&& value) { m_pasteAllowedHasBeenSet = true; m_pasteAllowed = std::move(value); }

    /**
     * <p>Specifies whether the user can paste text from the local device to the
     * streaming session.</p>
     */
    inline CreateUserSettingsRequest& WithPasteAllowed(const EnabledType& value) { SetPasteAllowed(value); return *this;}

    /**
     * <p>Specifies whether the user can paste text from the local device to the
     * streaming session.</p>
     */
    inline CreateUserSettingsRequest& WithPasteAllowed(EnabledType&& value) { SetPasteAllowed(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the user can print to the local device.</p>
     */
    inline const EnabledType& GetPrintAllowed() const{ return m_printAllowed; }

    /**
     * <p>Specifies whether the user can print to the local device.</p>
     */
    inline bool PrintAllowedHasBeenSet() const { return m_printAllowedHasBeenSet; }

    /**
     * <p>Specifies whether the user can print to the local device.</p>
     */
    inline void SetPrintAllowed(const EnabledType& value) { m_printAllowedHasBeenSet = true; m_printAllowed = value; }

    /**
     * <p>Specifies whether the user can print to the local device.</p>
     */
    inline void SetPrintAllowed(EnabledType&& value) { m_printAllowedHasBeenSet = true; m_printAllowed = std::move(value); }

    /**
     * <p>Specifies whether the user can print to the local device.</p>
     */
    inline CreateUserSettingsRequest& WithPrintAllowed(const EnabledType& value) { SetPrintAllowed(value); return *this;}

    /**
     * <p>Specifies whether the user can print to the local device.</p>
     */
    inline CreateUserSettingsRequest& WithPrintAllowed(EnabledType&& value) { SetPrintAllowed(std::move(value)); return *this;}


    /**
     * <p>The tags to add to the user settings resource. A tag is a key-value pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to add to the user settings resource. A tag is a key-value pair.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to add to the user settings resource. A tag is a key-value pair.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to add to the user settings resource. A tag is a key-value pair.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to add to the user settings resource. A tag is a key-value pair.</p>
     */
    inline CreateUserSettingsRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to add to the user settings resource. A tag is a key-value pair.</p>
     */
    inline CreateUserSettingsRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to add to the user settings resource. A tag is a key-value pair.</p>
     */
    inline CreateUserSettingsRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to add to the user settings resource. A tag is a key-value pair.</p>
     */
    inline CreateUserSettingsRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies whether the user can upload files from the local device to the
     * streaming session.</p>
     */
    inline const EnabledType& GetUploadAllowed() const{ return m_uploadAllowed; }

    /**
     * <p>Specifies whether the user can upload files from the local device to the
     * streaming session.</p>
     */
    inline bool UploadAllowedHasBeenSet() const { return m_uploadAllowedHasBeenSet; }

    /**
     * <p>Specifies whether the user can upload files from the local device to the
     * streaming session.</p>
     */
    inline void SetUploadAllowed(const EnabledType& value) { m_uploadAllowedHasBeenSet = true; m_uploadAllowed = value; }

    /**
     * <p>Specifies whether the user can upload files from the local device to the
     * streaming session.</p>
     */
    inline void SetUploadAllowed(EnabledType&& value) { m_uploadAllowedHasBeenSet = true; m_uploadAllowed = std::move(value); }

    /**
     * <p>Specifies whether the user can upload files from the local device to the
     * streaming session.</p>
     */
    inline CreateUserSettingsRequest& WithUploadAllowed(const EnabledType& value) { SetUploadAllowed(value); return *this;}

    /**
     * <p>Specifies whether the user can upload files from the local device to the
     * streaming session.</p>
     */
    inline CreateUserSettingsRequest& WithUploadAllowed(EnabledType&& value) { SetUploadAllowed(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_additionalEncryptionContext;
    bool m_additionalEncryptionContextHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    CookieSynchronizationConfiguration m_cookieSynchronizationConfiguration;
    bool m_cookieSynchronizationConfigurationHasBeenSet = false;

    EnabledType m_copyAllowed;
    bool m_copyAllowedHasBeenSet = false;

    Aws::String m_customerManagedKey;
    bool m_customerManagedKeyHasBeenSet = false;

    int m_disconnectTimeoutInMinutes;
    bool m_disconnectTimeoutInMinutesHasBeenSet = false;

    EnabledType m_downloadAllowed;
    bool m_downloadAllowedHasBeenSet = false;

    int m_idleDisconnectTimeoutInMinutes;
    bool m_idleDisconnectTimeoutInMinutesHasBeenSet = false;

    EnabledType m_pasteAllowed;
    bool m_pasteAllowedHasBeenSet = false;

    EnabledType m_printAllowed;
    bool m_printAllowedHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    EnabledType m_uploadAllowed;
    bool m_uploadAllowedHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
