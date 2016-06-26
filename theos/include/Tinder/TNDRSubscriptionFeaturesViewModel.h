/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "UICollectionViewDataSource-Protocol.h"

@class NSArray, NSDictionary;

@interface TNDRSubscriptionFeaturesViewModel : _ABCreateStringWithAddressDictionary <UICollectionViewDataSource>
{
    NSArray *_featureKeys;
    NSDictionary *_features;
}

+ (id)tinderPlusAvailableFeatureKeys;
- (void)setFeatures:(id)fp8;
- (id)features;
- (void)setFeatureKeys:(id)fp8;
- (id)featureKeys;
- (void).cxx_destruct;
- (id)collectionView:(id)fp8 cellForItemAtIndexPath:(id)fp12;
- (int)collectionView:(id)fp8 numberOfItemsInSection:(int)fp12;
- (int)numberOfSectionsInCollectionView:(id)fp8;
- (id)featureForIndexPath:(id)fp8;
- (int)numberOfPages;
- (id)featureKeyAtIndex:(int)fp8;
- (id)featuresArrayForAnalytics;
- (void)setPaywallEncounteredFrom:(unsigned int)fp8 withFeatureAdvertised:(int)fp12;
- (id)superLikeFeatureDict;
- (id)hideAdsFeatureDict;
- (id)likesFeatureDict;
- (id)passportFeatureDict;
- (id)undoFeatureDict;
- (void)setup;
- (id)init;

@end

