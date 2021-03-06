/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSString, UIColor, UILabel;

@interface TNDRInterestsCollectionViewCell : _ABCreateStringWithAddressDictionary
{
    UIColor *_commonColor;
    UIColor *_uncommonColor;
    BOOL _commonInterest;
    NSString *_interestName;
    UILabel *_interestLabel;
    UILabel *_sizingLabel;
}

+ (id)reuseIdentifier;
- (void)setSizingLabel:(id)fp8;
- (id)sizingLabel;
- (void)setInterestLabel:(id)fp8;
- (id)interestLabel;
- (BOOL)isCommonInterest;
- (id)interestName;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (float)minFontSize;
- (id)minInterestFont;
- (id)defaultInterestFont;
- (struct CGSize)contentSize;
- (float)preferredMaxWidth;
- (void)setInterestName:(id)fp8;
- (void)setCommonInterest:(BOOL)fp8;
- (void)setBackgroundView:(id)fp8;
- (id)backgroundView;
- (void)setup;
- (id)initWithFrame:(struct CGRect)fp8;

@end

