/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSMutableArray;

@interface TNDRCardCellMediatorCounter : _ABCreateStringWithAddressDictionary
{
    NSMutableArray *_keys;
}

- (void)setKeys:(id)fp8;
- (id)keys;
- (void).cxx_destruct;
- (id)synchronizedKeysCopy;
- (void)handleWillResetCurrentUser:(id)fp8;
- (void)setupNotifications;
- (int)prioritySprinkleIndexForKey:(id)fp8;
- (int)sprinkleIndexForKey:(id)fp8;
- (int)count;
- (int)countForKey:(id)fp8;
- (int)globalIndexForKey:(id)fp8 atLocalizedIndex:(int)fp12;
- (int)localizedIndexOfKeyAtGlobalIndex:(int)fp8;
- (id)keyAtGlobalIndex:(int)fp8;
- (void)removeKeyAtGlobalIndex:(int)fp8;
- (void)insertKey:(id)fp8 atGlobalIndex:(int)fp12;
- (void)addKey:(id)fp8;
- (id)init;

@end
