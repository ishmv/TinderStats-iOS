/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "TL_AGWindowView.h"

@class NSMutableArray, UIProgressView, UIView;

@interface TLTapView : TL_AGWindowView
{
    id <TLTapViewDelegate> _delegate;
    int _highlightType;
    UIProgressView *_progressTapView;
    NSMutableArray *_tapHighlightViews;
    UIView *_statusView;
}

- (void)setStatusView:(id)fp8;
- (id)statusView;
- (void)setTapHighlightViews:(id)fp8;
- (id)tapHighlightViews;
- (void)setProgressTapView:(id)fp8;
- (id)progressTapView;
- (void)setHighlightType:(int)fp8;
- (int)highlightType;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (void)removeTouchHighlightViews;
- (void)addTouchHighlightForTouches:(id)fp8;
- (void)setupViewForTitle:(id)fp8 type:(int)fp12 animate:(BOOL)fp16;
- (void)didRotateAngle:(float)fp8;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (id)initWithBounds:(struct CGRect)fp8;

@end

