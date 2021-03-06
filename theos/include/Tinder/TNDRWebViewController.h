/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "UIWebViewDelegate-Protocol.h"

@class NSURL, UIActivityIndicatorView, UINavigationBar, UIWebView;

@interface TNDRWebViewController : _ABCreateStringWithAddressDictionary <UIWebViewDelegate>
{
    NSURL *_url;
    UIWebView *_webView;
    UINavigationBar *_navigationBar;
    float _topOffset;
    UIActivityIndicatorView *_spinner;
    BOOL _isModal;
    id _delegate;
}

- (void)setNavigationBar:(id)fp8;
- (id)navigationBar;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (void)doneButtonTapped;
- (void)webViewDidFinishLoad:(id)fp8;
- (void)webView:(id)fp8 didFailLoadWithError:(id)fp12;
- (void)showURL;
- (void)setupWebView;
- (void)setupNavBar;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithURL:(id)fp8;

@end

