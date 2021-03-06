/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "ABKInAppMessageViewController.h"

#import "UIWebViewDelegate-Protocol.h"

@class UIWebView;

@interface ABKInAppMessageHTMLViewController : ABKInAppMessageViewController <UIWebViewDelegate>
{
    UIWebView *_webView;
}

- (void)setWebView:(id)fp8;
- (id)webView;
- (void).cxx_destruct;
- (void)setClickActionBasedOnURL:(id)fp8;
- (id)parseCustomEventPropertiesFromQueryParams:(id)fp8;
- (id)parseCustomEventNameFromQueryParams:(id)fp8;
- (void)handleCustomEventWithQueryParams:(id)fp8;
- (BOOL)isCustomEventUrl:(id)fp8;
- (void)moveInAppMessageViewOnScreen:(struct CGRect)fp8;
- (void)moveInAppMessageViewOffScreen:(struct CGRect)fp8;
- (void)webViewDidFinishLoad:(id)fp8;
- (BOOL)webView:(id)fp8 shouldStartLoadWithRequest:(id)fp12 navigationType:(int)fp16;
- (void)viewDidLoad;

@end

