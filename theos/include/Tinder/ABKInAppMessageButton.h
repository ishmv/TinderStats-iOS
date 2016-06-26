/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSString, NSURL, UIColor;

@interface ABKInAppMessageButton : _ABCreateStringWithAddressDictionary
{
    NSString *_buttonText;
    UIColor *_buttonBackgroundColor;
    UIColor *_buttonTextColor;
    int _buttonClickActionType;
    NSURL *_buttonClickedURI;
    int _buttonID;
}

- (int)buttonID;
- (id)buttonClickedURI;
- (int)buttonClickActionType;
- (id)buttonTextColor;
- (id)buttonBackgroundColor;
- (id)buttonText;
- (void).cxx_destruct;
- (void)setButtonClickAction:(int)fp8 withURI:(id)fp12;
- (id)proxyForJson;
- (void)setButtonTextColor:(id)fp8;
- (void)setButtonBackgroundColor:(id)fp8;
- (void)setButtonText:(id)fp8;
- (void)setNilValueForKey:(id)fp8;
- (void)setValue:(id)fp8 forUndefinedKey:(id)fp12;
- (void)setValue:(id)fp8 forKey:(id)fp12;
- (void)layoutSubviews;
- (void)setUp;
- (id)initWithCoder:(id)fp8;
- (id)init;
- (id)initWithFrame:(struct CGRect)fp8;

@end

