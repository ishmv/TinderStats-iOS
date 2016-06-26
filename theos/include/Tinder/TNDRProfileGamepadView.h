/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class CAGradientLayer, NSArray, NSLayoutConstraint, TNDRProfileGamepadButton;

@interface TNDRProfileGamepadView : _ABCreateStringWithAddressDictionary
{
    BOOL _buttonPOPAnimationCompleted;
    TNDRProfileGamepadButton *_passButton;
    TNDRProfileGamepadButton *_superLikeButton;
    TNDRProfileGamepadButton *_likeButton;
    unsigned int _gamepadType;
    NSLayoutConstraint *_likeButtonHorizontalConstraint;
    NSLayoutConstraint *_passButtonHorizontalConstraint;
    NSLayoutConstraint *_superLikeButtonVerticalConstraint;
    NSArray *_buttonConstraints;
    CAGradientLayer *_backDrop;
}

+ (BOOL)requiresConstraintBasedLayout;
- (void)setBackDrop:(id)fp8;
- (id)backDrop;
- (void)setButtonConstraints:(id)fp8;
- (id)buttonConstraints;
- (void)setSuperLikeButtonVerticalConstraint:(id)fp8;
- (id)superLikeButtonVerticalConstraint;
- (void)setPassButtonHorizontalConstraint:(id)fp8;
- (id)passButtonHorizontalConstraint;
- (void)setLikeButtonHorizontalConstraint:(id)fp8;
- (id)likeButtonHorizontalConstraint;
- (unsigned int)gamepadType;
- (BOOL)buttonPOPAnimationCompleted;
- (id)likeButton;
- (id)superLikeButton;
- (id)passButton;
- (void).cxx_destruct;
- (void)animateButtonsOut;
- (void)animateButtonsIn;
- (float)superLikeButtonHeight;
- (struct CGPoint)superLikeButtonCenterPoint;
- (void)prepareForAnimationIn;
- (void)layoutSubviews;
- (void)setupButtonConstraints;
- (float)buttonPaddingOffset;
- (void)updateConstraints;
- (void)setupBackdrop;
- (void)setupButtons;
- (float)superLikeButtonIconYOffset;
- (float)likeButtonIconYOffset;
- (id)initWithGamepadType:(unsigned int)fp8;

@end
