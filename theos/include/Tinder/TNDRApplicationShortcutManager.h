/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@interface TNDRApplicationShortcutManager : _ABCreateStringWithAddressDictionary
{
}

+ (id)sharedInstance;
- (void)updateHomeScreenApplicationShortcuts;
- (void)removeAllApplicationShortcuts;
- (void)handleCurrentUserDidClearInformation:(id)fp8;
- (void)handleApplicationDidBackground:(id)fp8;
- (void)registerNotifications;
- (void)handleApplicationShortcutItem:(id)fp8 forLaunch:(BOOL)fp12 completionHandler:(id)fp(null);
- (void)setup;

@end

