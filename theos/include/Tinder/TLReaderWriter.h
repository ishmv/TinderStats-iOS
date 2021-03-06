/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSBundle, NSDate, NSObject<OS_dispatch_queue>;

@interface TLReaderWriter : _ABCreateStringWithAddressDictionary
{
    BOOL _isWritingData;
    BOOL _isWritingEvents;
    BOOL _pendingWriteEvents;
    BOOL _isWritingUserAttributes;
    BOOL _pendingUserAttributes;
    NSBundle *_localBundle;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_lastEventWriteDate;
    NSDate *_lastUserWriteDate;
}

+ (id)getLocalCacheImagePath:(id)fp8 scale:(float)fp12;
+ (id)singleton;
- (void)setLastUserWriteDate:(id)fp8;
- (id)lastUserWriteDate;
- (void)setPendingUserAttributes:(BOOL)fp8;
- (BOOL)pendingUserAttributes;
- (void)setIsWritingUserAttributes:(BOOL)fp8;
- (BOOL)isWritingUserAttributes;
- (void)setLastEventWriteDate:(id)fp8;
- (id)lastEventWriteDate;
- (void)setPendingWriteEvents:(BOOL)fp8;
- (BOOL)pendingWriteEvents;
- (void)setIsWritingEvents:(BOOL)fp8;
- (BOOL)isWritingEvents;
- (void)setQueue:(id)fp8;
- (id)queue;
- (void)setLocalBundle:(id)fp8;
- (id)localBundle;
- (void)setIsWritingData:(BOOL)fp8;
- (BOOL)isWritingData;
- (void).cxx_destruct;
- (id)checkJSONEvents:(id)fp8;
- (void)saveImageDataToDisk:(id)fp8 imagePath:(id)fp12 scale:(float)fp16;
- (id)getAppUserAttributesFilePath;
- (void)writeAppUserAttributesToDisk:(id)fp8;
- (id)readAppUserAttributesFromDisk;
- (id)getJSONEventsFilePath;
- (void)writeEventsToDisk;
- (id)readEventsFromDisk;
- (id)getJSONDataFilePath;
- (void)deletePropertiesFromDisk;
- (void)writePropertiesDataToDisk:(id)fp8;
- (void)writeDataToDisk:(id)fp8 path:(id)fp12 returnBlock:(id)fp(null);
- (void)readPropertiesFromDiskReturnBlock:(id)fp(null);
- (void)findLocalBundle;
- (id)init;

@end

