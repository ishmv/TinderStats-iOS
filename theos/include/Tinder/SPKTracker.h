/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSTimer;

@interface SPKTracker : _ABCreateStringWithAddressDictionary
{
    NSMutableArray *_events;
    int _unarchivedEventCount;
    int _archiveFrequency;
    int _batchSize;
    NSString *_token;
    NSDictionary *_userProperties;
    NSTimer *_timer;
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned int _taskId;
    double _sendFrequency;
}

+ (id)sharedInstance;
+ (void)assertPropertyTypes:(id)fp8;
+ (BOOL)inBackground;
- (void)setTaskId:(unsigned int)fp8;
- (unsigned int)taskId;
- (void)setSerialQueue:(id)fp8;
- (id)serialQueue;
- (void)setTimer:(id)fp8;
- (id)timer;
- (id)userProperties;
- (void)setToken:(id)fp8;
- (id)token;
- (void)setBatchSize:(int)fp8;
- (int)batchSize;
- (void)setArchiveFrequency:(int)fp8;
- (int)archiveFrequency;
- (void)setSendFrequency:(double)fp8;
- (double)sendFrequency;
- (void).cxx_destruct;
- (void)applicationWillTerminate:(id)fp8;
- (void)applicationDidEnterBackground:(id)fp8;
- (void)applicationWillEnterForeground:(id)fp8;
- (void)applicationWillResignActive:(id)fp8;
- (void)applicationDidBecomeActive:(id)fp8;
- (void)handleCurrentUserWillLogout:(id)fp8;
- (id)readEventsFromDiskAtPath:(id)fp8;
- (void)unarchive;
- (void)writeEventsToDisk:(id)fp8 path:(id)fp12;
- (void)archiveFromSerialQueue;
- (void)archive;
- (void)stopEventSendTimer;
- (float)batchPercentToMaxSize:(id)fp8;
- (id)checkAndTrimBatchSize:(id)fp8 forEvents:(id)fp12;
- (id)buildBatchFromEvents:(id)fp8;
- (void)sendEvents:(id)fp8 endpoint:(id)fp12 batchComplete:(id)fp(null);
- (void)sendEventTimerFired:(id)fp8;
- (void)startEventSendTimerWithFrequency:(double)fp8;
- (void)checkForBatchTriggerEventsAndSend:(id)fp8;
- (void)track:(id)fp8 withProperties:(id)fp12 insertCommonProperties:(BOOL)fp16;
- (void)track:(id)fp8 withProperties:(id)fp12;
- (void)track:(id)fp8;
- (id)userPropertyValueForKey:(id)fp8;
- (void)removeUserPropertyValueForKey:(id)fp8;
- (void)addUserPropertyValue:(id)fp8 forKey:(id)fp12;
- (id)userLocale;
- (id)advertisingID;
- (id)vendorID;
- (id)deviceUniqueID;
- (id)carrierName;
- (float)screenWidth;
- (float)screenHeight;
- (id)manufacturerName;
- (id)deviceModel;
- (id)operatingSystemRevisionVersion;
- (id)operatingSystemMinorVersion;
- (id)operatingSystemMajorVersion;
- (id)operatingSystemVersion;
- (id)operatingSystemName;
- (id)applicationRevisionVersion;
- (id)applicationMinorVersion;
- (id)applicationMajorVersion;
- (id)applicationShortVersion;
- (id)applicationVersion;
- (id)applicationInternalVersion;
- (id)libraryVersion;
- (id)description;
- (void)setup;
- (id)init;
- (void)dealloc;
- (void)trackUserEvent;
- (void)trackDeviceEvent;

@end

