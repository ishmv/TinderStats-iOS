/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@interface FBSDKError : _ABCreateStringWithAddressDictionary
{
}

+ (id)unknownErrorWithMessage:(id)fp8;
+ (id)requiredArgumentErrorWithName:(id)fp8 message:(id)fp12 underlyingError:(id)fp16;
+ (id)requiredArgumentErrorWithName:(id)fp8 message:(id)fp12;
+ (id)invalidCollectionErrorWithName:(id)fp8 collection:(id)fp12 item:(id)fp16 message:(id)fp20 underlyingError:(id)fp24;
+ (id)invalidCollectionErrorWithName:(id)fp8 collection:(id)fp12 item:(id)fp16 message:(id)fp20;
+ (id)invalidArgumentErrorWithName:(id)fp8 value:(id)fp12 message:(id)fp16 underlyingError:(id)fp20;
+ (id)invalidArgumentErrorWithName:(id)fp8 value:(id)fp12 message:(id)fp16;
+ (id)errorWithCode:(int)fp8 userInfo:(id)fp12 message:(id)fp16 underlyingError:(id)fp20;
+ (id)errorWithCode:(int)fp8 message:(id)fp12 underlyingError:(id)fp16;
+ (id)errorWithCode:(int)fp8 message:(id)fp12;
+ (BOOL)errorIsNetworkError:(id)fp8;
+ (id)errorDomain;
- (id)init;

@end

