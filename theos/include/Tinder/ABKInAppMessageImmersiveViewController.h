/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "ABKInAppMessageViewController.h"

@class ABKLabel, NSLayoutConstraint;

@interface ABKInAppMessageImmersiveViewController : ABKInAppMessageViewController
{
    ABKLabel *_inAppMessageHeaderLabel;
    NSLayoutConstraint *_headerBodySpaceConstraint;
}

- (void)setHeaderBodySpaceConstraint:(id)fp8;
- (id)headerBodySpaceConstraint;
- (void)setInAppMessageHeaderLabel:(id)fp8;
- (id)inAppMessageHeaderLabel;
- (void).cxx_destruct;
- (void)changeCloseButtonColor;
- (void)removeActionsFromInAppMessageButtons;
- (void)buttonClicked:(id)fp8;
- (void)setButton:(id)fp8 height:(float)fp12;
- (void)createTwoButtonsAndConstraintsWithHeight:(float)fp8 sideMargin:(float)fp12 bottom:(float)fp16 space:(float)fp20 onView:(id)fp24;
- (void)createOneButtonAndConstraintsWithHeight:(float)fp8 sideMargin:(float)fp12 bottom:(float)fp16 onView:(id)fp20;
- (void)dismissInAppMessage:(id)fp8;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)setInAppMessage:(id)fp8;

@end
