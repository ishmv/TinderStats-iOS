/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@interface BFExecutor : _ABCreateStringWithAddressDictionary
{
    id _block;
}

+ (id)executorWithOperationQueue:(id)fp8;
+ (id)executorWithDispatchQueue:(id)fp8;
+ (id)executorWithBlock:(id)fp(null);
+ (id)mainThreadExecutor;
+ (id)immediateExecutor;
+ (id)defaultExecutor;
- (void)setBlock:(id)fp(null);
- (id)block;
- (void).cxx_destruct;
- (void)execute:(id)fp(null);
- (id)initWithBlock:(id)fp(null);

@end

