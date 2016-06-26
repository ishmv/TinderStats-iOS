/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class UIViewController;

@interface TNDRProfilePreviewTransitioning : _ABCreateStringWithAddressDictionary <UIViewControllerAnimatedTransitioning>
{
    BOOL _reverse;
    UIViewController *_source;
}

- (void)setSource:(id)fp8;
- (id)source;
- (void)setReverse:(BOOL)fp8;
- (BOOL)reverse;
- (void).cxx_destruct;
- (double)transitionDuration:(id)fp8;
- (void)executeDismissalAnimation:(id)fp8;
- (void)executePresentationAnimation:(id)fp8;
- (void)animateTransition:(id)fp8;

@end
