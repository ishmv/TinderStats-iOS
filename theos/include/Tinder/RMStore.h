/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "SKPaymentTransactionObserver-Protocol.h"
#import "SKRequestDelegate-Protocol.h"

@class NSMutableDictionary, NSMutableSet, SKReceiptRefreshRequest;

@interface RMStore : _ABCreateStringWithAddressDictionary <SKRequestDelegate, SKPaymentTransactionObserver>
{
    NSMutableDictionary *_addPaymentParameters;
    NSMutableDictionary *_products;
    NSMutableSet *_productsRequestDelegates;
    int _pendingRestoredTransactionsCount;
    BOOL _restoredCompletedTransactionsFinished;
    SKReceiptRefreshRequest *_refreshReceiptRequest;
    id _refreshReceiptFailureBlock;
    id _refreshReceiptSuccessBlock;
    id _restoreTransactionsFailureBlock;
    id _restoreTransactionsSuccessBlock;
    id <RMStoreContentDownloader> _contentDownloader;
    id <RMStoreReceiptVerificator> _receiptVerificator;
    id <RMStoreTransactionPersistor> _transactionPersistor;
}

+ (BOOL)hasPendingDownloadsInTransaction:(id)fp8;
+ (id)localizedPriceOfProduct:(id)fp8;
+ (id)receiptURL;
+ (BOOL)canMakePayments;
+ (id)defaultStore;
- (void)setTransactionPersistor:(id)fp8;
- (id)transactionPersistor;
- (void)setReceiptVerificator:(id)fp8;
- (id)receiptVerificator;
- (void)setContentDownloader:(id)fp8;
- (id)contentDownloader;
- (void).cxx_destruct;
- (void)removeProductsRequestDelegate:(id)fp8;
- (void)postNotificationWithName:(id)fp8 transaction:(id)fp12 userInfoExtras:(id)fp16;
- (void)postNotificationWithName:(id)fp8 download:(id)fp12 userInfoExtras:(id)fp16;
- (void)addProduct:(id)fp8;
- (void)request:(id)fp8 didFailWithError:(id)fp12;
- (void)requestDidFinish:(id)fp8;
- (id)popAddPaymentParametersForIdentifier:(id)fp8;
- (void)notifyRestoreTransactionFinishedIfApplicableAfterTransaction:(id)fp8;
- (void)finishTransaction:(id)fp8 queue:(id)fp12;
- (void)didDownloadSelfHostedContentForTransaction:(id)fp8 queue:(id)fp12;
- (void)didVerifyTransaction:(id)fp8 queue:(id)fp12;
- (void)didDeferTransaction:(id)fp8;
- (void)didRestoreTransaction:(id)fp8 queue:(id)fp12;
- (void)didFailTransaction:(id)fp8 queue:(id)fp12 error:(id)fp16;
- (void)didPurchaseTransaction:(id)fp8 queue:(id)fp12;
- (void)didUpdateDownload:(id)fp8 queue:(id)fp12;
- (void)didPauseDownload:(id)fp8 queue:(id)fp12;
- (void)didFinishDownload:(id)fp8 queue:(id)fp12;
- (void)didFailDownload:(id)fp8 queue:(id)fp12;
- (void)didCancelDownload:(id)fp8 queue:(id)fp12;
- (void)paymentQueue:(id)fp8 updatedDownloads:(id)fp12;
- (void)paymentQueue:(id)fp8 restoreCompletedTransactionsFailedWithError:(id)fp12;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)fp8;
- (void)paymentQueue:(id)fp8 updatedTransactions:(id)fp12;
- (void)addStoreObserver:(id)fp8 selector:(SEL)fp12 notificationName:(id)fp16;
- (void)removeStoreObserver:(id)fp8;
- (void)addStoreObserver:(id)fp8;
- (id)productForIdentifier:(id)fp8;
- (void)refreshReceiptOnSuccess:(id)fp(null) failure:(void)fp8;
- (void)refreshReceipt;
- (void)restoreTransactionsOfUser:(id)fp8 onSuccess:(id)fp(null) failure:(void)fp12;
- (void)restoreTransactionsOnSuccess:(id)fp(null) failure:(void)fp8;
- (void)restoreTransactions;
- (void)requestProducts:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)requestProducts:(id)fp8;
- (void)addPayment:(id)fp8 user:(id)fp12 success:(id)fp(null) failure:(void)fp16;
- (void)addPayment:(id)fp8 success:(id)fp(null) failure:(void)fp12;
- (void)addPayment:(id)fp8;
- (void)dealloc;
- (id)init;

@end
