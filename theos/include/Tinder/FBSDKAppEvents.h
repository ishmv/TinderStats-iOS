/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class FBSDKAppEventsState, FBSDKServerConfiguration, NSString, NSTimer;

@interface FBSDKAppEvents : _ABCreateStringWithAddressDictionary
{
    BOOL _explicitEventsLoggedYet;
    NSTimer *_flushTimer;
    NSTimer *_attributionIDRecheckTimer;
    FBSDKServerConfiguration *_serverConfiguration;
    FBSDKAppEventsState *_appEventsState;
    BOOL _disableTimer;
    unsigned int _flushBehavior;
    NSString *_pushNotificationsDeviceTokenString;
}

+ (id)requestForCustomAudienceThirdPartyIDWithAccessToken:(id)fp8;
+ (id)singleton;
+ (void)logImplicitEvent:(id)fp8 valueToSum:(id)fp12 parameters:(id)fp16 accessToken:(id)fp20;
+ (void)flush;
+ (void)setLoggingOverrideAppID:(id)fp8;
+ (id)loggingOverrideAppID;
+ (void)setFlushBehavior:(unsigned int)fp8;
+ (unsigned int)flushBehavior;
+ (void)setPushNotificationsDeviceToken:(id)fp8;
+ (void)activateApp;
+ (void)logPushNotificationOpen:(id)fp8 action:(id)fp12;
+ (void)logPushNotificationOpen:(id)fp8;
+ (void)logPurchase:(double)fp8 currency:(id)fp16 parameters:(id)fp20 accessToken:(id)fp24;
+ (void)logPurchase:(double)fp8 currency:(id)fp16 parameters:(id)fp20;
+ (void)logPurchase:(double)fp8 currency:(id)fp16;
+ (void)logEvent:(id)fp8 valueToSum:(id)fp12 parameters:(id)fp16 accessToken:(id)fp20;
+ (void)logEvent:(id)fp8 valueToSum:(double)fp12 parameters:(id)fp20;
+ (void)logEvent:(id)fp8 parameters:(id)fp12;
+ (void)logEvent:(id)fp8 valueToSum:(double)fp12;
+ (void)logEvent:(id)fp8;
+ (void)initialize;
- (void)setPushNotificationsDeviceTokenString:(id)fp8;
- (id)pushNotificationsDeviceTokenString;
- (void)setDisableTimer:(BOOL)fp8;
- (BOOL)disableTimer;
- (void)setFlushBehavior:(unsigned int)fp8;
- (unsigned int)flushBehavior;
- (void).cxx_destruct;
- (void)applicationMovingFromActiveStateOrTerminating;
- (void)applicationDidBecomeActive;
- (void)appSettingsFetchStateResetTimerFired:(id)fp8;
- (void)flushTimerFired:(id)fp8;
- (void)handleActivitiesPostCompletion:(id)fp8 loggingEntry:(id)fp12 appEventsState:(id)fp16;
- (void)flushOnMainQueue:(id)fp8 forReason:(unsigned int)fp12;
- (void)checkPersistedEvents;
- (void)instanceLogEvent:(id)fp8 valueToSum:(id)fp12 parameters:(id)fp16 isImplicitlyLogged:(BOOL)fp20 accessToken:(id)fp24;
- (void)fetchServerConfiguration:(id)fp(null);
- (void)publishInstall;
- (id)appID;
- (void)flushForReason:(unsigned int)fp8;
- (void)dealloc;
- (id)init;

@end

