/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "TNDRCardCell.h"

#import "TNDRCardCellViewProvider-Protocol.h"

@class TNDRAdContentView, TNDRAdFooter;

@interface TNDRAdCardCell : TNDRCardCell <TNDRCardCellViewProvider>
{
    TNDRAdContentView *_adView;
    TNDRAdFooter *_footerView;
}

+ (float)infoViewHeight;
- (void)setFooterView:(id)fp8;
- (id)footerView;
- (void)setAdView:(id)fp8;
- (id)adView;
- (void).cxx_destruct;
- (id)secondaryView;
- (id)contentView;
- (void)prepareForCardStackAnimation:(BOOL)fp8;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)fp8;

@end

