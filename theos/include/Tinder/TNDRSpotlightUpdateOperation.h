/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "TNDRAsyncOperation.h"

@class NSDictionary;

@interface TNDRSpotlightUpdateOperation : TNDRAsyncOperation
{
    NSDictionary *_spotlightItems;
}

- (void)setSpotlightItems:(id)fp8;
- (id)spotlightItems;
- (void).cxx_destruct;
- (void)executeAsyncTask;
- (id)initWithMatches:(id)fp8 thumbnailQueue:(id)fp12;

@end

