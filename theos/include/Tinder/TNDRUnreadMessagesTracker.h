/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"

@class NSFetchedResultsController;

@interface TNDRUnreadMessagesTracker : _ABCreateStringWithAddressDictionary <NSFetchedResultsControllerDelegate>
{
    NSFetchedResultsController *_fetchedResultsController;
}

- (void)setFetchedResultsController:(id)fp8;
- (id)fetchedResultsController;
- (void).cxx_destruct;
- (void)handleAppBoyTrackerChangeUser:(id)fp8;
- (void)controllerDidChangeContent:(id)fp8;
- (void)setupFetchedResultsController;
- (void)dealloc;
- (id)init;

@end

