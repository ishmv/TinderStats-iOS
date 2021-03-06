/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class UIButton, UIImage, UIImageView;

@interface TNDRHomeToProfilePreviewAnimationController : _ABCreateStringWithAddressDictionary <UIViewControllerAnimatedTransitioning>
{
    BOOL _reversed;
    UIImage *_fullSizeAvatarImage;
    UIButton *_editProfileButton;
    float _origCornerRadius;
    id _presentCompletion;
    UIImageView *_avatarToFinalize;
    float _intermediateCornerRadius;
    struct CGRect _avatarRect;
}

- (void)setIntermediateCornerRadius:(float)fp8;
- (float)intermediateCornerRadius;
- (void)setAvatarToFinalize:(id)fp8;
- (id)avatarToFinalize;
- (void)setPresentCompletion:(id)fp(null);
- (id)presentCompletion;
- (void)setOrigCornerRadius:(float)fp8;
- (float)origCornerRadius;
- (void)setEditProfileButton:(id)fp8;
- (id)editProfileButton;
- (void)setAvatarRect:(struct CGRect)fp8;
- (struct CGRect)avatarRect;
- (void)setFullSizeAvatarImage:(id)fp8;
- (id)fullSizeAvatarImage;
- (void)setReversed:(BOOL)fp8;
- (BOOL)isReversed;
- (void).cxx_destruct;
- (void)animateDismissal:(id)fp8;
- (void)animationDidStop:(id)fp8 finished:(BOOL)fp12;
- (void)animatePresentation:(id)fp8;
- (void)animateTransition:(id)fp8;
- (double)transitionDuration:(id)fp8;

@end

