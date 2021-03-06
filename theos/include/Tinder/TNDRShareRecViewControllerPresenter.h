/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class UIViewController;

@interface TNDRShareRecViewControllerPresenter : _ABCreateStringWithAddressDictionary
{
    UIViewController *_presentingViewController;
    id <TNDRShareRecViewControllerPresenterDelegate> _delegate;
}

- (id)delegate;
- (id)presentingViewController;
- (void).cxx_destruct;
- (void)handleSharingResponseWithActivityType:(id)fp8 completion:(BOOL)fp12;
- (void)shareLinkViaServices:(id)fp8;
- (void)requestShareLinkForUser:(id)fp8 from:(unsigned int)fp12 cleanupBlock:(id)fp(null);
- (id)initWithPresentingViewController:(id)fp8 user:(id)fp12 from:(unsigned int)fp16 delegate:(id)fp20 cleanupBlock:(id)fp(null);

@end

