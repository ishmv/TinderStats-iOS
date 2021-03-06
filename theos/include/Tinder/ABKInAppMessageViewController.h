/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class ABKInAppMessage, ABKLabel, UIImageView, UILabel;

@interface ABKInAppMessageViewController : _ABCreateStringWithAddressDictionary
{
    BOOL _isiPad;
    ABKInAppMessage *_inAppMessage;
    UIImageView *_iconImageView;
    UILabel *_iconLabelView;
    ABKLabel *_inAppMessageMessageLabel;
}

- (void)setIsiPad:(BOOL)fp8;
- (BOOL)isiPad;
- (void)setInAppMessageMessageLabel:(id)fp8;
- (id)inAppMessageMessageLabel;
- (void)setIconLabelView:(id)fp8;
- (id)iconLabelView;
- (void)setIconImageView:(id)fp8;
- (id)iconImageView;
- (void)setInAppMessage:(id)fp8;
- (id)inAppMessage;
- (void).cxx_destruct;
- (void)setFontToLabel:(id)fp8 withDefaultiPhoneFont:(id)fp12 defaultiPadFont:(id)fp16 className:(id)fp20;
- (void)moveInAppMessageViewOnScreen:(struct CGRect)fp8;
- (void)moveInAppMessageViewOffScreen:(struct CGRect)fp8;
- (void)viewWillTransitionToSize:(struct CGSize)fp8 withTransitionCoordinator:(id)fp16;
- (BOOL)applyIconImageToImageView:(id)fp8;
- (BOOL)applyIconToLabelView:(id)fp8;
- (void)hideInAppMessage:(BOOL)fp8;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)viewDidLoad;
- (id)initWithInAppMessage:(id)fp8;

@end

