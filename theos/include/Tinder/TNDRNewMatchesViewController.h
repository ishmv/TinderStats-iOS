/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSMutableArray, TNDRMatchesHeaderView, TNDRNewMatchesViewModel, UICollectionView, UICollectionViewFlowLayout, UIView;

@interface TNDRNewMatchesViewController : _ABCreateStringWithAddressDictionary <NSFetchedResultsControllerDelegate, UICollectionViewDelegate>
{
    NSMutableArray *_fetchedObjectChanges;
    id <TNDRNewMatchesViewControllerDelegate> _delegate;
    TNDRNewMatchesViewModel *_matchesNewViewModel;
    UICollectionViewFlowLayout *_flowLayout;
    UICollectionView *_collectionView;
    TNDRMatchesHeaderView *_matchesHeaderView;
    UIView *_separator;
}

- (void)setSeparator:(id)fp8;
- (id)separator;
- (void)setMatchesHeaderView:(id)fp8;
- (id)matchesHeaderView;
- (void)setCollectionView:(id)fp8;
- (id)collectionView;
- (void)setFlowLayout:(id)fp8;
- (id)flowLayout;
- (void)setMatchesNewViewModel:(id)fp8;
- (id)matchesNewViewModel;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (void)scrollBackToBeginningOfNewMatches;
- (void)performSearchOnMatchesWithText:(id)fp8;
- (void)notifyDelegateOfContentUpdate;
- (void)controllerDidChangeContent:(id)fp8;
- (void)controller:(id)fp8 didChangeObject:(id)fp12 atIndexPath:(id)fp16 forChangeType:(unsigned int)fp20 newIndexPath:(id)fp24;
- (void)controller:(id)fp8 didChangeSection:(id)fp12 atIndex:(unsigned int)fp16 forChangeType:(unsigned int)fp20;
- (void)collectionView:(id)fp8 didSelectItemAtIndexPath:(id)fp12;
- (void)setupNewMatchesData;
- (unsigned int)unviewedMatchCount;
- (unsigned int)matchCount;
- (BOOL)hasContent;
- (float)calculatedHeight;
- (void)viewDidLoad;
- (void)adjustSubviewFrames;
- (void)setup;
- (void)setupFlowLayout;
- (id)initWithDelegate:(id)fp8;

@end

