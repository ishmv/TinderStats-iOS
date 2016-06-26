/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSError, NSMutableDictionary, NSString;

@interface FBSDKLoginManagerLogger : _ABCreateStringWithAddressDictionary
{
    NSString *_identifier;
    NSMutableDictionary *_extras;
    NSString *_lastResult;
    NSError *_lastError;
    NSString *_authMethod;
}

+ (id)loggerFromParameters:(id)fp8;
- (void).cxx_destruct;
- (void)logEvent:(id)fp8 result:(id)fp12 error:(id)fp16;
- (void)logEvent:(id)fp8 params:(id)fp12;
- (id)_parametersForNewEvent;
- (id)clientStateForAuthMethod:(id)fp8 andExistingState:(id)fp12;
- (void)systemAuthDidShowDialog:(BOOL)fp8 isUnTOSedDevice:(BOOL)fp12;
- (void)willAttemptAppSwitchingBehavior;
- (id)parametersWithTimeStampAndClientState:(id)fp8 forAuthMethod:(id)fp12;
- (void)endLoginWithResult:(id)fp8 error:(id)fp12;
- (void)startAuthMethod:(id)fp8;
- (void)endSession;
- (void)startSessionForLoginManager:(id)fp8;
- (id)init;

@end
