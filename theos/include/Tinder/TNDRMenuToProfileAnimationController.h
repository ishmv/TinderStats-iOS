/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@interface TNDRMenuToProfileAnimationController : _ABCreateStringWithAddressDictionary <UIViewControllerAnimatedTransitioning>
{
    BOOL _reversed;
}

- (void)setReversed:(BOOL)fp8;
- (BOOL)isReversed;
- (void)animationEnded:(BOOL)fp8;
- (void)animateDismissalInContext:(id)fp8;
- (void)animatePresentationInContext:(id)fp8;
- (void)animateTransition:(id)fp8;
- (double)transitionDuration:(id)fp8;

@end

