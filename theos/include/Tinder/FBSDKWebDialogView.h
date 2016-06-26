/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "UIWebViewDelegate-Protocol.h"

@class UIActivityIndicatorView, UIButton, UIWebView;

@interface FBSDKWebDialogView : _ABCreateStringWithAddressDictionary <UIWebViewDelegate>
{
    UIButton *_closeButton;
    UIActivityIndicatorView *_loadingView;
    UIWebView *_webView;
    id <FBSDKWebDialogViewDelegate> _delegate;
}

- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (void)webViewDidFinishLoad:(id)fp8;
- (BOOL)webView:(id)fp8 shouldStartLoadWithRequest:(id)fp12 navigationType:(int)fp16;
- (void)webView:(id)fp8 didFailLoadWithError:(id)fp12;
- (void)_close:(id)fp8;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)fp8;
- (void)stopLoading;
- (void)loadURL:(id)fp8;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;

@end

