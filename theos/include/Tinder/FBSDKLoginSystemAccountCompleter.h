/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "FBSDKLoginCompleting-Protocol.h"

@class FBSDKLoginCompletionParameters;

@interface FBSDKLoginSystemAccountCompleter : _ABCreateStringWithAddressDictionary <FBSDKLoginCompleting>
{
    FBSDKLoginCompletionParameters *_parameters;
}

- (void).cxx_destruct;
- (void)completeLogIn:(id)fp8 withHandler:(id)fp(null);
- (id)initWithTokenString:(id)fp8 appID:(id)fp12;
- (id)init;

@end

