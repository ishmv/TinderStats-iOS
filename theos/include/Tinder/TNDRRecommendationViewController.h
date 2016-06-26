/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "TNDRActionDialogViewControllerDelegate-Protocol.h"
#import "TNDRCardCellControlDependencies-Protocol.h"
#import "TNDRCardCellStackControl-Protocol.h"
#import "TNDRDiscoverOffViewDelegate-Protocol.h"
#import "TNDRPassportLocationsListViewControllerDelegate-Protocol.h"
#import "TNDRShareRecViewControllerPresenterDelegate-Protocol.h"
#import "TNDRSubscriptionPaywallViewControllerDelegate-Protocol.h"
#import "TNDRSuperLikeRoadblockDelegate-Protocol.h"
#import "TNDRSuperLikeTutorialDelegate-Protocol.h"
#import "TNDRURLNavigableProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class MBProgressHUD, NSDate, NSURLSessionDataTask, TNDRButtonViewSwappingOverlayAnimationController, TNDRCardCellMediator, TNDRDiscoverOffView, TNDREmptyStackLayout, TNDRGameToNewMatchAnimationController, TNDRGamepadBackgroundView, TNDRGamepadButton, TNDRLikeGamepadButton, TNDRNoRecommendationsView, TNDRNotInGroupDialogVC, TNDRPassportGamepadButton, TNDRPassportLocationsListViewController, TNDRPassportMapStackContainerViewController, TNDRRateLimitRoadblockDialogViewController, TNDRRewindGamepadButton, TNDRShareRecViewControllerPresenter, TNDRStackLayout, TNDRSubscriptionPaywallViewController, TNDRSuperLikeFirstTimeConfirmationDialogViewController, TNDRSuperLikeGamepadButton, TNDRSuperLikePackagesPaywallAC, TNDRSuperLikePackagesPaywallVC, TNDRSuperLikeRoadblockDialogViewController, TNDRTinderPlusPaywallAnimationController, TNDRUser, TNDRWhatsNewDialogViewController, UICollectionView, UIImageView, UILabel, UIPanGestureRecognizer, UITapGestureRecognizer, UITextField, UIView;

@interface TNDRRecommendationViewController : _ABCreateStringWithAddressDictionary <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, TNDRDiscoverOffViewDelegate, TNDRPassportLocationsListViewControllerDelegate, TNDRSubscriptionPaywallViewControllerDelegate, TNDRCardCellControlDependencies, TNDRShareRecViewControllerPresenterDelegate, TNDRActionDialogViewControllerDelegate, TNDRCardCellStackControl, TNDRURLNavigableProtocol, TNDRSuperLikeRoadblockDelegate, TNDRSuperLikeTutorialDelegate>
{
    BOOL _isCardFinalizing;
    BOOL _isDraggingCard;
    BOOL _preventOpeningProfile;
    struct CGPoint _panStartPoint;
    struct CGPoint _panCurPoint;
    TNDRUser *_lastTrackedUser;
    UITextField *_testSLALCNum;
    BOOL _userInteractionEnabled;
    BOOL _openingUserProfile;
    BOOL _isShowingRateLimitDeviceTimeError;
    BOOL _recsSessionIsActive;
    BOOL _rebuildingCardStack;
    BOOL _isFirstAppearance;
    BOOL _superLikeActionEnabledForTopCard;
    BOOL _showSuperLikeIntroOnNextViewAppear;
    BOOL _isAskingForJobPermission;
    TNDRLikeGamepadButton *_likeButton;
    TNDRGamepadButton *_passButton;
    TNDRRewindGamepadButton *_rewindButton;
    TNDRPassportGamepadButton *_passportButton;
    TNDRSuperLikeGamepadButton *_superLikeButton;
    TNDRGamepadButton *_infoButton;
    id <TNDRSlidingPagedViewControllerDelegate> _slidingPagedDelegate;
    id <TNDRRecommendationViewControllerCardCellInteractionHandler> _previousCardCellInteractionHandler;
    TNDRStackLayout *_stackLayout;
    TNDREmptyStackLayout *_emptyStackLayout;
    UICollectionView *_collectionView;
    TNDRCardCellMediator *_mediator;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIView *_animatableCardContentView;
    UIImageView *_cardSnapshotShadow;
    TNDRNoRecommendationsView *_noRecommendationsView;
    TNDRDiscoverOffView *_discoverOffView;
    UIView *_animatableCardContainerView;
    TNDRGamepadBackgroundView *_buttonContainer;
    UILabel *_likeStampView;
    UILabel *_passStampView;
    UILabel *_superLikeStampView;
    UILabel *_centerLikeStampView;
    UILabel *_centerPassStampView;
    UILabel *_centersuperLikeStampView;
    TNDRGameToNewMatchAnimationController *_gameToNewMatchTransitioning;
    TNDRSubscriptionPaywallViewController *_subscriptionPaywallViewController;
    TNDRTinderPlusPaywallAnimationController *_paywallAnimationController;
    TNDRSuperLikePackagesPaywallVC *_superLikePackagesPaywallVC;
    TNDRSuperLikePackagesPaywallAC *_superLikePackagesPaywallAC;
    TNDRRateLimitRoadblockDialogViewController *_rateLimitRoadblockDialogViewController;
    TNDRPassportLocationsListViewController *_passportLocationsListController;
    TNDRButtonViewSwappingOverlayAnimationController *_passportLocationsListAnimationController;
    TNDRPassportMapStackContainerViewController *_passportMapSearchViewController;
    TNDRNotInGroupDialogVC *_notInGroupDialogVC;
    int _passportTravelState;
    NSURLSessionDataTask *_currentPassportTask;
    TNDRSuperLikeFirstTimeConfirmationDialogViewController *_superLikeConfirmationDialogViewController;
    TNDRSuperLikeRoadblockDialogViewController *_superLikeProfileDialogViewController;
    TNDRWhatsNewDialogViewController *_whatsNewDialogViewController;
    NSDate *_lastPanCardStackAnimation;
    TNDRShareRecViewControllerPresenter *_shareRecViewControllerPresenter;
    UIView *_slidingNavbarSnapshot;
    MBProgressHUD *_statusHUD;
}

+ (id)viewControllerNavigationKey;
- (void)setStatusHUD:(id)fp8;
- (id)statusHUD;
- (void)setSlidingNavbarSnapshot:(id)fp8;
- (id)slidingNavbarSnapshot;
- (void)setShareRecViewControllerPresenter:(id)fp8;
- (id)shareRecViewControllerPresenter;
- (void)setLastPanCardStackAnimation:(id)fp8;
- (id)lastPanCardStackAnimation;
- (void)setIsAskingForJobPermission:(BOOL)fp8;
- (BOOL)isAskingForJobPermission;
- (void)setShowSuperLikeIntroOnNextViewAppear:(BOOL)fp8;
- (BOOL)showSuperLikeIntroOnNextViewAppear;
- (void)setSuperLikeActionEnabledForTopCard:(BOOL)fp8;
- (BOOL)isSuperLikeActionEnabledForTopCard;
- (void)setWhatsNewDialogViewController:(id)fp8;
- (id)whatsNewDialogViewController;
- (void)setSuperLikeProfileDialogViewController:(id)fp8;
- (id)superLikeProfileDialogViewController;
- (void)setSuperLikeConfirmationDialogViewController:(id)fp8;
- (id)superLikeConfirmationDialogViewController;
- (void)setIsFirstAppearance:(BOOL)fp8;
- (BOOL)isFirstAppearance;
- (void)setRebuildingCardStack:(BOOL)fp8;
- (BOOL)isRebuildingCardStack;
- (void)setRecsSessionIsActive:(BOOL)fp8;
- (BOOL)recsSessionIsActive;
- (void)setIsShowingRateLimitDeviceTimeError:(BOOL)fp8;
- (BOOL)isShowingRateLimitDeviceTimeError;
- (void)setCurrentPassportTask:(id)fp8;
- (id)currentPassportTask;
- (void)setPassportTravelState:(int)fp8;
- (int)passportTravelState;
- (void)setNotInGroupDialogVC:(id)fp8;
- (id)notInGroupDialogVC;
- (void)setPassportMapSearchViewController:(id)fp8;
- (id)passportMapSearchViewController;
- (void)setPassportLocationsListAnimationController:(id)fp8;
- (void)setPassportLocationsListController:(id)fp8;
- (id)passportLocationsListController;
- (void)setRateLimitRoadblockDialogViewController:(id)fp8;
- (id)rateLimitRoadblockDialogViewController;
- (void)setSuperLikePackagesPaywallAC:(id)fp8;
- (id)superLikePackagesPaywallAC;
- (void)setSuperLikePackagesPaywallVC:(id)fp8;
- (id)superLikePackagesPaywallVC;
- (void)setPaywallAnimationController:(id)fp8;
- (id)paywallAnimationController;
- (void)setSubscriptionPaywallViewController:(id)fp8;
- (id)subscriptionPaywallViewController;
- (void)setOpeningUserProfile:(BOOL)fp8;
- (BOOL)openingUserProfile;
- (void)setGameToNewMatchTransitioning:(id)fp8;
- (id)gameToNewMatchTransitioning;
- (void)setCentersuperLikeStampView:(id)fp8;
- (id)centersuperLikeStampView;
- (void)setCenterPassStampView:(id)fp8;
- (id)centerPassStampView;
- (void)setCenterLikeStampView:(id)fp8;
- (id)centerLikeStampView;
- (void)setSuperLikeStampView:(id)fp8;
- (id)superLikeStampView;
- (void)setPassStampView:(id)fp8;
- (id)passStampView;
- (void)setLikeStampView:(id)fp8;
- (id)likeStampView;
- (void)setButtonContainer:(id)fp8;
- (id)buttonContainer;
- (void)setAnimatableCardContainerView:(id)fp8;
- (id)animatableCardContainerView;
- (BOOL)userInteractionEnabled;
- (void)setDiscoverOffView:(id)fp8;
- (id)discoverOffView;
- (void)setNoRecommendationsView:(id)fp8;
- (id)noRecommendationsView;
- (void)setCardSnapshotShadow:(id)fp8;
- (id)cardSnapshotShadow;
- (void)setAnimatableCardContentView:(id)fp8;
- (id)animatableCardContentView;
- (void)setTapGestureRecognizer:(id)fp8;
- (id)tapGestureRecognizer;
- (void)setPanGestureRecognizer:(id)fp8;
- (id)panGestureRecognizer;
- (void)setMediator:(id)fp8;
- (id)mediator;
- (void)setCollectionView:(id)fp8;
- (id)collectionView;
- (void)setEmptyStackLayout:(id)fp8;
- (id)emptyStackLayout;
- (void)setStackLayout:(id)fp8;
- (id)stackLayout;
- (void)setPreviousCardCellInteractionHandler:(id)fp8;
- (id)previousCardCellInteractionHandler;
- (void)setSlidingPagedDelegate:(id)fp8;
- (id)slidingPagedDelegate;
- (void)setInfoButton:(id)fp8;
- (id)infoButton;
- (void)setSuperLikeButton:(id)fp8;
- (id)superLikeButton;
- (void)setPassportButton:(id)fp8;
- (id)passportButton;
- (void)setRewindButton:(id)fp8;
- (id)rewindButton;
- (void)setPassButton:(id)fp8;
- (id)passButton;
- (void)setLikeButton:(id)fp8;
- (id)likeButton;
- (void).cxx_destruct;
- (void)performForceReauthenticationAndHandleResponse;
- (void)askForJobPermissionsIfNeeded;
- (void)transitionTo:(id)fp8 optionsDict:(id)fp12 animated:(BOOL)fp16 completion:(id)fp(null);
- (void)didSelectToCloseLocationListWithoutTraveling;
- (void)didSelectTravelToLocation:(id)fp8;
- (void)didSelectToOpenMapSearchController;
- (void)didSelectToNavigateToPassportPaywall:(unsigned int)fp8;
- (void)showWhatsNewViewControllerWithSuperlikeItem:(BOOL)fp8;
- (void)superLikeRoadblockDialogViewControllerConfirmAndWait:(id)fp8 completion:(id)fp(null);
- (void)superLikeRoadblockDialogViewControllerRequestsCancel:(id)fp8 completion:(id)fp(null);
- (void)superLikeRoadblockDialogViewControllerRequestsGetPlus:(id)fp8 completion:(id)fp(null);
- (void)superLikeTutorialDidChooseNotNow:(id)fp8;
- (void)superLikeTutorialDidChooseSuperLike:(id)fp8;
- (void)dialogViewControllerRequestsDismissal:(id)fp8 completion:(id)fp(null);
- (void)dialogViewControllerDidTapCancelButton:(id)fp8;
- (void)dialogViewControllerDidTapActionButton:(id)fp8;
- (void)paywallRequestsDismissal;
- (void)didCompletePurchase;
- (void)showSuperLikePackagesPaywallFrom:(unsigned int)fp8 withUser:(id)fp12;
- (void)showTinderPlusPaywallFrom:(unsigned int)fp8;
- (void)handleRecsSessionEndingFromViewDisappearing;
- (void)handleRecsSessionStartingFromViewAppearing;
- (id)animationControllerForDismissedController:(id)fp8;
- (id)animationControllerForPresentedController:(id)fp8 presentingController:(id)fp12 sourceController:(id)fp16;
- (void)returnCardCellToCenter:(id)fp8;
- (void)dismissCardCellWithSwipeUp:(id)fp8 showStamp:(unsigned int)fp12;
- (void)dismissCardCellWithSwipeRight:(id)fp8 showStamp:(unsigned int)fp12;
- (void)dismissCardCellWithSwipeLeft:(id)fp8 showStamp:(unsigned int)fp12;
- (id)stackControlDelegate;
- (id)stackViewController;
- (void)animateCellToCenter:(id)fp8;
- (void)resetAnimatableContentViewForCell:(id)fp8;
- (void)animateCell:(id)fp8 direction:(int)fp12;
- (void)translateSwipedCellOffscreen:(id)fp8 direction:(int)fp12;
- (void)animateUnswipedCellOffscreen:(id)fp8 direction:(int)fp12 showStamp:(unsigned int)fp16;
- (id)identifyCenterStampViewWithDirection:(int)fp8;
- (void)adjustCardShadowsForLastVisibleCell;
- (void)fadeOutShadowForAnimatableCardContainerView;
- (void)dismissCell:(id)fp8 direction:(int)fp12 showStamp:(unsigned int)fp16;
- (void)taplyticsExperimentGameViewUpdate:(id)fp8;
- (void)cardStackDidFinishRebuilding;
- (void)cardStackWillBeCleared;
- (BOOL)destinationViewControllerShouldTriggerRecsSessionEnd:(id)fp8;
- (int)numberOfCardsInStack;
- (void)toggleSeenOnStackForCardsInStack:(BOOL)fp8;
- (void)markAllCardsUnseenAfterUserAccountOrDiscoverySettingsChange;
- (void)updateDiscoverEnabledWithCompletionHandler:(id)fp(null);
- (void)discoverButtonTapped;
- (void)removeDiscoverOffView;
- (void)showDiscoverOffiew;
- (void)showNotInGroupDialogVC;
- (void)notifySuperLikeAvailabilityOnTopCard;
- (void)removeNoRecommendationsView;
- (void)showNoRecommendationsView;
- (void)clearBusyMessage;
- (void)showBusyMessage:(id)fp8;
- (void)animateInGameButtons:(id)fp(null);
- (void)changeButtonContainerForUpdatedGameType:(id)fp(null);
- (void)checkForGameButtonTypeChangesAndTransitionIfNecessary;
- (void)updateNavbarSnapshot;
- (void)handleGroupExpirationStateChange;
- (BOOL)shareRecViewControllerPresenterShouldPresentShareRecSheet:(id)fp8;
- (void)handleShareARec:(id)fp8;
- (void)handleSuperLikeRoadblockRequestedOpenPaywallNotification:(id)fp8;
- (void)handleRoadblockRequestedOpenPaywallNotification:(id)fp8;
- (void)handleCurrentUserDidClearDataNotification:(id)fp8;
- (void)checkForOutOfSyncCollectionViewData;
- (void)postDidDismissCellNotificationForDirection:(int)fp8;
- (void)handleMediatorDidChangeCellsNotification:(id)fp8;
- (void)handleTrackRecsStartAfterIntro:(id)fp8;
- (void)handleSwipesRemainingUpdatedNotification:(id)fp8;
- (void)handleAppBackgroundedNotification:(id)fp8;
- (void)handleAppForegroundedNotification:(id)fp8;
- (void)handlePaywallDownloadedProducts:(id)fp8;
- (void)handleUserAuthenticated:(id)fp8;
- (void)handleTinderPlusInactiveNotification:(id)fp8;
- (void)handleSuperLikeActionFromProfileGamepad:(id)fp8;
- (void)handleSuperLikeActionFromTutorialNotification:(id)fp8;
- (void)handleSuperLikeActionCompletedNotification:(id)fp8;
- (void)handleSuperLikeUndoActionFailureNotification:(id)fp8;
- (void)handleSuperLikeUndoActionSuccessfulNotification:(id)fp8;
- (void)handleSuperLikeShouldBecomeUnavailableForRecNotification:(id)fp8;
- (void)handleSuperLikeShouldBecomeAvailableForRecNotification:(id)fp8;
- (void)handleTinderPlusActiveNotification:(id)fp8;
- (void)handleRewindDidBecomeAvailableNotification:(id)fp8;
- (void)handleRewindDidBecomeUnavailableNotification:(id)fp8;
- (void)handleStatusBarChangedNotification:(id)fp8;
- (void)handleNoRecommendationsNotification:(id)fp8;
- (void)notifySuperLikeTopCardRevealed:(BOOL)fp8;
- (void)handleShouldUpdateNavbarSnapshotFirstTime:(id)fp8;
- (void)handleShouldUpdateNavbarSnapshot:(id)fp8;
- (void)registerNotifications;
- (id)passportLocationsListAnimationController;
- (void)passportButtonTapped:(id)fp8;
- (void)animateSuperLikeTriggeredInNavigationBar;
- (void)notifyWillAnimateSuperLikeTriggeredInNavigationBar;
- (void)animateSuperLikeRewind;
- (void)animateSuperLikeUseFrom:(int)fp8 to:(int)fp12 completion:(id)fp(null);
- (void)showSuperLikeIntroductionIfNeeded;
- (void)showSuperLikeFirstTimeUseTutorial:(id)fp(null);
- (void)showTutorialToUser:(id)fp8 completion:(id)fp(null);
- (void)showSuperLikeRoadblock;
- (void)performSuperLikeButtonAnimation;
- (void)performSuperLikeIfAvailable;
- (void)superLikeButtonTapped:(id)fp8;
- (void)setStackLayoutRewindDirection:(BOOL)fp8 isSuperLikeRewind:(BOOL)fp12;
- (void)performRewindAction;
- (void)rewindButtonTapped:(id)fp8;
- (void)infoButtonTapped:(id)fp8;
- (void)likeButtonTapped:(id)fp8;
- (void)passButtonTapped:(id)fp8;
- (void)topCardTapped:(id)fp8;
- (void)setupSuperLikeLimitExceededRoadblockViewControllerWithUser:(id)fp8;
- (void)returnRecommendationToCenterForServerError:(id)fp8 completion:(id)fp(null);
- (void)returnRecommendationToCenterForSuperLikeLimitExceeded:(id)fp8;
- (void)setupRateLimitRoadblockViewControllerWithUserID:(id)fp8;
- (void)returnRecommendationToCenterForRateLimiting:(id)fp8;
- (void)showSlidingNavbarSnapshotBelowDraggable:(BOOL)fp8 forRewind:(BOOL)fp12;
- (void)showSlidingNavbarSnapshotBelowDraggable:(BOOL)fp8;
- (void)notifyInteractionHandlerOfTapLeftAccessory:(id)fp8;
- (void)notifyInteractionHandlerOfTapSuperLikeButton;
- (void)notifyInteractionHandlerOfTapRight;
- (void)notifyInteractionHandlerOfTapLeft;
- (void)notifyInteractionHandlerOfTappedInfoButton;
- (void)notifyInteractionHandlerOfSwipeUp;
- (void)notifyInteractionHandlerOfSwipeRight;
- (void)notifyInteractionHandlerOfSwipeLeft;
- (void)notifyInteractionHandlerOfTappedCard;
- (void)adjustCardsForPanningPosition:(float)fp8;
- (void)adjustCardsAfterAnimation;
- (void)adjustCardsAfterPanningEnds;
- (void)adjustCardBeforePanningStarts;
- (void)adjustCardAtIndex:(int)fp8 horizontalTranslation:(float)fp12;
- (void)createAndShowAnimatableCardViewForCell:(id)fp8 enableShadow:(BOOL)fp12;
- (void)highlightActionIndicators:(float)fp8 highLightSuperLike:(float)fp12;
- (void)finishSwipingInDirection:(int)fp8 withVelocity:(struct CGPoint)fp12;
- (void)performSuperLikeSwipeUpAnimations;
- (void)handlePanGesture:(id)fp8;
- (int)swipeDirectionDetectedForVelocityInPanGesture:(id)fp8;
- (BOOL)panGestureStandardStampsAreOffscreen:(id)fp8 offset:(float)fp12;
- (BOOL)panGestureStandardStampsAreOffscreen:(id)fp8;
- (BOOL)gestureRecognizerShouldBegin:(id)fp8;
- (id)gamePanGestureRecognizer;
- (id)cellForIndexOnStack:(unsigned int)fp8;
- (id)interactionHandlerForPreviousCardOnStack;
- (id)cellForTopCardOnStack;
- (void)setUserInteractionEnabled:(BOOL)fp8;
- (void)setupGameCardFrames;
- (void)setupGestureRecognizer;
- (void)setupAccessibilityLabels;
- (struct CGAffineTransform)hiddenGamepadTransform;
- (float)gamepadCenterYAdjust;
- (void)setupButtons;
- (struct CGAffineTransform)preferredSuperLikeStampViewTransform;
- (id)superLikeStamp;
- (struct CGPoint)defaultLikeStampCenterAtPosition:(unsigned int)fp8;
- (id)likeStamp;
- (struct CGPoint)defaultPassStampCenterAtPosition:(unsigned int)fp8;
- (id)passStamp;
- (void)setupAnimatableCardContainerViewWithShadow:(BOOL)fp8;
- (void)setupAnimatableCardContainerView;
- (void)setupSuperLikePackagesPaywallVC;
- (void)setupPaywallViewController;
- (void)setup;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;
- (void)didReceiveMemoryWarning;

@end

