/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "NSURLSessionDelegate-Protocol.h"

@class NSMutableDictionary, NSURLSession;

@interface TNDRAdContentLoader : _ABCreateStringWithAddressDictionary <NSURLSessionDelegate>
{
    BOOL _loadingAdContent;
    NSURLSession *_URLSession;
    NSMutableDictionary *_creativeIDsKeyedByTaskIdentifiers;
}

- (void)setCreativeIDsKeyedByTaskIdentifiers:(id)fp8;
- (id)creativeIDsKeyedByTaskIdentifiers;
- (void)setURLSession:(id)fp8;
- (id)URLSession;
- (void)setLoadingAdContent:(BOOL)fp8;
- (BOOL)isLoadingAdContent;
- (void).cxx_destruct;
- (id)storageDirectory;
- (id)contentDirectory;
- (void)invokeBackgroundSessionCompletionHandler;
- (BOOL)addSkipBackupAttributeToItemAtURL:(id)fp8;
- (id)moveFileWithURL:(id)fp8 fromDownloadTask:(id)fp12;
- (id)localFileURLForCreativeID:(id)fp8;
- (void)postContentDidFinishLoadingNotificationForURL:(id)fp8;
- (void)setupURLSession;
- (void)URLSession:(id)fp8 task:(id)fp12 didCompleteWithError:(id)fp16;
- (void)URLSession:(id)fp8 downloadTask:(id)fp12 didFinishDownloadingToURL:(id)fp16;
- (void)URLSession:(id)fp8 downloadTask:(id)fp12 didWriteData:(long long)fp16 totalBytesWritten:(long long)fp24 totalBytesExpectedToWrite:(long long)fp32;
- (void)URLSession:(id)fp8 downloadTask:(id)fp12 didResumeAtOffset:(long long)fp16 expectedTotalBytes:(long long)fp24;
- (void)deleteAllContent;
- (void)cancelAllContentLoading;
- (void)loadContentAtRemoteURL:(id)fp8 withCreativeID:(id)fp12;
- (id)init;

@end

