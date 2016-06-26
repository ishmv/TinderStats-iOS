/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "FBSDKWebDialogViewDelegate-Protocol.h"

@class FBSDKWebDialogView, NSDictionary, NSString, UIView;

@interface FBSDKWebDialog : _ABCreateStringWithAddressDictionary <FBSDKWebDialogViewDelegate>
{
    UIView *_backgroundView;
    FBSDKWebDialogView *_dialogView;
    BOOL _deferVisibility;
    id <FBSDKWebDialogDelegate> _delegate;
    NSString *_name;
    NSDictionary *_parameters;
}

+ (id)showWithName:(id)fp8 parameters:(id)fp12 delegate:(id)fp16;
- (void)setParameters:(id)fp8;
- (id)parameters;
- (void)setName:(id)fp8;
- (id)name;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setDeferVisibility:(BOOL)fp8;
- (BOOL)deferVisibility;
- (void).cxx_destruct;
- (void)_updateViewsWithScale:(float)fp8 alpha:(float)fp12 animationDuration:(double)fp16 completion:(id)fp(null);
- (struct CGRect)_applicationFrameForOrientation;
- (struct CGAffineTransform)_transformForOrientation;
- (BOOL)_showWebView;
- (id)_generateURL:(id *)fp8;
- (id)_findWindow;
- (void)_failWithError:(id)fp8;
- (void)_dismissAnimated:(BOOL)fp8;
- (void)_completeWithResults:(id)fp8;
- (void)_cancel;
- (void)_removeObservers;
- (void)_deviceOrientationDidChangeNotification:(id)fp8;
- (void)_addObservers;
- (void)webDialogViewDidFinishLoad:(id)fp8;
- (void)webDialogViewDidCancel:(id)fp8;
- (void)webDialogView:(id)fp8 didFailWithError:(id)fp12;
- (void)webDialogView:(id)fp8 didCompleteWithResults:(id)fp12;
- (BOOL)show;
- (void)dealloc;

@end
