/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "CLSNetworkClientDelegate-Protocol.h"
#import "CLSReportsControllerDelegate-Protocol.h"

@class CLSFileManager, CLSInternalReport, CLSNetworkClient, CLSReportsController, CLSSettings, NSOperationQueue, UIAlertView;

@interface CLSCrashReportingController : _ABCreateStringWithAddressDictionary <CLSNetworkClientDelegate, CLSReportsControllerDelegate>
{
    CLSFileManager *_fileMananger;
    CLSNetworkClient *_networkClient;
    CLSReportsController *_reportsController;
    NSOperationQueue *_operationQueue;
    CLSSettings *_settings;
    int _alwaysSendButtonIndex;
    UIAlertView *_crashReportSubmissionAlert;
    CLSInternalReport *_promptedReport;
    int _promptChoice;
    id <CLSCrashReportingControllerDelegate> _delegate;
    CLSFileManager *_fileManager;
}

- (void)setFileManager:(id)fp8;
- (id)fileManager;
- (void)setNetworkClient:(id)fp8;
- (id)networkClient;
- (void)setOperationQueue:(id)fp8;
- (id)operationQueue;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (void)reportsControllerDidCompleteAllSubmissions:(id)fp8;
- (void)reportsController:(id)fp8 didCompletePackageSubmission:(id)fp12 error:(id)fp16;
- (id)bundleIdentifierForReportsController:(id)fp8;
- (id)APIKeyForReportsController:(id)fp8;
- (id)settingsForReportsController:(id)fp8;
- (void)networkClient:(id)fp8 didFinishUploadWithPath:(id)fp12 error:(id)fp16;
- (BOOL)networkClientCanUseBackgroundSessions:(id)fp8;
- (void)didChangeUIOrientation:(id)fp8;
- (void)didChangeOrientation:(id)fp8;
- (void)didBecomeInactive:(id)fp8;
- (void)willBecomeActive:(id)fp8;
- (void)captureInitialNotificationStates;
- (void)setupStateNotifications;
- (BOOL)checkForAndCreateLaunchMarker;
- (BOOL)removeLaunchFailureMarker;
- (BOOL)launchFailureMarkerPresent;
- (BOOL)createLaunchFailureMarker;
- (id)launchFailureMarkerPath;
- (void)alertView:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (void)alertViewCancel:(id)fp8;
- (void)handlePromptCompleteForReport:(id)fp8 shouldSubmit:(BOOL)fp12 shouldMarkAlwaysSubmit:(BOOL)fp16;
- (void)setupAndDisplayAlertWithTitle:(id)fp8 message:(id)fp12 cancel:(id)fp16 send:(id)fp20 alwaysSend:(id)fp24 report:(id)fp28;
- (void)displayPermissionAlertForReport:(id)fp8;
- (void)retryUploadForReportAtPath:(id)fp8;
- (void)uploadPreexistingFiles:(id)fp8;
- (void)handleExistingFilesInPrepared;
- (void)handleExistingFilesInProcessing;
- (void)handleContentsInOtherReportingDirectories;
- (void)removeReport:(id)fp8;
- (void)handleDelegateCompletionForReport:(id)fp8 submit:(BOOL)fp12;
- (void)processExistingActiveReportPath:(id)fp8 asUrgent:(BOOL)fp12;
- (void)processExistingReportPaths:(id)fp8 asUrgent:(BOOL)fp12;
- (id)setupCurrentReport;
- (void)installCrashReportingHandlers:(CDAnonymousStruct1 *)fp8;
- (BOOL)prepareForNewLaunch;
- (id)bundleIdentifier;
- (BOOL)needsToPrompt;
- (BOOL)canProcessUrgentReports;
- (BOOL)delegateNeedsToBeInformedOfReports;
- (BOOL)packagingEnabled;
- (void)checkForUserPromptSetting;
- (BOOL)potentiallySubmittableCrashOccurred;
- (BOOL)attemptCurrentReportSubmission;
- (void)deliverCrashDelegateCallback;
- (unsigned int)machExceptionMask;
- (id)settings;
- (id)APIKey;
- (id)installIdentifier;
- (BOOL)firstInstall;
- (id)reportsController;
- (BOOL)checkPreconditions;
- (void)crashReportingSetupCompleted:(unsigned long long)fp8;
- (BOOL)startCrashReporterWithAPIKey:(id)fp8 betaToken:(id)fp12 profilingMark:(unsigned long long)fp16 report:(id)fp24;
- (BOOL)startWithProfilingMark:(unsigned long long)fp8 betaToken:(id)fp16;
- (id)clientWithOperationQueue:(id)fp8;
- (id)initWithFileManager:(id)fp8 delegate:(id)fp12;

@end
