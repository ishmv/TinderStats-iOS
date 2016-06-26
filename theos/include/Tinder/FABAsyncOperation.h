/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSRecursiveLock;

@interface FABAsyncOperation : _ABCreateStringWithAddressDictionary
{
    BOOL _internalExecuting;
    BOOL _internalFinished;
    id _asyncCompletion;
    NSRecursiveLock *_lock;
}

- (void)setLock:(id)fp8;
- (id)lock;
- (void)setAsyncCompletion:(id)fp(null);
- (id)asyncCompletion;
- (void).cxx_destruct;
- (void)markDone;
- (void)markStarted;
- (void)unlockedMarkComplete;
- (void)unlockedMarkStarted;
- (void)unlockedMarkFinished;
- (BOOL)checkForCancellation;
- (void)lock:(id)fp(null);
- (void)changeValueForKey:(id)fp8 inBlock:(id)fp(null);
- (void)start;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isAsynchronous;
- (BOOL)isConcurrent;
- (id)init;

@end

