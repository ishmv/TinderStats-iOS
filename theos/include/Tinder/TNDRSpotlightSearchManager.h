/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"

@class NSFetchedResultsController, NSManagedObjectContext, NSMutableArray, NSOperationQueue;

@interface TNDRSpotlightSearchManager : _ABCreateStringWithAddressDictionary <NSFetchedResultsControllerDelegate>
{
    NSFetchedResultsController *_fetchedResultsController;
    NSManagedObjectContext *_context;
    NSMutableArray *_existingMatches;
    NSMutableArray *_deletedMatches;
    NSOperationQueue *_matchIndexingQueue;
    NSOperationQueue *_thumbnailIndexingQueue;
}

+ (id)sharedInstance;
- (void)setThumbnailIndexingQueue:(id)fp8;
- (void)setMatchIndexingQueue:(id)fp8;
- (void)setDeletedMatches:(id)fp8;
- (void)setExistingMatches:(id)fp8;
- (void)setContext:(id)fp8;
- (void)setFetchedResultsController:(id)fp8;
- (void).cxx_destruct;
- (void)controllerDidChangeContent:(id)fp8;
- (void)controller:(id)fp8 didChangeObject:(id)fp12 atIndexPath:(id)fp16 forChangeType:(unsigned int)fp20 newIndexPath:(id)fp24;
- (void)batchProcessUpdates;
- (void)clearAllSpotlightSearchItemsCompletion:(id)fp(null);
- (void)deleteSpotlightSearchIndexForMatches:(id)fp8;
- (void)createOrUpdateSpotlightSearchIndexForMatches:(id)fp8;
- (void)handleCurrentUserWillClearInformation:(id)fp8;
- (void)handleCurrentUserDidAuthenticate:(id)fp8;
- (void)dealloc;
- (id)init;
- (id)thumbnailIndexingQueue;
- (id)matchIndexingQueue;
- (id)deletedMatches;
- (id)existingMatches;
- (id)context;
- (id)fetchedResultsController;
- (id)predicate;
- (id)dataManager;

@end

