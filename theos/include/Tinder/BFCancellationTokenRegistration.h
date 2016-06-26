/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class BFCancellationToken, NSObject;

@interface BFCancellationTokenRegistration : _ABCreateStringWithAddressDictionary
{
    BOOL _disposed;
    BFCancellationToken *_token;
    id _cancellationObserverBlock;
    NSObject *_lock;
}

+ (id)registrationWithToken:(id)fp8 delegate:(id)fp(null);
- (void)setDisposed:(BOOL)fp8;
- (BOOL)disposed;
- (void)setLock:(id)fp8;
- (id)lock;
- (void)setCancellationObserverBlock:(id)fp(null);
- (id)cancellationObserverBlock;
- (void)setToken:(id)fp8;
- (id)token;
- (void).cxx_destruct;
- (void)throwIfDisposed;
- (void)notifyDelegate;
- (void)dispose;
- (id)init;

@end
