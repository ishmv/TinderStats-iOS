/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "ABKCardCell.h"

@class ABKAppPurchaseButton, ABKLabel, ABKThemableCardSubtitleLabel, ABKThemableCardTabView, ABKThemableCardTitleLabel, ABKView, UIImageView, UILabel;

@interface ABKCrossPromotionCardCell : ABKCardCell
{
    ABKThemableCardTabView *_captionTab;
    UILabel *_caption;
    UIImageView *_tabImage;
    UIImageView *_cardImage;
    ABKThemableCardTitleLabel *_title;
    ABKThemableCardSubtitleLabel *_subtitle;
    ABKLabel *_reviews;
    ABKAppPurchaseButton *_button;
    ABKView *_starsAndSubtitleView;
}

- (void)setStarsAndSubtitleView:(id)fp8;
- (id)starsAndSubtitleView;
- (void)setButton:(id)fp8;
- (id)button;
- (void)setReviews:(id)fp8;
- (id)reviews;
- (void)setSubtitle:(id)fp8;
- (id)subtitle;
- (void)setTitle:(id)fp8;
- (id)title;
- (void)setCardImage:(id)fp8;
- (id)cardImage;
- (void)setTabImage:(id)fp8;
- (id)tabImage;
- (void)setCaption:(id)fp8;
- (id)caption;
- (void)setCaptionTab:(id)fp8;
- (id)captionTab;
- (void).cxx_destruct;
- (void)updateStarImages:(float)fp8;
- (void)layoutStarAndSubtitle;
- (void)layoutSubviews;
- (void)buttonPressed:(id)fp8;
- (void)layoutMajorSubviews;
- (void)awakeFromNib;

@end
