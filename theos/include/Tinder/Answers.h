/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "FABKit-Protocol.h"

@class CLSAnalyticsController;

@interface Answers : _ABCreateStringWithAddressDictionary <FABKit>
{
    CLSAnalyticsController *_analyticsController;
}

+ (void)initializeIfNeeded;
+ (id)kitBuildVersion;
+ (id)kitDisplayVersion;
+ (id)bundleIdentifier;
+ (void)logPredefinedEvent:(id)fp8;
+ (void)logCustomEventWithName:(id)fp8 customAttributes:(id)fp12;
+ (void)logSearchWithQuery:(id)fp8 customAttributes:(id)fp12;
+ (void)logContentViewWithName:(id)fp8 contentType:(id)fp12 contentId:(id)fp16 customAttributes:(id)fp20;
+ (void)logRating:(id)fp8 contentName:(id)fp12 contentType:(id)fp16 contentId:(id)fp20 customAttributes:(id)fp24;
+ (void)logStartCheckoutWithPrice:(id)fp8 currency:(id)fp12 itemCount:(id)fp16 customAttributes:(id)fp20;
+ (void)logAddToCartWithPrice:(id)fp8 currency:(id)fp12 itemName:(id)fp16 itemType:(id)fp20 itemId:(id)fp24 customAttributes:(id)fp28;
+ (void)logLevelEnd:(id)fp8 score:(id)fp12 success:(id)fp16 customAttributes:(id)fp20;
+ (void)logLevelStart:(id)fp8 customAttributes:(id)fp12;
+ (void)logPurchaseWithPrice:(id)fp8 currency:(id)fp12 success:(id)fp16 itemName:(id)fp20 itemType:(id)fp24 itemId:(id)fp28 customAttributes:(id)fp32;
+ (void)logShareWithMethod:(id)fp8 contentName:(id)fp12 contentType:(id)fp16 contentId:(id)fp20 customAttributes:(id)fp24;
+ (void)logLoginWithMethod:(id)fp8 success:(id)fp12 customAttributes:(id)fp16;
+ (void)logSignUpWithMethod:(id)fp8 success:(id)fp12 customAttributes:(id)fp16;
+ (void)logInviteWithMethod:(id)fp8 customAttributes:(id)fp12;
+ (void)logPreviousSessionCrashedOnDate:(id)fp8;
+ (void)startWithBetaToken:(id)fp8;
+ (id)sharedInstance;
- (void)setAnalyticsController:(id)fp8;
- (id)analyticsController;
- (void).cxx_destruct;
- (void)startWithBetaToken:(id)fp8;

@end

