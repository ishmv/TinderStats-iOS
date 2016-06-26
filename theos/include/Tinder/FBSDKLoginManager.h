/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "FBSDKURLOpening-Protocol.h"
#import "FBSDKWebDialogDelegate-Protocol.h"

@class FBSDKKeychainStore, FBSDKLoginManagerLogger, NSSet, UIViewController;

@interface FBSDKLoginManager : _ABCreateStringWithAddressDictionary <FBSDKURLOpening, FBSDKWebDialogDelegate>
{
    id _handler;
    FBSDKLoginManagerLogger *_logger;
    BOOL _performingLogIn;
    FBSDKKeychainStore *_keychainStore;
    unsigned int _defaultAudience;
    unsigned int _loginBehavior;
    UIViewController *_fromViewController;
    NSSet *_requestedPermissions;
}

+ (id)stringForChallenge;
+ (void)renewSystemCredentials:(id)fp(null);
+ (void)initialize;
- (id)requestedPermissions;
- (void)setFromViewController:(id)fp8;
- (id)fromViewController;
- (void)setLoginBehavior:(unsigned int)fp8;
- (unsigned int)loginBehavior;
- (void)setDefaultAudience:(unsigned int)fp8;
- (unsigned int)defaultAudience;
- (void).cxx_destruct;
- (void)setRequestedPermissions:(id)fp8;
- (void)setHandler:(id)fp(null);
- (void)validateReauthentication:(id)fp8 withResult:(id)fp12;
- (void)storeExpectedChallenge:(id)fp8;
- (void)logInWithBehavior:(unsigned int)fp8;
- (void)logInWithPermissions:(id)fp8 handler:(id)fp(null);
- (id)logInParametersWithPermissions:(id)fp8;
- (id)loadExpectedChallenge;
- (void)invokeHandler:(id)fp8 error:(id)fp12;
- (void)determineRecentlyGrantedPermissions:(id *)fp8 recentlyDeclinedPermissions:(id *)fp12 forGrantedPermission:(id)fp16 declinedPermissions:(id)fp20;
- (void)completeAuthentication:(id)fp8 expectChallenge:(BOOL)fp12;
- (void)assertPermissions:(id)fp8;
- (void)logOut;
- (void)logInWithPublishPermissions:(id)fp8 fromViewController:(id)fp12 handler:(id)fp(null);
- (void)logInWithPublishPermissions:(id)fp8 handler:(id)fp(null);
- (void)logInWithReadPermissions:(id)fp8 fromViewController:(id)fp12 handler:(id)fp(null);
- (void)logInWithReadPermissions:(id)fp8 handler:(id)fp(null);
- (id)init;
- (void)handleImplicitCancelOfLogIn;
- (void)applicationDidBecomeActive:(id)fp8;
- (BOOL)application:(id)fp8 openURL:(id)fp12 sourceApplication:(id)fp16 annotation:(id)fp20;
- (void)performBrowserLogInWithParameters:(id)fp8 handler:(id)fp(null);
- (void)performNativeLogInWithParameters:(id)fp8 handler:(id)fp(null);
- (void)fallbackToNativeBehavior;
- (void)continueSystemLogInWithTokenString:(id)fp8 error:(id)fp12 state:(id)fp16;
- (void)performSystemLogIn;
- (void)beginSystemLogIn;
- (void)webDialogDidCancel:(id)fp8;
- (void)webDialog:(id)fp8 didFailWithError:(id)fp12;
- (void)webDialog:(id)fp8 didCompleteWithResults:(id)fp12;
- (void)performWebLogInWithParameters:(id)fp8 handler:(id)fp(null);

@end

