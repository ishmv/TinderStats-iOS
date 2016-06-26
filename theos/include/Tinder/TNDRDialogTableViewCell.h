/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class UIColor, UIImageView, UILabel, UIView;

@interface TNDRDialogTableViewCell : _ABCreateStringWithAddressDictionary
{
    BOOL _applySelectStateColors;
    UIImageView *_iconImageView;
    UILabel *_titleTextLabel;
    UIColor *_cellSelectedStateColor;
    UIColor *_cellUnselectedStateColor;
    float _maxWidth;
    UIView *_separatorLine;
    float _accessoryWidth;
}

- (void)setAccessoryWidth:(float)fp8;
- (float)accessoryWidth;
- (void)setSeparatorLine:(id)fp8;
- (id)separatorLine;
- (float)maxWidth;
- (void)setCellUnselectedStateColor:(id)fp8;
- (id)cellUnselectedStateColor;
- (void)setCellSelectedStateColor:(id)fp8;
- (id)cellSelectedStateColor;
- (void)setApplySelectStateColors:(BOOL)fp8;
- (BOOL)applySelectStateColors;
- (void)setTitleTextLabel:(id)fp8;
- (id)titleTextLabel;
- (void)setIconImageView:(id)fp8;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)selectedIcon;
- (void)setSelected:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setHighlighted:(BOOL)fp8 animated:(BOOL)fp12;
- (void)awakeFromNib;
- (void)autolayoutSubviews;
- (void)setup;
- (id)separatorColor;
- (void)setSeparatorColor:(id)fp8;
- (void)setHideSeparator:(BOOL)fp8;
- (BOOL)hideSeparator;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12 maxWidth:(float)fp16 accessoryWidth:(float)fp20;

@end

