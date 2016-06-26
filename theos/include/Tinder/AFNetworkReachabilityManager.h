/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@interface AFNetworkReachabilityManager : _ABCreateStringWithAddressDictionary
{
    int _networkReachabilityStatus;
    id _networkReachability;
    id _networkReachabilityStatusBlock;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)fp8;
+ (id)manager;
+ (id)managerForAddress:(const void *)fp8;
+ (id)managerForDomain:(id)fp8;
+ (id)sharedManager;
- (void)setNetworkReachabilityStatusBlock:(id)fp(null);
- (id)networkReachabilityStatusBlock;
- (void)setNetworkReachability:(id)fp8;
- (id)networkReachability;
- (void)setNetworkReachabilityStatus:(int)fp8;
- (int)networkReachabilityStatus;
- (void).cxx_destruct;
- (void)setReachabilityStatusChangeBlock:(id)fp(null);
- (id)localizedNetworkReachabilityStatusString;
- (void)stopMonitoring;
- (void)startMonitoring;
- (BOOL)isReachableViaWiFi;
- (BOOL)isReachableViaWWAN;
- (BOOL)isReachable;
- (void)dealloc;
- (id)init;
- (id)initWithReachability:(struct __SCNetworkReachability *)fp8;

@end
