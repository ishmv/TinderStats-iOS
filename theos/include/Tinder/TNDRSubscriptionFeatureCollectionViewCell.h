/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class UIImage, UIImageView, UILabel;

@interface TNDRSubscriptionFeatureCollectionViewCell : _ABCreateStringWithAddressDictionary
{
    UIImage *_titleImage;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIImageView *_imageView;
    float _adjustedCellHeight;
}

- (void)setAdjustedCellHeight:(float)fp8;
- (float)adjustedCellHeight;
- (void)setImageView:(id)fp8;
- (id)imageView;
- (void)setDescriptionLabel:(id)fp8;
- (id)descriptionLabel;
- (void)setTitleLabel:(id)fp8;
- (id)titleLabel;
- (id)titleImage;
- (void).cxx_destruct;
- (void)setTitleImage:(id)fp8;
- (float)adjustedImageHeight;
- (void)setup;
- (id)initWithFrame:(struct CGRect)fp8;

@end

