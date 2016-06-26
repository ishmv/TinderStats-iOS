/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "ABKTriggeredAction.h"

@class ABKInAppMessage, ABKInAppMessageController;

@interface ABKInAppMessageTriggeredAction : ABKTriggeredAction
{
    ABKInAppMessage *_inAppMessage;
    ABKInAppMessageController *_inAppMessageController;
}

- (void)setInAppMessageController:(id)fp8;
- (id)inAppMessageController;
- (void)setInAppMessage:(id)fp8;
- (id)inAppMessage;
- (void).cxx_destruct;
- (id)resourceLink;
- (void)prefetchAssets;
- (id)inAppMessageZipFileURLString;
- (id)inAppMessageImageURLString;
- (void)displayInAppMessageWithDelay;
- (void)logControlGroupTriggerEvent;
- (void)performTriggeredAction;

@end

