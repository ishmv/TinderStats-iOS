/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "TNDRURLNavigableProtocol-Protocol.h"

@class NSString, UITextView;

@interface TNDROSSLicenseDetailVC : _ABCreateStringWithAddressDictionary <TNDRURLNavigableProtocol>
{
    UITextView *_textView;
    NSString *_licenseTitle;
    NSString *_licenseText;
}

+ (id)viewControllerNavigationKey;
- (id)licenseText;
- (id)licenseTitle;
- (void)setTextView:(id)fp8;
- (id)textView;
- (void).cxx_destruct;
- (void)setLicenseText:(id)fp8;
- (void)setLicenseTitle:(id)fp8;
- (void)setupConstraints;
- (void)viewDidLoad;

@end

