/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class ABKResponseError, ABKUser;

@interface ABKResponseResult : _ABCreateStringWithAddressDictionary
{
    ABKResponseError *_error;
    ABKUser *_user;
}

- (void)setUser:(id)fp8;
- (id)user;
- (void)setError:(id)fp8;
- (id)error;
- (void).cxx_destruct;
- (void)setValue:(id)fp8 forKey:(id)fp12;
- (void)setValue:(id)fp8 forUndefinedKey:(id)fp12;

@end

