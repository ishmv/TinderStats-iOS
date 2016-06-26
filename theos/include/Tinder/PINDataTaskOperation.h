/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "NSURLSessionDelegate-Protocol.h"

@class NSRecursiveLock, NSURLSessionDataTask;

@interface PINDataTaskOperation : _ABCreateStringWithAddressDictionary <NSURLSessionDelegate>
{
    NSRecursiveLock *_lock;
    NSURLSessionDataTask *_dataTask;
    unsigned int _state;
}

+ (id)dataTaskOperationWithSessionManager:(id)fp8 request:(id)fp12 completionHandler:(id)fp(null);
- (unsigned int)state;
- (void)setDataTask:(id)fp8;
- (id)dataTask;
- (void).cxx_destruct;
- (void)unlock;
- (void)lock;
- (void)setState:(unsigned int)fp8;
- (void)cancelTask;
- (void)finish;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (void)cancel;
- (void)start;
- (id)init;

@end
