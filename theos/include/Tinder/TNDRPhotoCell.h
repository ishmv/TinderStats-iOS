/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class UIActivityIndicatorView, UIImageView;

@interface TNDRPhotoCell : _ABCreateStringWithAddressDictionary
{
    UIImageView *_photo;
    UIActivityIndicatorView *_activityIndicator;
    UIImageView *_overlayImageView;
}

- (void)setOverlayImageView:(id)fp8;
- (id)overlayImageView;
- (void)setActivityIndicator:(id)fp8;
- (id)activityIndicator;
- (void)setPhoto:(id)fp8;
- (id)photo;
- (void).cxx_destruct;
- (void)makeFrameAndShadow;
- (void)makeActivityView;
- (void)makePhotoView;
- (id)initWithFrame:(struct CGRect)fp8;

@end
