/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSString, SMCalloutBackgroundView, UIButton, UILabel, UIView;

@interface SMCalloutView : _ABCreateStringWithAddressDictionary
{
    BOOL _popupCancelled;
    id <SMCalloutViewDelegate> _delegate;
    NSString *_title;
    NSString *_subtitle;
    UIView *_leftAccessoryView;
    UIView *_rightAccessoryView;
    unsigned int _permittedArrowDirection;
    unsigned int _currentArrowDirection;
    SMCalloutBackgroundView *_backgroundView;
    UIView *_titleView;
    UIView *_subtitleView;
    UIView *_contentView;
    int _presentAnimation;
    int _dismissAnimation;
    UIButton *_containerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    struct CGPoint _calloutOffset;
    struct UIEdgeInsets _constrainedInsets;
    struct UIEdgeInsets _contentViewInset;
}

+ (id)platformCalloutView;
- (void)setPopupCancelled:(BOOL)fp8;
- (BOOL)popupCancelled;
- (void)setSubtitleLabel:(id)fp8;
- (id)subtitleLabel;
- (void)setTitleLabel:(id)fp8;
- (id)titleLabel;
- (void)setContainerView:(id)fp8;
- (id)containerView;
- (void)setDismissAnimation:(int)fp8;
- (int)dismissAnimation;
- (void)setPresentAnimation:(int)fp8;
- (int)presentAnimation;
- (void)setCalloutOffset:(struct CGPoint)fp8;
- (struct CGPoint)calloutOffset;
- (void)setContentViewInset:(struct UIEdgeInsets)fp8;
- (struct UIEdgeInsets)contentViewInset;
- (void)setContentView:(id)fp8;
- (id)contentView;
- (void)setSubtitleView:(id)fp8;
- (id)subtitleView;
- (void)setTitleView:(id)fp8;
- (id)titleView;
- (void)setBackgroundView:(id)fp8;
- (void)setConstrainedInsets:(struct UIEdgeInsets)fp8;
- (struct UIEdgeInsets)constrainedInsets;
- (void)setCurrentArrowDirection:(unsigned int)fp8;
- (unsigned int)currentArrowDirection;
- (void)setPermittedArrowDirection:(unsigned int)fp8;
- (unsigned int)permittedArrowDirection;
- (void)setRightAccessoryView:(id)fp8;
- (id)rightAccessoryView;
- (void)setLeftAccessoryView:(id)fp8;
- (id)leftAccessoryView;
- (void)setSubtitle:(id)fp8;
- (id)subtitle;
- (void)setTitle:(id)fp8;
- (id)title;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (int)indexOfAccessibilityElement:(id)fp8;
- (id)accessibilityElementAtIndex:(int)fp8;
- (int)accessibilityElementCount;
- (void)layoutSubviews;
- (id)animationWithType:(int)fp8 presenting:(BOOL)fp12;
- (void)removeFromParent;
- (void)dismissCalloutAnimated:(BOOL)fp8;
- (void)animationDidStop:(id)fp8 finished:(BOOL)fp12;
- (void)animationDidStart:(id)fp8;
- (void)presentCalloutFromRect:(struct CGRect)fp8 inLayer:(id)fp24 ofView:(id)fp28 constrainedToLayer:(id)fp32 animated:(BOOL)fp36;
- (void)presentCalloutFromRect:(struct CGRect)fp8 inLayer:(id)fp24 constrainedToLayer:(id)fp28 animated:(BOOL)fp32;
- (void)presentCalloutFromRect:(struct CGRect)fp8 inView:(id)fp24 constrainedToView:(id)fp28 animated:(BOOL)fp32;
- (struct CGSize)offsetToContainRect:(struct CGRect)fp8 inRect:(struct CGRect)fp24;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;
- (float)calloutContainerHeight;
- (float)calloutHeight;
- (float)innerContentMarginRight;
- (float)innerContentMarginLeft;
- (float)rightAccessoryHorizontalMargin;
- (float)rightAccessoryVerticalMargin;
- (float)leftAccessoryHorizontalMargin;
- (float)leftAccessoryVerticalMargin;
- (void)rebuildSubviews;
- (id)defaultBackgroundView;
- (id)backgroundView;
- (id)subtitleViewOrDefault;
- (id)titleViewOrDefault;
- (void)calloutClicked;
- (void)unhighlightIfNecessary;
- (void)highlightIfNecessary;
- (BOOL)supportsHighlighting;
- (id)initWithFrame:(struct CGRect)fp8;

@end

