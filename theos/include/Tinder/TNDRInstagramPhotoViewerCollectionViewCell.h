/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSDate, TNDRAsyncNetworkImageNode, TNDRInstagramPhotoData, UIActivityIndicatorView, UILabel, UIView;

@interface TNDRInstagramPhotoViewerCollectionViewCell : _ABCreateStringWithAddressDictionary
{
    NSDate *_date;
    TNDRInstagramPhotoData *_photoData;
    TNDRAsyncNetworkImageNode *_photoView;
    UIView *_relativeDateView;
    UILabel *_relativeDateLabel;
    UIActivityIndicatorView *_loadingIndicator;
    struct CGPoint _imageViewCenter;
}

+ (id)reuseIdentifier;
- (void)setLoadingIndicator:(id)fp8;
- (id)loadingIndicator;
- (void)setRelativeDateLabel:(id)fp8;
- (id)relativeDateLabel;
- (void)setRelativeDateView:(id)fp8;
- (id)relativeDateView;
- (void)setPhotoView:(id)fp8;
- (id)photoView;
- (struct CGPoint)imageViewCenter;
- (id)photoData;
- (void)setDate:(id)fp8;
- (id)date;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setPhotoData:(id)fp8;
- (void)setupImageView;
- (id)initWithFrame:(struct CGRect)fp8;

@end
