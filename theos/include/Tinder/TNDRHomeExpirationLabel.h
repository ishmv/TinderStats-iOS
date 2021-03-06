/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSDate, NSDateFormatter, NSTimer;

@interface TNDRHomeExpirationLabel : _ABCreateStringWithAddressDictionary
{
    NSDate *_expirationDate;
    NSTimer *_expirationTimer;
    NSDateFormatter *_dateFormatter;
}

+ (BOOL)requiresConstraintBasedLayout;
- (void)setDateFormatter:(id)fp8;
- (id)dateFormatter;
- (void)setExpirationTimer:(id)fp8;
- (id)expirationTimer;
- (id)expirationDate;
- (void).cxx_destruct;
- (void)notifyGroupExpiration;
- (void)handleTimerElapsed:(id)fp8;
- (void)setHidden:(BOOL)fp8;
- (void)setExpirationDate:(id)fp8;
- (id)dateStringFormat;
- (void)setupDateFormatter;
- (void)setupLabel;
- (void)setup;
- (id)init;

@end

