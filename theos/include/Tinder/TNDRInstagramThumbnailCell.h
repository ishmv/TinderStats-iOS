/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class TNDRAsyncNetworkImageNode, TNDRInstagramPhotoData, UIImageView, UILabel;

@interface TNDRInstagramThumbnailCell : _ABCreateStringWithAddressDictionary
{
    BOOL _viewOnInstagramButton;
    TNDRInstagramPhotoData *_photoData;
    TNDRAsyncNetworkImageNode *_photoView;
    UILabel *_viewMoreLabel;
    UIImageView *_viewMoreIcon;
}

+ (id)reuseIdentifier;
+ (id)placeholderImage;
- (void)setViewMoreIcon:(id)fp8;
- (id)viewMoreIcon;
- (void)setViewMoreLabel:(id)fp8;
- (id)viewMoreLabel;
- (void)setPhotoView:(id)fp8;
- (id)photoView;
- (BOOL)isInstagramButton;
- (id)photoData;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)fp8;
- (void)setPhotoData:(id)fp8;
- (void)setViewOnInstagramButton:(BOOL)fp8;
- (void)setupWithFrame:(struct CGRect)fp8;
- (id)initWithFrame:(struct CGRect)fp8;

@end
