/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class TNDRPassportPaywallViewModel;

@interface TNDRSubscriptionOptionsCollectionView : _ABCreateStringWithAddressDictionary <UICollectionViewDelegate, UICollectionViewDataSource>
{
    BOOL _useNewStyle;
    TNDRPassportPaywallViewModel *_paywallViewModel;
    unsigned int _numberOfItems;
}

+ (id)attributedStringForMonthCount:(unsigned int)fp8;
- (unsigned int)numberOfItems;
- (void)setUseNewStyle:(BOOL)fp8;
- (BOOL)useNewStyle;
- (id)paywallViewModel;
- (void).cxx_destruct;
- (id)collectionView:(id)fp8 cellForItemAtIndexPath:(id)fp12;
- (int)collectionView:(id)fp8 numberOfItemsInSection:(int)fp12;
- (void)setNumberOfItems:(unsigned int)fp8;
- (void)setPaywallViewModel:(id)fp8;
- (id)initWithFrame:(struct CGRect)fp8 flowLayout:(id)fp24 paywallViewModel:(id)fp28 newStyle:(BOOL)fp32;

@end

