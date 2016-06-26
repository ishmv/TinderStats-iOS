/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSMutableArray, NSSet;

@interface TLViewTapTraversing : _ABCreateStringWithAddressDictionary
{
    id _finishedBlock;
    NSSet *_touches;
    NSMutableArray *_views;
}

+ (id)viewTapTraversingWithTouches:(id)fp8 returnBlock:(id)fp(null);
- (void)setViews:(id)fp8;
- (id)views;
- (void)setTouches:(id)fp8;
- (id)touches;
- (void)setFinishedBlock:(id)fp(null);
- (id)finishedBlock;
- (void).cxx_destruct;
- (void)trackView:(id)fp8 origView:(id)fp12;
- (BOOL)checkTouchesInView:(id)fp8;
- (void)checkUIView:(id)fp8;
- (id)getBarItemFromBarButton:(id)fp8;
- (id)findUITabBarSuperView:(id)fp8;
- (void)checkUIViewController:(id)fp8;
- (void)traverseViewContollersForTouches:(id)fp8;
- (id)initWithTouches:(id)fp8 returnBlock:(id)fp(null);

@end

