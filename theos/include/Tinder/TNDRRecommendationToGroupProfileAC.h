/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class TNDRGroupCardCell, UIViewController;

@interface TNDRRecommendationToGroupProfileAC : _ABCreateStringWithAddressDictionary <UIViewControllerAnimatedTransitioning>
{
    BOOL _isPresenting;
    UIViewController *_source;
    TNDRGroupCardCell *_cell;
    double _presentationDuration;
    double _dismissalDuration;
}

- (void)setCell:(id)fp8;
- (id)cell;
- (void)setSource:(id)fp8;
- (id)source;
- (void)setIsPresenting:(BOOL)fp8;
- (BOOL)isPresenting;
- (void)setDismissalDuration:(double)fp8;
- (double)dismissalDuration;
- (void)setPresentationDuration:(double)fp8;
- (double)presentationDuration;
- (void).cxx_destruct;
- (void)executeDismissalAnimation:(id)fp8;
- (void)executePresentationAnimation:(id)fp8;
- (void)animateTransition:(id)fp8;
- (double)transitionDuration:(id)fp8;
- (id)init;

@end

