/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@interface TNDRAsyncOperation : _ABCreateStringWithAddressDictionary
{
    unsigned int _state;
}

- (void)done;
- (void)setState:(unsigned int)fp8;
- (BOOL)isReady;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)executeAsyncTask;
- (void)start;
- (BOOL)isAsynchronous;
- (id)init;

@end
