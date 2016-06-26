/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "FABDownloadAndSaveSettingsOperationDelegate-Protocol.h"
#import "FABOnboardingOperationDelegate-Protocol.h"

@class FABApplicationIdentiferModel, FABNetworkClient, FABOnboardingOperation, FABSettings, NSDictionary, NSFileManager, NSString;

@interface FABSettingsOnboardingManager : _ABCreateStringWithAddressDictionary <FABDownloadAndSaveSettingsOperationDelegate, FABOnboardingOperationDelegate>
{
    BOOL _hasAttemptedAppConfigure;
    FABSettings *_settingsModel;
    FABApplicationIdentiferModel *_appIdentifierModel;
    FABOnboardingOperation *_onboardingOperation;
    NSFileManager *_fileManager;
    NSDictionary *_configuration;
    NSDictionary *_defaultConfiguration;
    NSString *_APIKey;
    NSDictionary *_kitVersionsByKitBundleIdentifier;
    FABNetworkClient *_networkClient;
}

+ (id)settingsDirectoryPath;
- (id)networkClient;
- (void)setKitVersionsByKitBundleIdentifier:(id)fp8;
- (id)kitVersionsByKitBundleIdentifier;
- (void)setAPIKey:(id)fp8;
- (id)APIKey;
- (void)setDefaultConfiguration:(id)fp8;
- (void)setConfiguration:(id)fp8;
- (void)setHasAttemptedAppConfigure:(BOOL)fp8;
- (BOOL)hasAttemptedAppConfigure;
- (void)setFileManager:(id)fp8;
- (id)fileManager;
- (void)setOnboardingOperation:(id)fp8;
- (id)onboardingOperation;
- (void)setAppIdentifierModel:(id)fp8;
- (id)appIdentifierModel;
- (void)setSettingsModel:(id)fp8;
- (void).cxx_destruct;
- (void)postSettingsDownloadCompletedNotification;
- (id)settingsPath;
- (id)settingsURL;
- (void)operation:(id)fp8 didDownloadAndSaveSettingsWithError:(id)fp12;
- (void)onboardingOperation:(id)fp8 didCompleteAppUpdateWithError:(id)fp12;
- (void)onboardingOperation:(id)fp8 didCompleteAppCreationWithError:(id)fp12;
- (id)appIconHash;
- (id)valueForConfigurationKey:(id)fp8;
- (id)defaultConfiguration;
- (id)configuration;
- (void)finishNetworkingSession;
- (id)advertisingToken;
- (id)settingsModel;
- (void)beginOnboarding:(BOOL)fp8 endpointString:(id)fp12;
- (void)beginSettingsDownload;
- (void)beginSettingsAndOnboardingOperationsWithAPIKey:(id)fp8 kitVersionsByKitBundleIdentifier:(id)fp12;
- (id)initWithApplicationIdentifierModel:(id)fp8;

@end

