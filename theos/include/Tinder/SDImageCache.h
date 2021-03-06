/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSCache, NSFileManager, NSMutableArray, NSString;

@interface SDImageCache : _ABCreateStringWithAddressDictionary
{
    NSFileManager *_fileManager;
    BOOL _shouldDecompressImages;
    BOOL _shouldDisableiCloud;
    BOOL _shouldCacheImagesInMemory;
    int _maxCacheAge;
    unsigned int _maxCacheSize;
    NSCache *_memCache;
    NSString *_diskCachePath;
    NSMutableArray *_customPaths;
    struct dispatch_queue_s *_ioQueue;
}

+ (id)sharedImageCache;
- (void)setIoQueue:(struct dispatch_queue_s *)fp8;
- (struct dispatch_queue_s *)ioQueue;
- (void)setCustomPaths:(id)fp8;
- (id)customPaths;
- (void)setDiskCachePath:(id)fp8;
- (id)diskCachePath;
- (void)setMemCache:(id)fp8;
- (id)memCache;
- (void)setMaxCacheSize:(unsigned int)fp8;
- (unsigned int)maxCacheSize;
- (void)setMaxCacheAge:(int)fp8;
- (int)maxCacheAge;
- (void)setShouldCacheImagesInMemory:(BOOL)fp8;
- (BOOL)shouldCacheImagesInMemory;
- (void)setShouldDisableiCloud:(BOOL)fp8;
- (BOOL)shouldDisableiCloud;
- (void)setShouldDecompressImages:(BOOL)fp8;
- (BOOL)shouldDecompressImages;
- (void).cxx_destruct;
- (void)calculateSizeWithCompletionBlock:(id)fp(null);
- (unsigned int)getDiskCount;
- (unsigned int)getSize;
- (void)backgroundCleanDisk;
- (void)cleanDiskWithCompletionBlock:(id)fp(null);
- (void)cleanDisk;
- (void)clearDiskOnCompletion:(id)fp(null);
- (void)clearDisk;
- (void)clearMemory;
- (void)setMaxMemoryCountLimit:(unsigned int)fp8;
- (unsigned int)maxMemoryCountLimit;
- (unsigned int)maxMemoryCost;
- (void)setMaxMemoryCost:(unsigned int)fp8;
- (void)removeImageForKey:(id)fp8 fromDisk:(BOOL)fp12 withCompletion:(id)fp(null);
- (void)removeImageForKey:(id)fp8 fromDisk:(BOOL)fp12;
- (void)removeImageForKey:(id)fp8 withCompletion:(id)fp(null);
- (void)removeImageForKey:(id)fp8;
- (id)queryDiskCacheForKey:(id)fp8 done:(id)fp(null);
- (id)scaledImageForKey:(id)fp8 image:(id)fp12;
- (id)diskImageForKey:(id)fp8;
- (id)diskImageDataBySearchingAllPathsForKey:(id)fp8;
- (id)imageFromDiskCacheForKey:(id)fp8;
- (id)imageFromMemoryCacheForKey:(id)fp8;
- (void)diskImageExistsWithKey:(id)fp8 completion:(id)fp(null);
- (BOOL)diskImageExistsWithKey:(id)fp8;
- (void)storeImage:(id)fp8 forKey:(id)fp12 toDisk:(BOOL)fp16;
- (void)storeImage:(id)fp8 forKey:(id)fp12;
- (void)storeImage:(id)fp8 recalculateFromImage:(BOOL)fp12 imageData:(id)fp16 forKey:(id)fp20 toDisk:(BOOL)fp24;
- (id)makeDiskCachePath:(id)fp8;
- (id)cachedFileNameForKey:(id)fp8;
- (id)defaultCachePathForKey:(id)fp8;
- (id)cachePathForKey:(id)fp8 inPath:(id)fp12;
- (void)addReadOnlyCachePath:(id)fp8;
- (void)dealloc;
- (id)initWithNamespace:(id)fp8 diskCacheDirectory:(id)fp12;
- (id)initWithNamespace:(id)fp8;
- (id)init;

@end

