/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSMutableArray;

@interface TNDRCardCellGroupPhotoView : _ABCreateStringWithAddressDictionary
{
    int _photoCount;
    NSMutableArray *_imageURLs;
    NSMutableArray *_imageViews;
    NSMutableArray *_spinners;
    NSMutableArray *_allConstraints;
}

- (void)setAllConstraints:(id)fp8;
- (id)allConstraints;
- (void)setSpinners:(id)fp8;
- (id)spinners;
- (void)setImageViews:(id)fp8;
- (id)imageViews;
- (void)setImageURLs:(id)fp8;
- (id)imageURLs;
- (void)setPhotoCount:(int)fp8;
- (int)photoCount;
- (void).cxx_destruct;
- (void)setURLForPhotoAtIndex:(int)fp8;
- (void)loadImageURLsForMembers:(id)fp8;
- (float)preferredWidthForImage;
- (void)resetView;
- (void)configureWithGroup:(id)fp8;
- (id)buildSpinnerConstraints;
- (id)buildPhotoConstraints:(int)fp8;
- (id)buildConstraints:(int)fp8;
- (void)updateConstraints;
- (void)setUpSpinners;
- (void)setUpImageViews;
- (id)initWithFrame:(struct CGRect)fp8;

@end

