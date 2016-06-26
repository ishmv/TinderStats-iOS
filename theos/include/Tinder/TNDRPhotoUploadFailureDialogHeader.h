/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "TNDRDialogHeader-Protocol.h"

@class NSArray, NSAttributedString, UIImage, UIImageView, UILabel, UIView;

@interface TNDRPhotoUploadFailureDialogHeader : _ABCreateStringWithAddressDictionary <TNDRDialogHeader>
{
    BOOL _calculateContentSize;
    NSAttributedString *_titleText;
    NSAttributedString *_detailText;
    UILabel *_titleTextLabel;
    UILabel *_detailTextLabel;
    float _textContainerHorizontalPadding;
    UIView *_contentView;
    UIView *_textBackgroundView;
    UIImage *_image;
    UIImageView *_imageView;
    UIView *_separatorLine;
    NSArray *_contentConstraints;
    float _preferredContentWidth;
    struct UIEdgeInsets _contentViewInsets;
    struct UIEdgeInsets _imageViewInsets;
}

+ (BOOL)requiresConstraintBasedLayout;
- (void)setCalculateContentSize:(BOOL)fp8;
- (BOOL)calculateContentSize;
- (float)preferredContentWidth;
- (void)setContentConstraints:(id)fp8;
- (id)contentConstraints;
- (void)setSeparatorLine:(id)fp8;
- (id)separatorLine;
- (void)setImageViewInsets:(struct UIEdgeInsets)fp8;
- (struct UIEdgeInsets)imageViewInsets;
- (void)setImageView:(id)fp8;
- (id)imageView;
- (void)setImage:(id)fp8;
- (id)image;
- (void)setTextBackgroundView:(id)fp8;
- (id)textBackgroundView;
- (void)setContentView:(id)fp8;
- (id)contentView;
- (void)setContentViewInsets:(struct UIEdgeInsets)fp8;
- (struct UIEdgeInsets)contentViewInsets;
- (void)setTextContainerHorizontalPadding:(float)fp8;
- (float)textContainerHorizontalPadding;
- (void)setDetailTextLabel:(id)fp8;
- (id)detailTextLabel;
- (void)setTitleTextLabel:(id)fp8;
- (id)titleTextLabel;
- (id)detailText;
- (id)titleText;
- (void).cxx_destruct;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize)intrinsicContentSize;
- (void)updateSubviewConstraints;
- (void)updateConstraints;
- (void)layoutSubviews;
- (void)setPreferredContentWidth:(float)fp8;
- (void)setupSeparatorLine;
- (void)setupDetailTextLabel;
- (void)setupImageView;
- (void)setupTitleTextLabel;
- (void)setupSubviews;
- (BOOL)hideSeparatorLine;
- (void)setHideSeparatorLine:(BOOL)fp8;
- (float)preferredTextLabelWidth;
- (void)setDetailText:(id)fp8;
- (void)setTitleText:(id)fp8;
- (id)photoUploadFailureIcon;
- (id)initWithTitleText:(id)fp8 detailText:(id)fp12;

@end

