/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@interface TL_RSSwizzleInfo : _ABCreateStringWithAddressDictionary
{
    SEL _selector;
    id _impProviderBlock;
}

- (void)setImpProviderBlock:(id)fp(null);
- (id)impProviderBlock;
- (void)setSelector:(SEL)fp8;
- (SEL)selector;
- (void).cxx_destruct;
- (void *)getOriginalImplementation;

@end

