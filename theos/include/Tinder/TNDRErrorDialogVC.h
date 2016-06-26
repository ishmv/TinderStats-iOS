/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "TNDRDialogViewController.h"

@class NSString, UIView;

@interface TNDRErrorDialogVC : TNDRDialogViewController
{
    BOOL _isOwner;
    NSString *_titleText;
    NSString *_detailText;
    UIView *_opaqueBackgroundView;
}

+ (id)viewControllerNavigationKey;
- (void)setIsOwner:(BOOL)fp8;
- (BOOL)isOwner;
- (void)setOpaqueBackgroundView:(id)fp8;
- (id)opaqueBackgroundView;
- (void)setDetailText:(id)fp8;
- (id)detailText;
- (void)setTitleText:(id)fp8;
- (id)titleText;
- (void).cxx_destruct;
- (void)didTapConfirmationButton:(id)fp8;
- (void)viewDidLayoutSubviews;
- (void)setOpaqueContent:(BOOL)fp8;
- (void)viewDidLoad;
- (id)initWithTitleText:(id)fp8 detailText:(id)fp12 delegate:(id)fp16;
- (id)attributedDetailText;
- (id)attributedTitleText;

@end
