/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "RMStoreObserver-Protocol.h"

@class MBProgressHUD, NSString, TNDRPassportPaywallViewModel;

@interface TNDRPaywallManager : _ABCreateStringWithAddressDictionary <RMStoreObserver>
{
    BOOL _attemptingPurchase;
    BOOL _attemptingRestoreBeforePurchase;
    BOOL _attemptToRestoreBeforePurchaseFailed;
    BOOL _attemptingRestore;
    BOOL _purchaseBelongsToAnotherUser;
    BOOL _waitingForLocationUpdate;
    BOOL _showingUserAlert;
    BOOL _isNewPaywallStyle;
    id <TNDRPaywallManagerDelegate> _delegate;
    TNDRPassportPaywallViewModel *_paywallViewModel;
    unsigned int _currentPaywallType;
    unsigned int _paywallOrigin;
    NSString *_currentSelectedProductIdentifier;
    NSString *_otherID;
    NSString *_offerTitle;
    MBProgressHUD *_statusHUD;
}

+ (id)sharedPaywallManager;
- (void)setStatusHUD:(id)fp8;
- (id)statusHUD;
- (void)setIsNewPaywallStyle:(BOOL)fp8;
- (BOOL)isNewPaywallStyle;
- (void)setOfferTitle:(id)fp8;
- (id)offerTitle;
- (void)setOtherID:(id)fp8;
- (id)otherID;
- (void)setCurrentSelectedProductIdentifier:(id)fp8;
- (id)currentSelectedProductIdentifier;
- (void)setPaywallOrigin:(unsigned int)fp8;
- (unsigned int)paywallOrigin;
- (void)setCurrentPaywallType:(unsigned int)fp8;
- (unsigned int)currentPaywallType;
- (void)setPaywallViewModel:(id)fp8;
- (id)paywallViewModel;
- (void)setShowingUserAlert:(BOOL)fp8;
- (BOOL)isShowingUserAlert;
- (void)setWaitingForLocationUpdate:(BOOL)fp8;
- (BOOL)isWaitingForLocationUpdate;
- (void)setPurchaseBelongsToAnotherUser:(BOOL)fp8;
- (BOOL)doesPurchaseBelongToAnotherUser;
- (void)setAttemptingRestore:(BOOL)fp8;
- (BOOL)isAttemptingRestore;
- (void)setAttemptToRestoreBeforePurchaseFailed:(BOOL)fp8;
- (BOOL)didAttemptToRestoreBeforePurchaseFail;
- (void)setAttemptingRestoreBeforePurchase:(BOOL)fp8;
- (BOOL)isAttemptingRestoreBeforePurchase;
- (void)setAttemptingPurchase:(BOOL)fp8;
- (BOOL)isAttemptingPurchase;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (void)tinderStoreRestoreCompletedWithNoTransactions:(id)fp8;
- (void)handleTinderPlusActivationSuccess;
- (void)showPurchaseFailedAlert;
- (void)showServerValidationErrorAfterPurchaseAttemptAlert:(id)fp8;
- (void)handleServerValidationPurchaseRequestErrors:(id)fp8;
- (void)showRestoreNoActivePurchasesSuggestUnlockAlert;
- (void)showRestoreFailedAlert;
- (void)showServerValidationErrorAfterRestoreAttemptAlert:(id)fp8;
- (void)handleStoreKitPurchaseError:(id)fp8;
- (void)handlePurchaseAttemptFailure:(id)fp8;
- (void)handleRestoreAttemptFailure:(id)fp8;
- (void)setupPaywallRestoreState;
- (void)attemptMakingPurchaseAfterInitialRestore;
- (void)handleRestoreFlowAfterLocationUpdateFails;
- (void)handleRestoreBeforePurchasingFlowAfterLocationUpdateFails;
- (void)attemptRestoreAfterLocationUpdate;
- (void)attemptRestoreBeforePurchasingAfterLocationUpdate;
- (void)performRestoreAction;
- (void)setupPaywallPurchaseState:(id)fp8;
- (void)verifyReceiptIfUnfinishedConsumablesInStoreKitTransactionQueue;
- (BOOL)finishTransactionsIfConsumableAlreadyInUse:(id)fp8 consumables:(id)fp12;
- (void)redeemReceiptIfUnfinishedConsumableTransactionsExist:(id)fp(null);
- (void)performPurchaseAction;
- (void)requestRestoreFrom:(unsigned int)fp8 encounteredFrom:(unsigned int)fp12 delegate:(id)fp16;
- (void)requestPurchaseFrom:(unsigned int)fp8 productIdentifier:(id)fp12 encounteredFrom:(unsigned int)fp16 otherID:(id)fp20 delegate:(id)fp24 plusMenuOffer:(id)fp28 isNewPaywall:(BOOL)fp32;
- (void)requestPurchaseFrom:(unsigned int)fp8 productIdentifier:(id)fp12 encounteredFrom:(unsigned int)fp16 delegate:(id)fp20 plusMenuOffer:(id)fp24 isNewPaywall:(BOOL)fp28;
- (BOOL)isPerformingPurchaseRelatedAction;
- (void)unregisterNotifications;
- (void)registerNotifications;
- (void)hideAllHUDs;
- (void)showHUDWithTitle:(id)fp8;
- (id)windowForHUD;
- (id)init;

@end
