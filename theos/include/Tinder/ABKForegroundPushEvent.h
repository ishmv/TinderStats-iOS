/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "ABKEvent.h"

@class NSString;

@interface ABKForegroundPushEvent : ABKEvent
{
    NSString *_campaignId;
}

- (void)setCampaignId:(id)fp8;
- (id)campaignId;
- (void).cxx_destruct;
- (id)getDataAsJson;
- (id)getType;
- (id)initWithCampaignId:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;

@end

