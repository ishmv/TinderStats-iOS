/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class UIView;

@interface NJKWebViewProgressView : _ABCreateStringWithAddressDictionary
{
    float _progress;
    UIView *_progressBarView;
    double _barAnimationDuration;
    double _fadeAnimationDuration;
    double _fadeOutDelay;
}

- (void)setFadeOutDelay:(double)fp8;
- (double)fadeOutDelay;
- (void)setFadeAnimationDuration:(double)fp8;
- (double)fadeAnimationDuration;
- (void)setBarAnimationDuration:(double)fp8;
- (double)barAnimationDuration;
- (void)setProgressBarView:(id)fp8;
- (id)progressBarView;
- (float)progress;
- (void).cxx_destruct;
- (void)setProgress:(float)fp8 animated:(BOOL)fp12;
- (void)setProgress:(float)fp8;
- (void)configureViews;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)fp8;

@end

