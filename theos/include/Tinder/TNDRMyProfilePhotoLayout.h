/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSDictionary, NSIndexPath;

@interface TNDRMyProfilePhotoLayout : _ABCreateStringWithAddressDictionary
{
    struct CGPoint _startingOffset;
    BOOL _isDragging;
    NSIndexPath *_draggingCell;
    NSDictionary *_layoutInfo;
    struct CGRect _thumbFrame;
    struct CGRect _profileFrame;
}

- (void)setLayoutInfo:(id)fp8;
- (id)layoutInfo;
- (struct CGRect)profileFrame;
- (struct CGRect)thumbFrame;
- (void)setIsDragging:(BOOL)fp8;
- (BOOL)isDragging;
- (void)setDraggingCell:(id)fp8;
- (id)draggingCell;
- (void).cxx_destruct;
- (void)finishDraggingCell;
- (void)keepDraggingCellWithLocation:(struct CGPoint)fp8;
- (void)startDraggingCellAtIndexPath:(id)fp8 fromLocation:(struct CGPoint)fp12;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)fp8;
- (struct CGRect)frameForPhotoAtIndexPath:(id)fp8;
- (id)layoutAttributesForItemAtIndexPath:(id)fp8;
- (id)layoutAttributesForElementsInRect:(struct CGRect)fp8;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;

@end
