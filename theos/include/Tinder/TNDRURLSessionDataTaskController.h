/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSDate, NSTimer, NSURLSessionDataTask;

@interface TNDRURLSessionDataTaskController : _ABCreateStringWithAddressDictionary
{
    unsigned int _attempts;
    NSURLSessionDataTask *_dataTask;
    int _currentAttempt;
    NSTimer *_dataTaskTimer;
    NSDate *_timeoutDate;
    id _dataTaskBlock;
    id _completionBlock;
    double _timeout;
}

+ (id)dataTaskController:(id)fp(null) timeout:(void)fp8 attempts:(double)fp12 completion:(int)fp20;
+ (id)dataTaskController:(id)fp(null) completion:(void)fp8;
- (void)setCompletionBlock:(id)fp(null);
- (id)completionBlock;
- (void)setDataTaskBlock:(id)fp(null);
- (id)dataTaskBlock;
- (void)setTimeoutDate:(id)fp8;
- (id)timeoutDate;
- (void)setDataTaskTimer:(id)fp8;
- (id)dataTaskTimer;
- (void)setCurrentAttempt:(int)fp8;
- (int)currentAttempt;
- (id)dataTask;
- (double)timeout;
- (unsigned int)attempts;
- (void).cxx_destruct;
- (void)handleDataTaskTimeout:(id)fp8;
- (void)createDataTaskTimer;
- (void)newAttemptWithDataTaskIfValid;
- (id)startDataTask;
- (id)initWithDataTaskBlock:(id)fp(null) timeout:(void)fp8 attempts:(double)fp12 completion:(int)fp20;

@end

