/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "TNDRViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class UIView;

@interface TNDRButtonViewSwappingOverlayAnimationController : _ABCreateStringWithAddressDictionary <UIViewControllerAnimatedTransitioning, TNDRViewControllerAnimatedTransitioning>
{
    BOOL _presenting;
    UIView *_buttonView;
    id _presentationAnimationCompletion;
    id _dismissalAnimationCompletion;
    UIView *_buttonViewOriginalSuperview;
    struct CGPoint _buttonViewOriginalCenter;
}

- (void)setButtonViewOriginalCenter:(struct CGPoint)fp8;
- (struct CGPoint)buttonViewOriginalCenter;
- (void)setButtonViewOriginalSuperview:(id)fp8;
- (id)buttonViewOriginalSuperview;
- (void)setDismissalAnimationCompletion:(id)fp(null);
- (id)dismissalAnimationCompletion;
- (void)setPresentationAnimationCompletion:(id)fp(null);
- (id)presentationAnimationCompletion;
- (void)setButtonView:(id)fp8;
- (id)buttonView;
- (void)setPresenting:(BOOL)fp8;
- (BOOL)isPresenting;
- (void).cxx_destruct;
- (void)executeDismissalAnimation:(id)fp8;
- (void)executePresentationAnimation:(id)fp8;
- (void)animateTransition:(id)fp8;
- (double)transitionDuration:(id)fp8;

@end

