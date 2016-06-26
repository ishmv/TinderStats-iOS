/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "TNDRDialogViewControllerDelegate-Protocol.h"
#import "TNDRInstagramLoginWebViewControllerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSDictionary, NSSet, NSURL, TNDRAccountUnderReviewDialogViewController, TNDRAccountWarningDialogViewController, TNDRInstagramLoginWebViewController, TNDRSubscriptionPaywallViewController, TNDRSuperLikePackagesPaywallVC, TNDRWebURLViewController, UIViewController, UIViewController<TNDRURLNavigableProtocol>;

@interface TNDRURLManager : _ABCreateStringWithAddressDictionary <UIViewControllerTransitioningDelegate, TNDRDialogViewControllerDelegate, TNDRInstagramLoginWebViewControllerDelegate>
{
    BOOL _avoidPushFromBase;
    BOOL _currentlyNavigating;
    BOOL _externallyNavigating;
    NSURL *_currentURL;
    UIViewController *_sourceViewController;
    UIViewController *_destinationViewController;
    TNDRAccountUnderReviewDialogViewController *_accountUnderReviewDialogViewController;
    TNDRAccountWarningDialogViewController *_accountReportedWarningDialogViewController;
    TNDRInstagramLoginWebViewController *_instagramWebLogin;
    NSURL *_baseURL;
    NSDictionary *_viewControllerKeys;
    NSSet *_viewControllerBaseKeys;
    NSSet *_viewControllersToNotNavigateAwayFrom;
    NSDictionary *_viewControllerOptions;
    NSSet *_viewControllersPresentedByBase;
    UIViewController<TNDRURLNavigableProtocol> *_baseSlidingViewController;
    UIViewController<TNDRURLNavigableProtocol> *_transitionToViewController;
    TNDRSubscriptionPaywallViewController *_paywallViewController;
    TNDRSuperLikePackagesPaywallVC *_superLikePaywallVC;
    TNDRWebURLViewController *_webURLViewController;
    unsigned int _instagramAccountAnalyticsFrom;
}

+ (id)sharedManager;
+ (void)setSharedInstance:(id)fp8;
- (void)setExternallyNavigating:(BOOL)fp8;
- (BOOL)isExternallyNavigating;
- (BOOL)isCurrentlyNavigating;
- (void)setAvoidPushFromBase:(BOOL)fp8;
- (BOOL)shouldAvoidPushFromBase;
- (void)setInstagramAccountAnalyticsFrom:(unsigned int)fp8;
- (unsigned int)instagramAccountAnalyticsFrom;
- (void)setWebURLViewController:(id)fp8;
- (id)webURLViewController;
- (void)setSuperLikePaywallVC:(id)fp8;
- (id)superLikePaywallVC;
- (void)setPaywallViewController:(id)fp8;
- (id)paywallViewController;
- (void)setTransitionToViewController:(id)fp8;
- (id)transitionToViewController;
- (void)setBaseSlidingViewController:(id)fp8;
- (id)baseSlidingViewController;
- (void)setViewControllersPresentedByBase:(id)fp8;
- (id)viewControllersPresentedByBase;
- (void)setViewControllerOptions:(id)fp8;
- (id)viewControllerOptions;
- (void)setViewControllersToNotNavigateAwayFrom:(id)fp8;
- (id)viewControllersToNotNavigateAwayFrom;
- (void)setViewControllerBaseKeys:(id)fp8;
- (id)viewControllerBaseKeys;
- (void)setViewControllerKeys:(id)fp8;
- (id)viewControllerKeys;
- (void)setBaseURL:(id)fp8;
- (id)baseURL;
- (id)instagramWebLogin;
- (id)accountReportedWarningDialogViewController;
- (id)accountUnderReviewDialogViewController;
- (void)setDestinationViewController:(id)fp8;
- (id)destinationViewController;
- (void)setSourceViewController:(id)fp8;
- (id)sourceViewController;
- (id)currentURL;
- (void).cxx_destruct;
- (void)dialogViewControllerRequestsDismissal:(id)fp8 completion:(id)fp(null);
- (id)animationControllerForDismissedController:(id)fp8;
- (id)animationControllerForPresentedController:(id)fp8 presentingController:(id)fp12 sourceController:(id)fp16;
- (void)dismissInstagramLoginView;
- (void)didCancelInstagramLogin;
- (void)didCompleteLoginWithAccessCode:(id)fp8;
- (void)didFailLoginWithMessage:(id)fp8;
- (void)requestUserName;
- (void)showInstagramWebLogin;
- (void)requestInstagramLogin:(unsigned int)fp8;
- (void)handleAccountWarningBannedNotificationWithCompletion:(id)fp(null);
- (void)handleAccountWarningType:(int)fp8 completion:(id)fp(null);
- (void)notifyUserWithAccountChanges:(unsigned int)fp8;
- (void)blockNavigationWithWarningType:(int)fp8 completion:(id)fp(null);
- (void)clearNavigationBlock:(id)fp(null);
- (BOOL)accountBannedWarningInURLString:(id)fp8;
- (BOOL)accountReportingWarningInURLString:(id)fp8;
- (BOOL)isPresentingAccountBannedWarning;
- (BOOL)isPresentingAccountReportedWarning;
- (void)navigateToPaywall:(id)fp8 shownFrom:(unsigned int)fp12 feature:(int)fp16 delegate:(id)fp20 completion:(id)fp(null);
- (void)navigateToPaywallType:(unsigned int)fp8 shownFrom:(unsigned int)fp12 feature:(int)fp16 delegate:(id)fp20 completion:(id)fp(null);
- (id)mergeDictionary:(id)fp8 withValuesFromOtherDictionary:(id)fp12;
- (int)lastIndexOfURL;
- (id)viewControllerOptionsForKey:(id)fp8;
- (void)removeOptionsForLastPresentedViewController:(id)fp8;
- (void)putURLQueryOptions:(id)fp8 forKey:(id)fp12;
- (void)removeViewControllerForKey:(id)fp8;
- (id)currentlyVisibleViewController;
- (id)viewControllerForKey:(id)fp8;
- (void)addViewController:(id)fp8 forKey:(id)fp12;
- (void)didNavigateFromViewController:(id)fp8 toViewController:(id)fp12;
- (void)willNavigateFromViewController:(id)fp8 toViewController:(id)fp12;
- (BOOL)shouldNotNavigateAwayFromCurrentViewController;
- (BOOL)shouldNavigateToBase:(id)fp8;
- (id)queryDictionaryFromString:(id)fp8;
- (BOOL)validateURLString:(id)fp8;
- (id)componentsOfURLString:(id)fp8;
- (id)parseURLComponentsFromStringByStrippingQuery:(id)fp8;
- (id)retrieveNavigationInfoFrom:(id)fp8 to:(id)fp12;
- (void)addToCurrentURLPresentedViewController:(id)fp8;
- (id)removeLastPresentedViewControllerFromCurrentURL;
- (void)addViewControllerKeyToBaseSet:(id)fp8;
- (id)appendToCurrentURL:(id)fp8;
- (void)verifyViewControllerValidity:(id)fp8 andVCKey:(id)fp12;
- (BOOL)areViewControllerOptions:(id)fp8 equalToOptions:(id)fp12;
- (BOOL)hasNavigatedToDescendantOfViewControllerKey:(id)fp8 withOptions:(id)fp12 relative:(BOOL)fp16 completion:(id)fp(null);
- (BOOL)checkIfCanPerformRequestedNavigations;
- (void)_navigateBackToBaseAnimated:(BOOL)fp8 internal:(BOOL)fp12 completion:(id)fp(null);
- (void)detectAndHandleTransitionToSpecialDialogViewController:(id)fp8 nextViewControllerKey:(id)fp12 optionsDict:(id)fp16 animated:(BOOL)fp20 completion:(id)fp(null);
- (BOOL)detectAndHandleSafariViewControllerPresentation:(id)fp8;
- (void)performAppNavigationForComponents:(id)fp8 query:(id)fp12 optionsDict:(id)fp16 animated:(BOOL)fp20 completion:(id)fp(null);
- (void)performAppDismissalThisManyTimes:(int)fp8 animated:(BOOL)fp12 actuallyDismiss:(BOOL)fp16 completion:(id)fp(null);
- (void)performAppDismissalThisManyTimes:(int)fp8 animated:(BOOL)fp12 completion:(id)fp(null);
- (void)performAppNavigationFrom:(id)fp8 to:(id)fp12 withOptions:(id)fp16 animated:(BOOL)fp20 completion:(id)fp(null);
- (void)registerViewControllerKeyToPreventNavigationFrom:(id)fp8;
- (void)registerViewControllerKeyToBePresentedByBase:(id)fp8;
- (void)registerViewController:(id)fp8 withKey:(id)fp12 isSlidingViewBase:(BOOL)fp16;
- (void)registerViewController:(id)fp8 withKey:(id)fp12;
- (void)performOutOfBandTransition:(int)fp8 fromViewController:(id)fp12 toViewController:(id)fp16 relative:(BOOL)fp20;
- (void)didTransitionFromViewController:(id)fp8 toViewController:(id)fp12 relative:(BOOL)fp16 outOfBand:(int)fp20;
- (void)willTransitionFromViewController:(id)fp8 toViewController:(id)fp12;
- (void)didNavigateBack;
- (void)navigateBackToBaseAnimated:(BOOL)fp8 completion:(id)fp(null);
- (void)navigateBackAnimated:(BOOL)fp8 completion:(id)fp(null);
- (void)navigateToURL:(id)fp8 optionsDict:(id)fp12 animated:(BOOL)fp16 relativeToCurrentPath:(BOOL)fp20 completion:(id)fp(null);
- (void)navigateToURL:(id)fp8 animated:(BOOL)fp12 relativeToCurrentPath:(BOOL)fp16 completion:(id)fp(null);
- (void)pushAndNavigateToViewController:(id)fp8 options:(id)fp12 animated:(BOOL)fp16 completion:(id)fp(null);
- (void)pushAndNavigateToViewController:(id)fp8 animated:(BOOL)fp12 completion:(id)fp(null);
- (void)setCurrentlyNavigating:(BOOL)fp8;
- (void)setCurrentURL:(id)fp8;
- (void)setup;
- (id)init;

@end
