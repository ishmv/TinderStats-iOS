/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class ABKInAppMessage, ABKInAppMessageViewController, ABKInAppMessageWindow, NSTimer, UIWindow;

@interface ABKInAppMessageWindowController : _ABCreateStringWithAddressDictionary <UIGestureRecognizerDelegate>
{
    BOOL _isInRotation;
    ABKInAppMessageWindow *_inAppMessageWindow;
    NSTimer *_slideAwayTimer;
    ABKInAppMessage *_inAppMessage;
    id <ABKInAppMessageControllerDelegate> _inAppMessageDelegate;
    ABKInAppMessageViewController *_inAppMessageViewController;
    unsigned int _supportedOrientationMasks;
    int _supportedOrientations;
    UIWindow *_appWindow;
    struct CGPoint _inAppMessagePreviousPanPosition;
    struct CGPoint _inAppMessageOnScreenCenter;
}

- (void)setIsInRotation:(BOOL)fp8;
- (BOOL)isInRotation;
- (void)setAppWindow:(id)fp8;
- (id)appWindow;
- (void)setSupportedOrientations:(int)fp8;
- (int)supportedOrientations;
- (void)setSupportedOrientationMasks:(unsigned int)fp8;
- (unsigned int)supportedOrientationMasks;
- (void)setInAppMessageOnScreenCenter:(struct CGPoint)fp8;
- (struct CGPoint)inAppMessageOnScreenCenter;
- (void)setInAppMessagePreviousPanPosition:(struct CGPoint)fp8;
- (struct CGPoint)inAppMessagePreviousPanPosition;
- (void)setInAppMessageViewController:(id)fp8;
- (id)inAppMessageViewController;
- (void)setInAppMessageDelegate:(id)fp8;
- (id)inAppMessageDelegate;
- (void)setInAppMessage:(id)fp8;
- (id)inAppMessage;
- (void)setSlideAwayTimer:(id)fp8;
- (id)slideAwayTimer;
- (void)setInAppMessageWindow:(id)fp8;
- (id)inAppMessageWindow;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize)fp8 withTransitionCoordinator:(id)fp16;
- (BOOL)gestureRecognizer:(id)fp8 shouldReceiveTouch:(id)fp12;
- (int)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (void)willRotateToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (void)displayViewControllerAsAFormSheetModalView:(id)fp8;
- (void)displayModalFeedView;
- (void)displayModalWebViewWithURI:(id)fp8;
- (void)inAppMessageClickedWithActionType:(int)fp8 URI:(id)fp12;
- (void)inAppMessageTapped:(id)fp8;
- (void)animateInAppMessageWindowAway;
- (void)inAppMessageTimerFired:(id)fp8;
- (void)displayInAppMessageViewWithAnimation;
- (void)hideInAppMessageWindow;
- (void)keyboardWasShown;
- (void)inAppSlideupWasPanned:(id)fp8;
- (void)invalidateSlideAwayTimer;
- (void)viewDidLoad;
- (id)initWithInAppMessage:(id)fp8 inAppMessageViewController:(id)fp12 andInAppMessageDelegate:(id)fp16;

@end
