/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSDictionary, TNDRMatch, UIImage;

@interface TNDRMatchImage : _ABCreateStringWithAddressDictionary
{
    TNDRMatch *_match;
    UIImage *_singleMatchImage;
    NSDictionary *_matchImages;
    NSDictionary *_matchImageURLs;
}

+ (float)defaultImageSize;
- (void)setMatchImageURLs:(id)fp8;
- (id)matchImageURLs;
- (void)setMatchImages:(id)fp8;
- (id)matchImages;
- (void)setSingleMatchImage:(id)fp8;
- (id)singleMatchImage;
- (void)setMatch:(id)fp8;
- (id)match;
- (void).cxx_destruct;
- (void)prefetchImagesWithURLs:(id)fp8;
- (id)imageURLForUserId:(id)fp8;
- (void)imageURLsForUsers:(id)fp8 size:(float)fp12;
- (id)imageURLsWithDefaultSize;
- (id)imageURLForUser:(id)fp8;
- (id)initWithMatch:(id)fp8;

@end

