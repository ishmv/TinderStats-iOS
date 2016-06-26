/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class ABKInAppMessageController, ABKPersistentData, ABKTriggerAssetManager, NSArray, NSDate, NSMutableSet;

@interface ABKTriggerManager : _ABCreateStringWithAddressDictionary
{
    BOOL _openAppTriggeredForCurrentSession;
    ABKPersistentData *_persistentData;
    NSArray *_triggerActions;
    ABKTriggerAssetManager *_assetManager;
    ABKInAppMessageController *_inAppMessageController;
    NSDate *_lastTriggerTime;
    NSMutableSet *_triggeredActionSet;
    double _triggerTimeInterval;
}

- (void)setTriggeredActionSet:(id)fp8;
- (id)triggeredActionSet;
- (void)setLastTriggerTime:(id)fp8;
- (id)lastTriggerTime;
- (void)setTriggerTimeInterval:(double)fp8;
- (double)triggerTimeInterval;
- (void)setOpenAppTriggeredForCurrentSession:(BOOL)fp8;
- (BOOL)openAppTriggeredForCurrentSession;
- (void)setInAppMessageController:(id)fp8;
- (id)inAppMessageController;
- (void)setAssetManager:(id)fp8;
- (id)assetManager;
- (void)setTriggerActions:(id)fp8;
- (id)triggerActions;
- (void)setPersistentData:(id)fp8;
- (id)persistentData;
- (void).cxx_destruct;
- (void)resetOpenAppTriggeredForCurrentSession;
- (void)clearExistingTriggers;
- (void)dealloc;
- (void)saveTriggerActionsOnDisk;
- (id)getBestMatchingTriggerAction:(id)fp8;
- (void)handleTriggerFromNotification:(id)fp8;
- (void)receiveTriggersFromNotification:(id)fp8;
- (id)initWithPersistentData:(id)fp8 inAppMessageController:(id)fp12 appboyOptions:(id)fp16;

@end

