/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class CALayer, UIColor, UILabel, UIView;

@interface TNDRSubscriptionCostTableViewButtonCell : _ABCreateStringWithAddressDictionary
{
    CALayer *_bottomSeparator;
    UIColor *_primaryColor;
    UIColor *_primaryHighlightedColor;
    UIColor *_normalColor;
    UIColor *_normalHighlightedColor;
    UIColor *_cancelColor;
    UIColor *_cancelHighlightedColor;
    UIView *_backgroundColorView;
    int _buttonType;
    UILabel *_textLabel;
}

- (id)textLabel;
- (int)buttonType;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)backgroundColorForButtonType:(int)fp8 isHighlighted:(BOOL)fp12;
- (id)textColorForButtonType:(int)fp8;
- (void)setButtonType:(int)fp8;
- (void)setupColors;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)fp8;

@end

