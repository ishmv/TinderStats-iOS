/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "TLSwizzleProtocol-Protocol.h"

@interface _ABCreateStringWithAddressDictionary (TLCollectionView) <TLSwizzleProtocol>
+ (void)load;
- (void)tlsw_setDataSource:(id)fp8;
- (id)tlsw_dequeueReusableSupplementaryViewOfKind:(id)fp8 withReuseIdentifier:(id)fp12 forIndexPath:(id)fp16;
- (id)tlsw_dequeueReusableCellWithReuseIdentifier:(id)fp8 forIndexPath:(id)fp12;
- (void)tl_swizzleMethods:(id)fp8;
@end
