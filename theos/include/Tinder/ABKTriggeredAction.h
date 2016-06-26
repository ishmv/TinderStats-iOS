/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "NSCoding-Protocol.h"

@class ABKTriggerAssetManager, NSArray, NSDate, NSDictionary, NSString;

@interface ABKTriggeredAction : _ABCreateStringWithAddressDictionary <NSCoding>
{
    BOOL _prefetch;
    NSArray *_triggerConditions;
    NSDate *_startTime;
    NSDate *_endTime;
    int _priority;
    NSDictionary *_data;
    int _delay;
    NSString *_ID;
    int _reEligibility;
    NSDate *_lastTriggeredTime;
    ABKTriggerAssetManager *_assetManager;
}

+ (id)getTriggeredActionFromDictionary:(id)fp8;
- (void)setAssetManager:(id)fp8;
- (id)assetManager;
- (void)setLastTriggeredTime:(id)fp8;
- (id)lastTriggeredTime;
- (void)setReEligibility:(int)fp8;
- (int)reEligibility;
- (void)setPrefetch:(BOOL)fp8;
- (BOOL)prefetch;
- (void)setID:(id)fp8;
- (id)ID;
- (void)setDelay:(int)fp8;
- (int)delay;
- (void)setData:(id)fp8;
- (id)data;
- (void)setPriority:(int)fp8;
- (int)priority;
- (void)setEndTime:(id)fp8;
- (id)endTime;
- (void)setStartTime:(id)fp8;
- (id)startTime;
- (void)setTriggerConditions:(id)fp8;
- (id)triggerConditions;
- (void).cxx_destruct;
- (void)prefetchAssets;
- (id)resourceLink;
- (void)performTriggeredAction;
- (BOOL)isEligibleAndWithinSchedule;
- (int)triggerActionCompare:(id)fp8;
- (BOOL)respondsToTrigger:(id)fp8;
- (void)setNilValueForKey:(id)fp8;
- (void)setValue:(id)fp8 forUndefinedKey:(id)fp12;
- (void)setValue:(id)fp8 forKey:(id)fp12;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)init;

@end

