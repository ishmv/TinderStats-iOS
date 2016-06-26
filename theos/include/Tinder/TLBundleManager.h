/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSMutableDictionary;

@interface TLBundleManager : _ABCreateStringWithAddressDictionary
{
    BOOL _isCheckingBundle;
    NSMutableDictionary *_nibNameToStoryboardIDDic;
}

+ (id)sharedManager;
- (void)setNibNameToStoryboardIDDic:(id)fp8;
- (id)nibNameToStoryboardIDDic;
- (void)setIsCheckingBundle:(BOOL)fp8;
- (BOOL)isCheckingBundle;
- (void).cxx_destruct;
- (BOOL)hasTLBundleIdentifier;
- (id)findAppIconFileName;
- (id)getNibNameForStoryboardID:(id)fp8 storyboardName:(id)fp12;
- (BOOL)checkData:(id)fp8 containsStrings:(id)fp12;
- (void)checkBundle;
- (id)init;

@end

