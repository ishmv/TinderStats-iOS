/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class ABKResponseExtras, ABKResponseResult;

@interface ABKApiResponse : _ABCreateStringWithAddressDictionary
{
    ABKResponseExtras *_extras;
    ABKResponseResult *_result;
}

- (void)setResult:(id)fp8;
- (id)result;
- (void)setExtras:(id)fp8;
- (id)extras;
- (void).cxx_destruct;
- (void)postNotificationFromResponse;
- (void)setValue:(id)fp8 forUndefinedKey:(id)fp12;
- (void)setValue:(id)fp8 forKey:(id)fp12;

@end
