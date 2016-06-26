/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol CLSCrashReportingControllerDelegate <NSObject>
- (id)settingsForCrashReportingController:(id)fp8;
- (BOOL)isFirstInstallForCrashReportingController:(id)fp8;
- (id)installIDForCrashReportingController:(id)fp8;
- (id)APIKeyForCrashReportingController:(id)fp8;
- (BOOL)reportingController:(id)fp8 ensureDeliveryOfUnixSignal:(int)fp12;
- (void)reportingController:(id)fp8 internalDidDetectReportForLastExecution:(id)fp12;
- (void)reportingController:(id)fp8 didDetectReportForLastExecution:(id)fp12 completionHandler:(id)fp(null);
- (BOOL)reportingControllerMustInformDelegateOfReports:(id)fp8;
- (BOOL)reportingControllerCanUseBackgroundSessions:(id)fp8;
- (void)detectedCrash;
- (BOOL)shouldInstallCrashCallback;
@end

