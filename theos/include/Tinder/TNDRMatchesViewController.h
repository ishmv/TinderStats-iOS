/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "TNDR2ProfilePreviewDelegate-Protocol.h"
#import "TNDRChatViewControllerDelegate-Protocol.h"
#import "TNDRNewMatchesViewControllerDelegate-Protocol.h"
#import "TNDRReportDialogViewControllerDelegate-Protocol.h"
#import "TNDRURLNavigableProtocol-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSIndexPath, NSMutableArray, TNDRAllMatchesTracker, TNDRBlockMatch, TNDRChatToProfileTransitioningDelegate, TNDRMatch, TNDRMatchToChatAnimationController, TNDRMatchesHeaderContainerView, TNDRMatchesHeaderView, TNDRMatchesMessagesViewModel, TNDRNewMatchesViewController, TNDRNoMatchesView, TNDRProfilePreviewViewController, TNDRReportUserDialogViewController, TNDRUnreadMessagesTracker, TNDRUpdatingMatchesView, UIAlertView, UIImage, UIImageView, UISearchBar, UITableView, UITapGestureRecognizer, UIToolbar, UIView;

@interface TNDRMatchesViewController : _ABCreateStringWithAddressDictionary <NSFetchedResultsControllerDelegate, UIActionSheetDelegate, UIGestureRecognizerDelegate, TNDR2ProfilePreviewDelegate, UIAlertViewDelegate, UITextFieldDelegate, UIViewControllerTransitioningDelegate, TNDRNewMatchesViewControllerDelegate, UIViewControllerPreviewingDelegate, TNDRReportDialogViewControllerDelegate, UITableViewDelegate, UISearchBarDelegate, TNDRChatViewControllerDelegate, TNDRURLNavigableProtocol>
{
    UISearchBar *_searchBar;
    UIView *_searchOverlayView;
    UITapGestureRecognizer *_overlayTapGR;
    float _topOffset;
    UIImage *_imageForNewMatchesOrMessages;
    UIImage *_imageForNoNewMatchesOrMessages;
    UIImageView *_dotView;
    UIView *_separator;
    struct CGPoint _savedScrollOffset;
    float _lastOffsetY;
    float _defaultSearchContainerHeight;
    BOOL _inSearchMode;
    BOOL _returningFromChat;
    BOOL _presentingChat;
    BOOL _shouldPromptForRatingAfterReturningFromChat;
    BOOL _animationDisabled;
    BOOL _isCurrentlyVisible;
    BOOL _hasFinishedOneUpdateCallForThisSession;
    BOOL _hasAuthed;
    BOOL _hasRegisteredFor3DTouchPreviewing;
    BOOL _isAttemptingBlock;
    UITableView *_tableView;
    id <TNDRMatchesSearchDelegate> _delegate;
    TNDRNoMatchesView *_noMatchesView;
    TNDRNoMatchesView *_noMatchesWithMessagesView;
    TNDRUpdatingMatchesView *_matchesUpdatingView;
    TNDRNoMatchesView *_noMatchesSearchResultsView;
    UIView *_searchBarContainer;
    UIView *_searchBarBackground;
    UIToolbar *_toolbar;
    NSMutableArray *_selectedMatches;
    UIAlertView *_followAlertView;
    NSIndexPath *_indexPathToFollow;
    UIImage *_userImageToPresentFromSearch;
    TNDRMatch *_matchToPresentFromSearch;
    TNDRProfilePreviewViewController *_profilePreviewForRequest;
    TNDRChatToProfileTransitioningDelegate *_profileTransitioningDelegate;
    TNDRMatch *_matchToPresentChat;
    NSIndexPath *_selectedIndexPath;
    UIView *_tableFooterWhiteView;
    TNDRMatchesHeaderContainerView *_headerViewContainer;
    TNDRMatchesHeaderView *_matchesHeaderView;
    TNDRMatchesMessagesViewModel *_matchesWithMessagesViewModel;
    TNDRNewMatchesViewController *_matchesCollectionViewController;
    UIView *_matchesNewView;
    TNDRUnreadMessagesTracker *_unreadMessagesTracker;
    TNDRAllMatchesTracker *_allMatchesTracker;
    TNDRBlockMatch *_blockMatchManager;
    TNDRMatchToChatAnimationController *_matchToChatAnimationController;
    TNDRReportUserDialogViewController *_reportUserDialogViewController;
    struct CGRect _keyboardFrame;
}

+ (id)viewControllerNavigationKey;
- (void)setIsAttemptingBlock:(BOOL)fp8;
- (BOOL)isAttemptingBlock;
- (void)setReportUserDialogViewController:(id)fp8;
- (id)reportUserDialogViewController;
- (void)setMatchToChatAnimationController:(id)fp8;
- (id)matchToChatAnimationController;
- (void)setHasRegisteredFor3DTouchPreviewing:(BOOL)fp8;
- (BOOL)hasRegisteredFor3DTouchPreviewing;
- (void)setBlockMatchManager:(id)fp8;
- (void)setAllMatchesTracker:(id)fp8;
- (id)allMatchesTracker;
- (void)setUnreadMessagesTracker:(id)fp8;
- (id)unreadMessagesTracker;
- (void)setMatchesNewView:(id)fp8;
- (id)matchesNewView;
- (void)setMatchesCollectionViewController:(id)fp8;
- (id)matchesCollectionViewController;
- (void)setMatchesWithMessagesViewModel:(id)fp8;
- (id)matchesWithMessagesViewModel;
- (void)setMatchesHeaderView:(id)fp8;
- (id)matchesHeaderView;
- (void)setHeaderViewContainer:(id)fp8;
- (id)headerViewContainer;
- (void)setTableFooterWhiteView:(id)fp8;
- (id)tableFooterWhiteView;
- (void)setHasAuthed:(BOOL)fp8;
- (BOOL)hasAuthed;
- (void)setHasFinishedOneUpdateCallForThisSession:(BOOL)fp8;
- (BOOL)hasFinishedOneUpdateCallForThisSession;
- (void)setSelectedIndexPath:(id)fp8;
- (id)selectedIndexPath;
- (void)setKeyboardFrame:(struct CGRect)fp8;
- (struct CGRect)keyboardFrame;
- (void)setIsCurrentlyVisible:(BOOL)fp8;
- (BOOL)isCurrentlyVisible;
- (void)setMatchToPresentChat:(id)fp8;
- (id)matchToPresentChat;
- (void)setAnimationDisabled:(BOOL)fp8;
- (BOOL)isAnimationDisabled;
- (void)setShouldPromptForRatingAfterReturningFromChat:(BOOL)fp8;
- (BOOL)shouldPromptForRatingAfterReturningFromChat;
- (void)setProfileTransitioningDelegate:(id)fp8;
- (id)profileTransitioningDelegate;
- (void)setProfilePreviewForRequest:(id)fp8;
- (id)profilePreviewForRequest;
- (void)setMatchToPresentFromSearch:(id)fp8;
- (id)matchToPresentFromSearch;
- (void)setUserImageToPresentFromSearch:(id)fp8;
- (id)userImageToPresentFromSearch;
- (void)setIndexPathToFollow:(id)fp8;
- (id)indexPathToFollow;
- (void)setFollowAlertView:(id)fp8;
- (id)followAlertView;
- (void)setSelectedMatches:(id)fp8;
- (id)selectedMatches;
- (void)setToolbar:(id)fp8;
- (id)toolbar;
- (void)setSearchBarBackground:(id)fp8;
- (id)searchBarBackground;
- (void)setSearchBarContainer:(id)fp8;
- (id)searchBarContainer;
- (void)setNoMatchesSearchResultsView:(id)fp8;
- (void)setMatchesUpdatingView:(id)fp8;
- (void)setNoMatchesWithMessagesView:(id)fp8;
- (void)setNoMatchesView:(id)fp8;
- (void)setPresentingChat:(BOOL)fp8;
- (BOOL)isPresentingChat;
- (void)setReturningFromChat:(BOOL)fp8;
- (BOOL)isReturningFromChat;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setInSearchMode:(BOOL)fp8;
- (BOOL)isInSearchMode;
- (void)setTableView:(id)fp8;
- (id)tableView;
- (void).cxx_destruct;
- (void)transitionTo:(id)fp8 optionsDict:(id)fp12 animated:(BOOL)fp16 completion:(id)fp(null);
- (void)updateChatBadgeInNavBar;
- (void)finishedUpdatingMatchLikes:(id)fp8;
- (void)applicationDidEnterBackground:(id)fp8;
- (void)applicationWillEnterForeground:(id)fp8;
- (void)addObservers;
- (float)normalizedOffsetFor:(id)fp8;
- (void)scrollViewDidScroll:(id)fp8;
- (void)scrollViewDidEndDragging:(id)fp8 willDecelerate:(BOOL)fp12;
- (void)scrollViewWillEndDragging:(id)fp8 withVelocity:(struct CGPoint)fp12 targetContentOffset:(inout struct CGPoint *)fp20;
- (void)scrollViewWillBeginDragging:(id)fp8;
- (id)interactionControllerForDismissal:(id)fp8;
- (id)animationControllerForDismissedController:(id)fp8;
- (id)animationControllerForPresentedController:(id)fp8 presentingController:(id)fp12 sourceController:(id)fp16;
- (void)requestDismissReportDialogReportSucceeded;
- (void)requestDismissReportDialogCancelled;
- (void)didRequestToMarkRead:(id)fp8;
- (void)didRequestToMessageUser;
- (id)blockMatchManager;
- (void)didRequestToUnmatch:(id)fp8;
- (void)didRequestToReport:(id)fp8;
- (void)previewingContext:(id)fp8 commitViewController:(id)fp12;
- (id)previewingContext:(id)fp8 viewControllerForLocation:(struct CGPoint)fp12;
- (void)didTapProfileDoneButton;
- (void)scrollToTopIfNeeded:(id)fp8;
- (void)enableAnimationsIfNeeded;
- (void)disableAnimationsIfNeeded;
- (void)didTapChatCloseButton;
- (void)didBlockUser;
- (void)adjustTableViewForNoMatches:(BOOL)fp8;
- (void)adjustSubviewsForNoMatchesWithMessages;
- (void)logNoMatchesErrorIfNecessary:(BOOL)fp8;
- (void)adjustSubviewsForNoMatches:(BOOL)fp8;
- (void)updateMatchesViewsAfterContentUpdate;
- (void)controllerDidChangeContent:(id)fp8;
- (void)controller:(id)fp8 didChangeObject:(id)fp12 atIndexPath:(id)fp16 forChangeType:(unsigned int)fp20 newIndexPath:(id)fp24;
- (void)controller:(id)fp8 didChangeSection:(id)fp12 atIndex:(unsigned int)fp16 forChangeType:(unsigned int)fp20;
- (void)controllerWillChangeContent:(id)fp8;
- (BOOL)isActivePanelView;
- (void)presentChatForMatch:(id)fp8 withAvatarImage:(id)fp12;
- (void)presentProfileForMatch:(id)fp8 withAvatarImage:(id)fp12;
- (void)didTapDiscoverButton;
- (void)didUpdateNewMatchesContent;
- (void)didSelectNewMatchCell:(id)fp8 atIndexPath:(id)fp12;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (void)adjustTableViewInsetsForSearching:(BOOL)fp8 reset:(BOOL)fp12;
- (void)adjustTableHeaderForSearching:(BOOL)fp8;
- (void)adjustFramesForSearching:(BOOL)fp8 animated:(BOOL)fp12 reset:(BOOL)fp16;
- (void)animateSearchContainerForSearching:(BOOL)fp8 animated:(BOOL)fp12;
- (void)enableSearching:(BOOL)fp8 animated:(BOOL)fp12 resetInsets:(BOOL)fp16;
- (struct CGRect)searchOnlyTableHeaderFrame;
- (struct CGRect)defaultTableHeaderFrame;
- (void)enableCancelButton:(id)fp8;
- (void)setSearchBarEnabled:(BOOL)fp8;
- (void)searchBarSearchButtonClicked:(id)fp8;
- (void)performSearchOnMatchesWithText:(id)fp8;
- (void)searchBarCancelButtonClicked:(id)fp8;
- (void)searchBar:(id)fp8 textDidChange:(id)fp12;
- (void)searchBarTextDidEndEditing:(id)fp8;
- (void)searchBarTextDidBeginEditing:(id)fp8;
- (void)handleNewMatchNotification:(id)fp8;
- (void)handleDidClearUserInformationNotification:(id)fp8;
- (void)handleApplicationWillTerminateNotification:(id)fp8;
- (void)keyboardWillHide:(id)fp8;
- (void)keyboardWillShow:(id)fp8;
- (void)registerNotifications;
- (id)noMatchesWithMessagesView;
- (id)matchesUpdatingView;
- (id)noMatchesSearchResultsView;
- (id)noMatchesView;
- (void)handleOverlayTap:(id)fp8;
- (void)hideSearchOverlayAnimated:(BOOL)fp8;
- (void)showSearchOverlayAnimated:(BOOL)fp8;
- (BOOL)match:(id)fp8 isIn:(id)fp12;
- (void)updateListImageInNavBar;
- (float)topOffsetIncludeMomentsHeader:(BOOL)fp8;
- (struct CGRect)frameForTableView;
- (struct CGRect)searchBarFrame:(BOOL)fp8;
- (int)preferredStatusBarStyle;
- (void)hideSearchBarIfNecessary;
- (void)notifySlidingVCToShowNavbarSeparator;
- (void)adjustSubviewsForMatchesPresence;
- (void)handleUpdateDoneNotification:(id)fp8;
- (void)handleUserLogoutNotification:(id)fp8;
- (void)handleUserAuthenticatedNotification:(id)fp8;
- (void)handleDidAuthenticateNotification:(id)fp8;
- (BOOL)hasNewMatchesButNoMatchesWithMessages;
- (BOOL)hasMatchesWithMessages;
- (BOOL)hasNewMatches;
- (BOOL)hasMatches;
- (id)dictionaryForMatchSearchForText:(id)fp8;
- (id)dictionaryForMatchesAnalytics;
- (void)adjustMatchesHeaderView;
- (void)adjustNewMatchesViewSearching:(BOOL)fp8;
- (void)adjustNoMatchesWithMessages;
- (void)adjustHeaderItemsVisibilityForSearching:(BOOL)fp8;
- (void)adjustHeaderItemsVisibility;
- (void)setupHeaderViewItems;
- (void)setupNewMatchesHeaderView;
- (void)setupMatchesHeaderView;
- (void)setupTableHeaderView;
- (void)setupMatchesData;
- (void)setupUnreadMessagesTracking:(BOOL)fp8;
- (void)setupObserversAndFlagsForNoMatches;
- (void)setupSearchOverlay;
- (void)setup3DTouchCapablePreviewing;
- (void)setupTableView;
- (void)updateSearchBarState;
- (void)setupPlaceholderText;
- (void)setupSearchBarTextField;
- (void)setupSearchBar;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (void)dealloc;

@end

