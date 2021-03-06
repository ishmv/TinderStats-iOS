/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSMutableDictionary, NSString, NSURL;

@interface PINDiskCache : _ABCreateStringWithAddressDictionary
{
    BOOL _ttlCache;
    id _willAddObjectBlock;
    id _willRemoveObjectBlock;
    id _willRemoveAllObjectsBlock;
    id _didAddObjectBlock;
    id _didRemoveObjectBlock;
    id _didRemoveAllObjectsBlock;
    unsigned int _byteLimit;
    NSString *_name;
    NSURL *_cacheURL;
    unsigned int _byteCount;
    struct dispatch_queue_s *_asyncQueue;
    struct dispatch_semaphore_s *_lockSemaphore;
    NSMutableDictionary *_dates;
    NSMutableDictionary *_sizes;
    double _ageLimit;
}

+ (void)emptyTrash;
+ (BOOL)moveItemAtURLToTrash:(id)fp8;
+ (id)sharedTrashURL;
+ (struct dispatch_queue_s *)sharedTrashQueue;
+ (id)sharedCache;
- (void)setSizes:(id)fp8;
- (id)sizes;
- (void)setDates:(id)fp8;
- (id)dates;
- (void)setLockSemaphore:(struct dispatch_semaphore_s *)fp8;
- (struct dispatch_semaphore_s *)lockSemaphore;
- (void)setAsyncQueue:(struct dispatch_queue_s *)fp8;
- (struct dispatch_queue_s *)asyncQueue;
- (void)setByteCount:(unsigned int)fp8;
- (unsigned int)byteCount;
- (void)setCacheURL:(id)fp8;
- (id)cacheURL;
- (id)name;
- (void).cxx_destruct;
- (void)unlock;
- (void)lock;
- (void)setTtlCache:(BOOL)fp8;
- (BOOL)isTTLCache;
- (void)setAgeLimit:(double)fp8;
- (double)ageLimit;
- (void)setByteLimit:(unsigned int)fp8;
- (unsigned int)byteLimit;
- (void)setDidRemoveAllObjectsBlock:(id)fp(null);
- (id)didRemoveAllObjectsBlock;
- (void)setDidRemoveObjectBlock:(id)fp(null);
- (id)didRemoveObjectBlock;
- (void)setDidAddObjectBlock:(id)fp(null);
- (id)didAddObjectBlock;
- (void)setWillRemoveAllObjectsBlock:(id)fp(null);
- (id)willRemoveAllObjectsBlock;
- (void)setWillRemoveObjectBlock:(id)fp(null);
- (id)willRemoveObjectBlock;
- (void)setWillAddObjectBlock:(id)fp(null);
- (id)willAddObjectBlock;
- (void)enumerateObjectsWithBlock:(id)fp(null);
- (void)removeAllObjects;
- (void)trimToSizeByDate:(unsigned int)fp8;
- (void)trimToDate:(id)fp8;
- (void)trimToSize:(unsigned int)fp8;
- (void)removeObjectForKey:(id)fp8 fileURL:(id *)fp12;
- (void)removeObjectForKey:(id)fp8;
- (void)setObject:(id)fp8 forKey:(id)fp12 fileURL:(id *)fp16;
- (void)setObject:(id)fp8 forKey:(id)fp12;
- (id)fileURLForKey:(id)fp8;
- (id)objectForKey:(id)fp8 fileURL:(id *)fp12;
- (id)objectForKey:(id)fp8;
- (void)synchronouslyLockFileAccessWhileExecutingBlock:(id)fp(null);
- (void)enumerateObjectsWithBlock:(id)fp(null) completionBlock:(void)fp8;
- (void)removeAllObjects:(id)fp(null);
- (void)trimToSizeByDate:(unsigned int)fp8 block:(id)fp(null);
- (void)trimToDate:(id)fp8 block:(id)fp(null);
- (void)trimToSize:(unsigned int)fp8 block:(id)fp(null);
- (void)removeObjectForKey:(id)fp8 block:(id)fp(null);
- (void)setObject:(id)fp8 forKey:(id)fp12 block:(id)fp(null);
- (void)fileURLForKey:(id)fp8 block:(id)fp(null);
- (void)objectForKey:(id)fp8 block:(id)fp(null);
- (void)lockFileAccessWhileExecutingBlock:(id)fp(null);
- (void)trimToAgeLimitRecursively;
- (void)trimDiskToDate:(id)fp8;
- (void)trimDiskToSizeByDate:(unsigned int)fp8;
- (void)trimDiskToSize:(unsigned int)fp8;
- (BOOL)removeFileAndExecuteBlocksForKey:(id)fp8;
- (BOOL)setFileModificationDate:(id)fp8 forURL:(id)fp12;
- (void)initializeDiskProperties;
- (BOOL)createCacheDirectory;
- (id)decodedString:(id)fp8;
- (id)encodedString:(id)fp8;
- (id)keyForEncodedFileURL:(id)fp8;
- (id)encodedFileURLForKey:(id)fp8;
- (id)description;
- (id)initWithName:(id)fp8 rootPath:(id)fp12;
- (id)initWithName:(id)fp8;
- (id)init;
- (void)dealloc;

@end

