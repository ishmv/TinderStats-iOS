/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "TNDRDialogViewController.h"

#import "TNDRRecommendationViewControllerRecsSessionTracking-Protocol.h"

@class NSString, NSTimer, TNDRLikeGamepadButton;

@interface TNDRRateLimitRoadblockDialogViewController : TNDRDialogViewController <TNDRRecommendationViewControllerRecsSessionTracking>
{
    NSString *_otherID;
    id <TNDRSubscriptionPaywallViewControllerDelegate> _paywallDelegate;
    NSTimer *_roadblockCountdownTimer;
    TNDRLikeGamepadButton *_heartDrainingView;
}

+ (id)viewControllerNavigationKey;
- (void)setHeartDrainingView:(id)fp8;
- (id)heartDrainingView;
- (void)setRoadblockCountdownTimer:(id)fp8;
- (id)roadblockCountdownTimer;
- (void)setPaywallDelegate:(id)fp8;
- (id)paywallDelegate;
- (void)setOtherID:(id)fp8;
- (id)otherID;
- (void).cxx_destruct;
- (BOOL)inboundSegueShouldTriggerRecsSessionEnd;
- (void)handleTapInView:(id)fp8;
- (void)handleUserDidSelectPurchaseFromDialog:(id)fp8;
- (id)productInfo;
- (void)requestDismissal;
- (void)stopUpdateTimer:(id)fp8;
- (void)updateDetailTextForInvalidDeviceTime;
- (void)updateDetailText:(id)fp8;
- (id)roadblockTimeLeftAttributedStringForText:(id)fp8;
- (id)roadBlockTimeLeftWithTimeInterval:(double)fp8;
- (id)roadBlockTimeLeft;
- (id)buttonAttributedTitleWithPrice;
- (void)setupFooterViewButtonWithPrice;
- (void)setupFooterView;
- (void)setupHeaderView;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (id)roadBlockBaseDescription;
- (id)roadBlockTitle;
- (id)initWithOtherID:(id)fp8;

@end
