/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSMutableSet, NSString;

@interface FBSDKViewImpressionTracker : _ABCreateStringWithAddressDictionary
{
    NSMutableSet *_trackedImpressions;
    NSString *_eventName;
}

+ (id)impressionTrackerWithEventName:(id)fp8;
- (id)eventName;
- (void).cxx_destruct;
- (void)_applicationDidEnterBackgroundNotification:(id)fp8;
- (void)logImpressionWithIdentifier:(id)fp8 parameters:(id)fp12;
- (void)dealloc;
- (id)initWithEventName:(id)fp8;

@end

