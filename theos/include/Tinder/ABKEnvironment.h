/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSString;

@interface ABKEnvironment : _ABCreateStringWithAddressDictionary
{
    NSString *_sdkVersion;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    double _configTime;
}

- (void)setConfigTime:(double)fp8;
- (double)configTime;
- (void)setBundleVersion:(id)fp8;
- (id)bundleVersion;
- (void)setBundleIdentifier:(id)fp8;
- (id)bundleIdentifier;
- (void)setSdkVersion:(id)fp8;
- (id)sdkVersion;
- (void).cxx_destruct;
- (id)proxyForJson;
- (id)initWithBundleInformationAndConfigTime:(double)fp8;
- (id)initWithBundleInformation;
- (id)init;

@end

