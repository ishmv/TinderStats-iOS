/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@interface PINRemoteImageCallbacks : _ABCreateStringWithAddressDictionary
{
    id _completionBlock;
    id _progressImageBlock;
    id _progressDownloadBlock;
    double _requestTime;
}

- (void)setRequestTime:(double)fp8;
- (double)requestTime;
- (void)setProgressDownloadBlock:(id)fp(null);
- (id)progressDownloadBlock;
- (void)setProgressImageBlock:(id)fp(null);
- (id)progressImageBlock;
- (id)completionBlock;
- (void).cxx_destruct;
- (void)setCompletionBlock:(id)fp(null);

@end

