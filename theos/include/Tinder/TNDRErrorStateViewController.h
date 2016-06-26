/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class UIColor, UIImageView, UILabel;

@interface TNDRErrorStateViewController : _ABCreateStringWithAddressDictionary
{
    UIColor *_defaultWhiteBGColor;
    UIColor *_locationErrorColor;
    BOOL _isTallScreen;
    int _errorType;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIImageView *_errorImageView;
}

- (void)setErrorImageView:(id)fp8;
- (id)errorImageView;
- (void)setDescriptionLabel:(id)fp8;
- (id)descriptionLabel;
- (void)setTitleLabel:(id)fp8;
- (id)titleLabel;
- (int)errorType;
- (void).cxx_destruct;
- (void)layoutSubframes;
- (void)setErrorType:(int)fp8;
- (void)setup;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (id)init;

@end
