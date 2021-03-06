/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSMutableArray, NSMutableSet, SDImageCache, SDWebImageDownloader;

@interface SDWebImageManager : _ABCreateStringWithAddressDictionary
{
    id <SDWebImageManagerDelegate> _delegate;
    SDImageCache *_imageCache;
    SDWebImageDownloader *_imageDownloader;
    id _cacheKeyFilter;
    NSMutableSet *_failedURLs;
    NSMutableArray *_runningOperations;
}

+ (id)sharedManager;
- (void)setRunningOperations:(id)fp8;
- (id)runningOperations;
- (void)setFailedURLs:(id)fp8;
- (id)failedURLs;
- (void)setCacheKeyFilter:(id)fp(null);
- (id)cacheKeyFilter;
- (void)setImageDownloader:(id)fp8;
- (id)imageDownloader;
- (void)setImageCache:(id)fp8;
- (id)imageCache;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)isRunning;
- (void)cancelAll;
- (void)saveImageToCache:(id)fp8 forURL:(id)fp12;
- (id)downloadImageWithURL:(id)fp8 options:(unsigned int)fp12 progress:(id)fp(null) completed:(void)fp16;
- (void)diskImageExistsForURL:(id)fp8 completion:(id)fp(null);
- (void)cachedImageExistsForURL:(id)fp8 completion:(id)fp(null);
- (BOOL)diskImageExistsForURL:(id)fp8;
- (BOOL)cachedImageExistsForURL:(id)fp8;
- (id)cacheKeyForURL:(id)fp8;
- (id)createCache;
- (id)init;
- (id)downloadWithURL:(id)fp8 options:(unsigned int)fp12 progress:(id)fp(null) completed:(void)fp16;

@end

