/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSString;

@interface FBSDKTimeSpentData : _ABCreateStringWithAddressDictionary
{
    BOOL _isCurrentlyLoaded;
    BOOL _shouldLogActivateEvent;
    BOOL _shouldLogDeactivateEvent;
    long _secondsSpentInCurrentSession;
    long _timeSinceLastSuspend;
    int _numInterruptionsInCurrentSession;
    long _lastRestoreTime;
    long _lastSuspendTime;
    NSString *_sessionID;
}

+ (void)registerAutoResetSourceApplication;
+ (void)resetSourceApplication;
+ (id)getSourceApplication;
+ (void)setSourceApplication:(id)fp8 isFromAppLink:(BOOL)fp12;
+ (void)setSourceApplication:(id)fp8 openURL:(id)fp12;
+ (id)singleton;
+ (void)restore:(BOOL)fp8;
+ (void)suspend;
- (void).cxx_destruct;
- (id)appEventsParametersForDeactivate;
- (id)appEventsParametersForActivate;
- (void)instanceRestore:(BOOL)fp8;
- (void)instanceSuspend;

@end

