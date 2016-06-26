/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SLKTextViewController.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "TNDR2ProfilePreviewDelegate-Protocol.h"
#import "TNDRActionSheetDelegate-Protocol.h"
#import "TNDRChatCellDelegate-Protocol.h"
#import "TNDRChatMessagesViewModelDelegate-Protocol.h"
#import "TNDRExpiredChatViewControllerDelegate-Protocol.h"
#import "TNDRGIFGalleryViewControllerDelegate-Protocol.h"
#import "TNDRGIFStripDataSourceDelegate-Protocol.h"
#import "TNDRMapPreviewViewControllerDelegate-Protocol.h"
#import "TNDRNotificationWindowDelegate-Protocol.h"
#import "TNDRReportDialogViewControllerDelegate-Protocol.h"
#import "TNDRSubscriptionPaywallViewControllerDelegate-Protocol.h"
#import "TNDRSuperLikeRoadblockDelegate-Protocol.h"
#import "TNDRURLNavigableProtocol-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSArray, NSFetchedResultsController, NSLayoutConstraint, NSMutableArray, NSNumber, NSString, NSTimer, TNDRActionSheet, TNDRAttributedLabel, TNDRAvatarLinearView, TNDRBlockMatch, TNDRButtonAnimateView, TNDRChatMessagesViewModel, TNDRChatToProfileTransitioningDelegate, TNDRExpiredChatViewController, TNDRGIFGalleryViewController, TNDRGIFStripDataSource, TNDRGameToNewMatchAnimationController, TNDRGroupProfileViewController, TNDRMatch, TNDRMatchImage, TNDRMatchToChatAnimationController, TNDRProfilePreviewViewController, TNDRRateLimitRoadblockDialogViewController, TNDRReportGroupDialogViewController, TNDRReportUserDialogViewController, TNDRSubscriptionPaywallViewController, TNDRSuperLikePackagesPaywallAC, TNDRSuperLikePackagesPaywallVC, TNDRSuperLikeRoadblockDialogViewController, TNDRTinderPlusPaywallAnimationController, UIButton, UICollectionViewFlowLayout, UIImage, UIImageView, UINavigationBar, UINavigationItem, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;

@interface TNDRSlackChatViewController : SLKTextViewController <NSFetchedResultsControllerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerPreviewingDelegate, TNDRActionSheetDelegate, TNDR2ProfilePreviewDelegate, TNDRChatMessagesViewModelDelegate, TTTAttributedLabelDelegate, TNDRNotificationWindowDelegate, TNDRChatCellDelegate, TNDRReportDialogViewControllerDelegate, TNDRMapPreviewViewControllerDelegate, TNDRGIFGalleryViewControllerDelegate, TNDRGIFStripDataSourceDelegate, TNDRExpiredChatViewControllerDelegate, TNDRSuperLikeRoadblockDelegate, TNDRSubscriptionPaywallViewControllerDelegate, TNDRURLNavigableProtocol>
{
    BOOL _showsLoading;
    BOOL _readyForPresentation;
    BOOL _miniStackVisible;
    BOOL _isPreviewingForPeek;
    BOOL _scrolledToBottom;
    BOOL _hadFirstResponder;
    BOOL _canOpenAvatar;
    BOOL _reloadAfterResendingMessage;
    BOOL _shouldReloadForMoreMessages;
    BOOL _attemptingBlock;
    BOOL _gifModeEnabled;
    BOOL _needsToScrollToBottom;
    BOOL _insertPending;
    BOOL _hasRegisteredFor3DTouchPreviewing;
    BOOL _isPreviewingChat;
    TNDRMatch *_match;
    UIView *_avatarAndNameView;
    float _offsetY;
    UIImage *_matchImage;
    id <TNDRChatViewControllerDelegate> _delegate;
    TNDRMatchToChatAnimationController *_animationDelegate;
    NSNumber *_notificationType;
    UINavigationBar *_navigationBar;
    NSString *_shortcutSource;
    NSFetchedResultsController *_fetchedResultsController;
    NSArray *_dataItemsArray;
    UIView *_possibleKeyboardView;
    UIView *_screenshotView;
    UIView *_noMessagesView;
    NSString *_defaultPlaceholderText;
    id _navigationBarLayoutBlock;
    UICollectionViewFlowLayout *_standardFlowLayout;
    TNDRChatMessagesViewModel *_viewModel;
    TNDRAttributedLabel *_textHeightLabel;
    UIView *_loadingHeader;
    UIImageView *_loadingFlame;
    NSTimer *_reloadTimer;
    UIPanGestureRecognizer *_timeRevealPanGestureRecognizer;
    UITapGestureRecognizer *_tapAvatarTitleGestureRecognizer;
    float _curDiffX;
    UINavigationItem *_baseNavigationItem;
    UINavigationItem *_previewNavigationItem;
    TNDRActionSheet *_moreActionSheet;
    NSArray *_groupMembers;
    TNDRBlockMatch *_blockMatchManager;
    NSMutableArray *_fetchedObjectChanges;
    TNDRProfilePreviewViewController *_profilePreviewVC;
    TNDRGIFGalleryViewController *_gifPreviewVC;
    TNDRReportUserDialogViewController *_reportUserDialogViewController;
    TNDRChatToProfileTransitioningDelegate *_profileTransitionDelegate;
    TNDRGroupProfileViewController *_groupProfileVC;
    NSString *_stashedTextForMessage;
    TNDRGIFStripDataSource *_gifDataSource;
    NSString *_gifToSend;
    TNDRButtonAnimateView *_animateView;
    UIButton *_clearButtonForGIFs;
    int _maxTextLength;
    TNDRExpiredChatViewController *_expiredChatVC;
    NSLayoutConstraint *_expiredChatViewHeightConstraint;
    NSLayoutConstraint *_expiredChatViewBottomConstraint;
    TNDRGameToNewMatchAnimationController *_gameToNewMatchTransitioning;
    UIPanGestureRecognizer *_expirationPanGR;
    float _expPanStartHeight;
    float _expPanStartBottomConstant;
    TNDRReportGroupDialogViewController *_reportGroupDialogViewController;
    TNDRMatchImage *_matchImageObject;
    TNDRAvatarLinearView *_avatarLinearView;
    TNDRSuperLikeRoadblockDialogViewController *_superLikeProfileDialogViewController;
    TNDRSubscriptionPaywallViewController *_subscriptionPaywallViewController;
    TNDRTinderPlusPaywallAnimationController *_paywallAnimationController;
    TNDRSuperLikePackagesPaywallVC *_superLikePackagesPaywallVC;
    TNDRSuperLikePackagesPaywallAC *_superLikePackagesPaywallAC;
    TNDRRateLimitRoadblockDialogViewController *_rateLimitRoadblockDialogViewController;
    struct CGPoint _panStartPoint;
    struct CGPoint _panCurPoint;
    struct CGPoint _expPanStartPoint;
    struct CGPoint _expPanCurPoint;
    struct UIEdgeInsets _edgeInsetsInNormalMode;
}

+ (id)viewControllerNavigationKey;
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
- (void)setSuperLikeProfileDialogViewController:(id)fp8;
- (id)superLikeProfileDialogViewController;
- (void)setAvatarLinearView:(id)fp8;
- (id)avatarLinearView;
- (void)setMatchImageObject:(id)fp8;
- (id)matchImageObject;
- (void)setReportGroupDialogViewController:(id)fp8;
- (id)reportGroupDialogViewController;
- (void)setExpPanStartBottomConstant:(float)fp8;
- (float)expPanStartBottomConstant;
- (void)setExpPanStartHeight:(float)fp8;
- (float)expPanStartHeight;
- (void)setExpPanCurPoint:(struct CGPoint)fp8;
- (struct CGPoint)expPanCurPoint;
- (void)setExpPanStartPoint:(struct CGPoint)fp8;
- (struct CGPoint)expPanStartPoint;
- (void)setExpirationPanGR:(id)fp8;
- (id)expirationPanGR;
- (void)setGameToNewMatchTransitioning:(id)fp8;
- (id)gameToNewMatchTransitioning;
- (void)setExpiredChatViewBottomConstraint:(id)fp8;
- (id)expiredChatViewBottomConstraint;
- (void)setExpiredChatViewHeightConstraint:(id)fp8;
- (id)expiredChatViewHeightConstraint;
- (void)setExpiredChatVC:(id)fp8;
- (id)expiredChatVC;
- (void)setIsPreviewingChat:(BOOL)fp8;
- (BOOL)isPreviewingChat;
- (void)setHasRegisteredFor3DTouchPreviewing:(BOOL)fp8;
- (BOOL)hasRegisteredFor3DTouchPreviewing;
- (void)setMaxTextLength:(int)fp8;
- (int)maxTextLength;
- (void)setInsertPending:(BOOL)fp8;
- (BOOL)insertPending;
- (void)setNeedsToScrollToBottom:(BOOL)fp8;
- (BOOL)needsToScrollToBottom;
- (void)setEdgeInsetsInNormalMode:(struct UIEdgeInsets)fp8;
- (struct UIEdgeInsets)edgeInsetsInNormalMode;
- (void)setClearButtonForGIFs:(id)fp8;
- (void)setAnimateView:(id)fp8;
- (id)animateView;
- (void)setGifToSend:(id)fp8;
- (id)gifToSend;
- (void)setGifDataSource:(id)fp8;
- (void)setStashedTextForMessage:(id)fp8;
- (id)stashedTextForMessage;
- (BOOL)gifModeEnabled;
- (void)setGroupProfileVC:(id)fp8;
- (id)groupProfileVC;
- (void)setProfileTransitionDelegate:(id)fp8;
- (id)profileTransitionDelegate;
- (void)setReportUserDialogViewController:(id)fp8;
- (id)reportUserDialogViewController;
- (void)setGifPreviewVC:(id)fp8;
- (id)gifPreviewVC;
- (void)setProfilePreviewVC:(id)fp8;
- (id)profilePreviewVC;
- (void)setFetchedObjectChanges:(id)fp8;
- (id)fetchedObjectChanges;
- (void)setBlockMatchManager:(id)fp8;
- (void)setAttemptingBlock:(BOOL)fp8;
- (BOOL)isAttemptingBlock;
- (void)setGroupMembers:(id)fp8;
- (id)groupMembers;
- (void)setMoreActionSheet:(id)fp8;
- (id)moreActionSheet;
- (void)setPreviewNavigationItem:(id)fp8;
- (id)previewNavigationItem;
- (void)setBaseNavigationItem:(id)fp8;
- (id)baseNavigationItem;
- (void)setCurDiffX:(float)fp8;
- (float)curDiffX;
- (void)setPanCurPoint:(struct CGPoint)fp8;
- (struct CGPoint)panCurPoint;
- (void)setPanStartPoint:(struct CGPoint)fp8;
- (struct CGPoint)panStartPoint;
- (void)setTapAvatarTitleGestureRecognizer:(id)fp8;
- (id)tapAvatarTitleGestureRecognizer;
- (void)setTimeRevealPanGestureRecognizer:(id)fp8;
- (id)timeRevealPanGestureRecognizer;
- (void)setShouldReloadForMoreMessages:(BOOL)fp8;
- (BOOL)shouldReloadForMoreMessages;
- (void)setReloadTimer:(id)fp8;
- (id)reloadTimer;
- (void)setLoadingFlame:(id)fp8;
- (id)loadingFlame;
- (void)setLoadingHeader:(id)fp8;
- (id)loadingHeader;
- (void)setTextHeightLabel:(id)fp8;
- (id)textHeightLabel;
- (void)setViewModel:(id)fp8;
- (id)viewModel;
- (void)setStandardFlowLayout:(id)fp8;
- (id)standardFlowLayout;
- (void)setNavigationBarLayoutBlock:(id)fp(null);
- (id)navigationBarLayoutBlock;
- (void)setReloadAfterResendingMessage:(BOOL)fp8;
- (BOOL)shouldReloadAfterResendingMessage;
- (void)setCanOpenAvatar:(BOOL)fp8;
- (BOOL)canOpenAvatar;
- (void)setDefaultPlaceholderText:(id)fp8;
- (id)defaultPlaceholderText;
- (void)setNoMessagesView:(id)fp8;
- (id)noMessagesView;
- (void)setHadFirstResponder:(BOOL)fp8;
- (BOOL)hadFirstResponder;
- (void)setScreenshotView:(id)fp8;
- (id)screenshotView;
- (void)setPossibleKeyboardView:(id)fp8;
- (id)possibleKeyboardView;
- (void)setScrolledToBottom:(BOOL)fp8;
- (BOOL)scrolledToBottom;
- (void)setDataItemsArray:(id)fp8;
- (id)dataItemsArray;
- (void)setFetchedResultsController:(id)fp8;
- (id)fetchedResultsController;
- (void)setShortcutSource:(id)fp8;
- (id)shortcutSource;
- (BOOL)isPreviewingForPeek;
- (void)setNavigationBar:(id)fp8;
- (id)navigationBar;
- (void)setNotificationType:(id)fp8;
- (id)notificationType;
- (void)setMiniStackVisible:(BOOL)fp8;
- (BOOL)isMiniStackVisible;
- (void)setAnimationDelegate:(id)fp8;
- (id)animationDelegate;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setReadyForPresentation:(BOOL)fp8;
- (BOOL)isReadyForPresentation;
- (void)setMatchImage:(id)fp8;
- (id)matchImage;
- (void)setOffsetY:(float)fp8;
- (float)offsetY;
- (void)setShowsLoading:(BOOL)fp8;
- (BOOL)showsLoading;
- (void)setAvatarAndNameView:(id)fp8;
- (id)avatarAndNameView;
- (void)setMatch:(id)fp8;
- (id)match;
- (void).cxx_destruct;
- (id)navigationBarSnapShot;
- (id)textInputBarSnapShot;
- (void)attributedLabel:(id)fp8 didSelectLinkWithPhoneNumber:(id)fp12;
- (void)attributedLabel:(id)fp8 didSelectLinkWithAddress:(id)fp12;
- (void)attributedLabel:(id)fp8 didSelectLinkWithURL:(id)fp12;
- (void)openSafariViewControllerWithURL:(id)fp8;
- (void)viewingGIFAtIndexPath:(id)fp8;
- (void)gifSelected:(id)fp8;
- (void)textDidUpdate:(BOOL)fp8;
- (BOOL)textView:(id)fp8 shouldChangeTextInRange:(struct _NSRange)fp12 replacementText:(id)fp20;
- (void)transitionTo:(id)fp8 optionsDict:(id)fp12 animated:(BOOL)fp16 completion:(id)fp(null);
- (id)animationControllerForDismissedController:(id)fp8;
- (id)animationControllerForPresentedController:(id)fp8 presentingController:(id)fp12 sourceController:(id)fp16;
- (void)requestDismissReportDialogReportSucceeded;
- (void)requestDismissReportDialogCancelled;
- (id)textViewForOverridingFirstResponder;
- (float)heightForEmojiText:(id)fp8;
- (float)heightForText:(id)fp8 lastMessage:(BOOL)fp12 leftMessage:(BOOL)fp16;
- (struct CGSize)collectionView:(id)fp8 layout:(id)fp12 sizeForItemAtIndexPath:(id)fp16;
- (void)snapExpiredChatToFullSize;
- (void)snapExpiredChatToMinimized;
- (BOOL)shouldMinimizeWithVelociy:(struct CGPoint)fp8 diffY:(float)fp16;
- (void)adjustExpiredChatConstraints:(float)fp8;
- (float)yDifferenceFromTranslation:(struct CGPoint)fp8;
- (void)handleExpiredChatPan:(id)fp8;
- (void)resetCellPositions;
- (void)adjustCellPositions:(float)fp8;
- (BOOL)gestureRecognizer:(id)fp8 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)fp12;
- (float)normalizedCellTranslation;
- (void)handlePanGestures:(id)fp8;
- (void)setupGestureRecognizers;
- (BOOL)notificationWindow:(id)fp8 shouldShowNotification:(id)fp12;
- (void)hideKeyboardWithoutAnimation;
- (void)hideAndRemoveScreenshot;
- (id)keyboardScreenSnapshot;
- (void)showScreenshot;
- (void)trackRatingOfLiked:(BOOL)fp8 user:(id)fp12 superLiked:(BOOL)fp16 method:(id)fp20 fromMore:(BOOL)fp24;
- (void)didTapProfileSuperLikeButton;
- (void)didTapProfilePassButton;
- (void)didTapProfileLikeButton;
- (void)didBlockMatchFromProfile;
- (void)didTapProfileDoneButton;
- (void)setupMatchProfilePreviewWithUser:(id)fp8;
- (void)showGroupMatchProfile;
- (void)showMatchProfileWithUser:(id)fp8;
- (void)showMatchProfile;
- (void)showSingleMatchOrGroupMatchProfile;
- (id)numberofInsertsFromChanges:(id)fp8;
- (id)orderedSetOfInsertsFromChanges:(id)fp8;
- (BOOL)shouldBeConsideredLegalWithIndexPath:(id)fp8;
- (int)numberOfIllegallInsertsFromControllerChanges:(id)fp8;
- (void)removeNoMessagesViewIfNecessary;
- (void)controllerDidChangeContent:(id)fp8;
- (void)controller:(id)fp8 didChangeObject:(id)fp12 atIndexPath:(id)fp16 forChangeType:(unsigned int)fp20 newIndexPath:(id)fp24;
- (void)controller:(id)fp8 didChangeSection:(id)fp12 atIndex:(unsigned int)fp16 forChangeType:(unsigned int)fp20;
- (void)didTapMapPreviewDoneButton;
- (id)previewActionStubsForAnalytics;
- (id)previewActionItems;
- (void)restoreNavigationItem;
- (void)restoreRefreshHeader;
- (void)hideRefreshHeaderForPreviewing;
- (void)adjustContentForPop;
- (void)actionSheet:(id)fp8 triggeredButtonWithId:(int)fp12;
- (void)setupActionSheet;
- (id)specialHandlerWindow;
- (void)chatCellDidFinishAnimating:(id)fp8;
- (void)chatCellLikeWithIndexPath:(id)fp8 likeValue:(BOOL)fp12 withMessage:(id)fp16 messageID:(id)fp20;
- (void)chatCellDidTapHeart:(id)fp8 message:(id)fp12 withValue:(BOOL)fp16;
- (void)chatCellDidTapGIF:(id)fp8;
- (void)chatCellDidTapError:(id)fp8;
- (void)chatCellDidTapAvatar:(id)fp8;
- (void)paywallRequestsDismissal;
- (void)didCompletePurchase;
- (void)superLikeRoadblockDialogViewControllerConfirmAndWait:(id)fp8 completion:(id)fp(null);
- (void)superLikeRoadblockDialogViewControllerRequestsCancel:(id)fp8 completion:(id)fp(null);
- (void)superLikeRoadblockDialogViewControllerRequestsGetPlus:(id)fp8 completion:(id)fp(null);
- (void)dialogViewControllerRequestsDismissal:(id)fp8 completion:(id)fp(null);
- (void)didTapExpiredChatHeader;
- (void)presentNewMatch:(id)fp8 onViewController:(id)fp12;
- (void)trackSuperLikeRating:(BOOL)fp8 withUser:(id)fp12 fromMore:(BOOL)fp16;
- (void)setupSuperLikePackagesPaywallVC;
- (void)showSuperLikePackagesPaywallFrom:(unsigned int)fp8 withUser:(id)fp12;
- (void)setupSuperLikeLimitExceededRoadblockViewControllerWithUser:(id)fp8;
- (void)setupRateLimitRoadblockViewControllerWithUserID:(id)fp8;
- (void)updateRecommendationToLikeWithSuperLike:(BOOL)fp8 onUser:(id)fp12 fromMore:(BOOL)fp16;
- (void)requestToLikeWithSuperLike:(BOOL)fp8 user:(id)fp12;
- (void)requestToLikeWithSuperLike:(BOOL)fp8 user:(id)fp12 fromMore:(BOOL)fp16;
- (void)requestTransitionToProfile:(id)fp8;
- (void)setupPaywallViewController;
- (void)showTinderPlusPaywallFrom:(unsigned int)fp8;
- (void)previewingContext:(id)fp8 commitViewController:(id)fp12;
- (id)previewingContext:(id)fp8 viewControllerForLocation:(struct CGPoint)fp12;
- (void)animateCellInsertionWithText:(id)fp8 indexPath:(id)fp12;
- (BOOL)validGroup;
- (void)didPressRightButton:(id)fp8;
- (void)markMessagesViewed;
- (void)handleMuteButtonTapped;
- (void)handleReportButtonTapped;
- (id)blockMatchManager;
- (void)handleBlockButtonTapped;
- (void)handleMoreButtonTapped:(id)fp8;
- (void)handleDoneButtonTapped:(id)fp8;
- (void)setIsPreviewingForPeek:(BOOL)fp8;
- (BOOL)shouldHideAutoCompletionViewOnKeyboardHide;
- (BOOL)slk_isIllogicalKeyboardStatus:(unsigned int)fp8;
- (void)slk_reloadTextView;
- (BOOL)gestureRecognizer:(id)fp8 shouldRequireFailureOfGestureRecognizer:(id)fp12;
- (float)slk_topBarsHeight;
- (BOOL)gestureRecognizerShouldBegin:(id)fp8;
- (void)scrollViewDidScroll:(id)fp8;
- (void)scrollViewDidEndDecelerating:(id)fp8;
- (void)scrollViewDidScrollToTop:(id)fp8;
- (void)reloadOlderMessagesIfNeeded;
- (void)removeRefreshHeader;
- (void)handleLoadOlderMessages:(id)fp8;
- (void)viewDidLayoutSubviews;
- (void)adjustNavigationBarFrame:(BOOL)fp8;
- (void)adjustContentViewFrames;
- (void)scrollToBottomImmediate:(BOOL)fp8;
- (void)handlePostLayoutProcesses;
- (void)handleProgressNotificationReceived:(id)fp8;
- (void)handleSuperLikeRoadblockRequestedOpenPaywallNotification:(id)fp8;
- (void)handleRoadblockRequestedOpenPaywallNotification:(id)fp8;
- (void)handleGroupExpired:(id)fp8;
- (void)handleChatExpired:(id)fp8;
- (void)handleStatusBarFrameChanged:(id)fp8;
- (void)unregisterNotifications;
- (void)registerNotifications;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)gifButtonPressed:(id)fp8;
- (void)setGifModeEnabled:(BOOL)fp8;
- (void)setAutoCompleting:(BOOL)fp8;
- (struct CGRect)keyboardPanningZoneFrame;
- (void)setGifModeEnabled:(BOOL)fp8 animated:(BOOL)fp12;
- (void)animateTextViewCornerRadiusTo:(float)fp8;
- (void)clearButtonForGIFsTapped:(id)fp8;
- (id)clearButtonForGIFs;
- (void)slk_hideAutoCompletionViewIfNeeded;
- (void)slk_enableTypingSuggestionIfNeeded;
- (void)setupGIFButtonForGIFMode;
- (void)setupGIFButtonForNormalMode;
- (float)slk_appropriateScrollViewHeight;
- (void)setupExpiredChatPanGR;
- (void)setupExpiredChatVC;
- (void)viewDidLoad;
- (id)gifDataSource;
- (float)heightForAutoCompletionView;
- (id)autoCompletionView;
- (id)maskImage:(id)fp8 withMask:(id)fp12;
- (void)animateImageView:(id)fp8 timeLabel:(id)fp12 titleLable:(id)fp16 label:(id)fp20;
- (void)setupNoMessagesView;
- (void)setupTitleView;
- (void)setupNavigationBars;
- (void)setupRefreshHeaderOnCollectionView;
- (void)handlePeekPopGestures:(id)fp8;
- (void)setup3DTouchCapablePreviewing;
- (void)setupMessagesData;
- (void)setupCollectionView;
- (void)setupCollectionViewDetails;
- (void)setupTextView;
- (void)setup;
- (id)initWithMatch:(id)fp8 cachedMatchImage:(id)fp12 animationDelegate:(id)fp16;
- (id)init;

@end

