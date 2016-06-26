/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "ABKBaseLocationProvider.h"

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager;

@interface ABKSinglePointLocationProvider : ABKBaseLocationProvider <CLLocationManagerDelegate>
{
    BOOL _isCollectingLocation;
    CLLocationManager *_locationManager;
}

- (void)setIsCollectingLocation:(BOOL)fp8;
- (BOOL)isCollectingLocation;
- (void)setLocationManager:(id)fp8;
- (id)locationManager;
- (void).cxx_destruct;
- (void)tryPromptForWhenInUseAuthorization;
- (void)locationManager:(id)fp8 didUpdateLocations:(id)fp12;
- (void)dealloc;
- (void)stopUpdatingLocation;
- (void)stopUpdatingLocationOnMainThread;
- (void)logSingleLocation;

@end
