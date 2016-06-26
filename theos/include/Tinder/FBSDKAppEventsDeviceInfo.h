/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSString;

@interface FBSDKAppEventsDeviceInfo : _ABCreateStringWithAddressDictionary
{
    NSString *_carrierName;
    NSString *_timeZoneAbbrev;
    unsigned long long _remainingDiskSpaceGB;
    NSString *_timeZoneName;
    NSString *_bundleIdentifier;
    NSString *_longVersion;
    NSString *_shortVersion;
    NSString *_sysVersion;
    NSString *_machine;
    NSString *_language;
    unsigned long long _totalDiskSpaceGB;
    unsigned long long _coreCount;
    float _width;
    float _height;
    float _density;
    long _lastGroup1CheckTime;
    BOOL _isEncodingDirty;
    NSString *_encodedDeviceInfo;
}

+ (id)_getCarrier;
+ (unsigned int)_readSysCtlUInt:(int)fp8 type:(int)fp12;
+ (unsigned int)_coreCount;
+ (id)_getRemainingDiskSpace;
+ (id)_getTotalDiskSpace;
+ (id)sharedDeviceInfo;
+ (void)initialize;
+ (void)extendDictionaryWithDeviceInfo:(id)fp8;
- (void).cxx_destruct;
- (id)_generateEncoding;
- (void)_collectGroup1Data;
- (BOOL)_isGroup1Expired;
- (void)_collectPersistentData;
- (void)setEncodedDeviceInfo:(id)fp8;
- (id)encodedDeviceInfo;
- (id)init;

@end

