/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "TNDRCardCellManager.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "TNDR2ProfilePreviewDelegate-Protocol.h"
#import "TNDRUserCardCellDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSDate, NSFetchedResultsController, NSMutableArray, NSString, TNDRGameToNewMatchAnimationController, TNDRRecommendationToProfileAnimationController, TNDRUser, TNDRUserCardCell;

@interface TNDRUserCardCellManager : TNDRCardCellManager <TNDR2ProfilePreviewDelegate, UIViewControllerTransitioningDelegate, NSFetchedResultsControllerDelegate, TNDRUserCardCellDelegate>
{
    BOOL _rewinding;
    BOOL _rewindLiked;
    BOOL _rewindSuperLiked;
    NSFetchedResultsController *_fetchedResultsController;
    NSMutableArray *_fetchedObjectChanges;
    TNDRUser *_currentUser;
    TNDRUserCardCell *_currentCell;
    TNDRRecommendationToProfileAnimationController *_gameToProfileTransitioning;
    TNDRGameToNewMatchAnimationController *_gameToNewMatchTransitioning;
    NSDate *_timestampSuperLike;
    NSString *_superLikeRateMethod;
}

- (void)setSuperLikeRateMethod:(id)fp8;
- (id)superLikeRateMethod;
- (void)setTimestampSuperLike:(id)fp8;
- (id)timestampSuperLike;
- (void)setGameToNewMatchTransitioning:(id)fp8;
- (id)gameToNewMatchTransitioning;
- (void)setGameToProfileTransitioning:(id)fp8;
- (id)gameToProfileTransitioning;
- (void)setRewindSuperLiked:(BOOL)fp8;
- (BOOL)rewindSuperLiked;
- (void)setRewindLiked:(BOOL)fp8;
- (BOOL)rewindLiked;
- (void)setCurrentCell:(id)fp8;
- (id)currentCell;
- (void)setCurrentUser:(id)fp8;
- (id)currentUser;
- (void)setFetchedObjectChanges:(id)fp8;
- (id)fetchedObjectChanges;
- (void)setFetchedResultsController:(id)fp8;
- (id)fetchedResultsController;
- (void)setRewinding:(BOOL)fp8;
- (BOOL)isRewinding;
- (void).cxx_destruct;
- (void)showAlertForFirstSwipeForUser:(id)fp8 direction:(int)fp12 completion:(id)fp(null);
- (void)requestRecommendationsIfNecessary;
- (void)updateRecommendationToLikeWithSuperLike:(BOOL)fp8;
- (void)updateRecommendationToLike;
- (void)updateRecommendationToSuperLike:(id)fp8;
- (void)updateRecommendationToPass;
- (void)trackSuperLikeRating:(BOOL)fp8 recSuperLikedCurrentUser:(BOOL)fp12 firstDegrees:(int)fp16 secondDegrees:(int)fp20;
- (void)trackRatingOfLiked:(BOOL)fp8 recSuperLikedCurrentUser:(BOOL)fp12 superLiked:(BOOL)fp16 method:(id)fp20 fromMore:(BOOL)fp24 teaserType:(id)fp28 teaserValue:(id)fp32 firstDegrees:(int)fp36 secondDegrees:(int)fp40;
- (void)presentNewMatch:(id)fp8 onViewController:(id)fp12;
- (void)presentProfile;
- (void)tossCell:(id)fp8 inDirection:(int)fp12 withMethod:(id)fp16 dismissCard:(BOOL)fp20;
- (void)handleSwipeRightForForCardCell:(id)fp8 dismissCard:(BOOL)fp12;
- (void)handleSwipeLeftForForCardCell:(id)fp8 dismissCard:(BOOL)fp12;
- (void)handleSwipeUpForCardCell:(id)fp8 dismissCard:(BOOL)fp12;
- (unsigned int)loadLocalRecommendations;
- (void)setupDataSource;
- (void)userCardCell:(id)fp8 didRequestShareLinkForUser:(id)fp12;
- (void)handleSuperLikeAvailabilityForCell:(id)fp8;
- (void)collectionView:(id)fp8 loadedVisibleCellsHandleFirstVisibleCell:(id)fp12;
- (void)collectionView:(id)fp8 willDisplayCardCell:(id)fp12 forItemAtIndexPath:(id)fp16;
- (id)collectionView:(id)fp8 cellForItemAtIndexPath:(id)fp12;
- (int)collectionView:(id)fp8 numberOfItemsInSection:(int)fp12;
- (void)controllerDidChangeContent:(id)fp8;
- (void)controller:(id)fp8 didChangeObject:(id)fp12 atIndexPath:(id)fp16 forChangeType:(unsigned int)fp20 newIndexPath:(id)fp24;
- (id)animationControllerForDismissedController:(id)fp8;
- (id)animationControllerForPresentedController:(id)fp8 presentingController:(id)fp12 sourceController:(id)fp16;
- (void)showAlertForFirstStandardSwipeCell:(id)fp8 direction:(int)fp12;
- (BOOL)shouldAllowSwipeDismissalForCell:(id)fp8 direction:(int)fp12;
- (void)didTapProfileSuperLikeButton;
- (void)didTapProfileLikeButton;
- (void)didTapProfilePassButton;
- (void)didTapProfileDoneButton;
- (BOOL)shouldAllowUndoButtonForPlusUsers;
- (id)topRecFromDataStore;
- (void)userTappedLeftAccessoryForCardCell:(id)fp8;
- (void)userTappedSuperLikeButtonCardCell:(id)fp8;
- (void)userTappedRightForCardCell:(id)fp8;
- (void)userTappedLeftForCardCell:(id)fp8;
- (void)userTappedInfoButtonForCardCell:(id)fp8;
- (void)userSwipedUpForCardCell:(id)fp8;
- (void)userSwipedRightForCardCell:(id)fp8;
- (void)userSwipedLeftForCardCell:(id)fp8;
- (void)userTappedCardCell:(id)fp8;
- (void)handleNewMatchesViewRequest:(id)fp8;
- (void)handleDidResetCurrentUser:(id)fp8;
- (void)handleWillResetCurrentUser:(id)fp8;
- (void)setupNotifications;
- (void)dealloc;
- (id)initWithDelegate:(id)fp8;

@end

