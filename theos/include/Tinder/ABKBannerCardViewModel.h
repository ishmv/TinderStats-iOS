/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "ABKCardViewModel.h"

@interface ABKBannerCardViewModel : ABKCardViewModel
{
    float _imageRatio;
}

- (void)setImageRatio:(float)fp8;
- (float)imageRatio;
- (BOOL)updateImageRatio:(float)fp8;
- (float)cardHeightWithWidth:(float)fp8;
- (void)associateWithCell:(id)fp8;
- (id)initWithCard:(id)fp8;

@end

