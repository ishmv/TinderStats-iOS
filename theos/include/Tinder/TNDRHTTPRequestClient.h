/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "AFHTTPSessionManager.h"

@class NSOperation;

@interface TNDRHTTPRequestClient : AFHTTPSessionManager
{
    NSOperation *_lastMessageOperation;
}

- (void)setLastMessageOperation:(id)fp8;
- (id)lastMessageOperation;
- (void).cxx_destruct;
- (void)performRequestWithPath:(id)fp8 method:(id)fp12 parameters:(id)fp16 completion:(id)fp(null);
- (void)sendPhotoMessage:(id)fp8 toMatch:(id)fp12 withMessageID:(id)fp16 completion:(id)fp(null);
- (void)sendMessage:(id)fp8 withParams:(id)fp12 toMatchGroup:(id)fp16 completion:(id)fp(null);
- (void)sendMessage:(id)fp8 withParams:(id)fp12 toMatch:(id)fp16 completion:(id)fp(null);
- (void)sendMessage:(id)fp8 toMatch:(id)fp12 completion:(id)fp(null);
- (BOOL)hasAuthenticationToken;
- (void)clearAuthorizationHeader;
- (void)setAuthorizationHeaderWithToken:(id)fp8;
- (void)setup;
- (id)initWithBaseURL:(id)fp8;

@end

