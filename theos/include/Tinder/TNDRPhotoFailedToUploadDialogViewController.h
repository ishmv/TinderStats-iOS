/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "TNDRDialogViewController.h"

@class NSString, UIView;

@interface TNDRPhotoFailedToUploadDialogViewController : TNDRDialogViewController
{
    NSString *_confirmationString;
    UIView *_opaqueBackgroundView;
}

- (void)setOpaqueBackgroundView:(id)fp8;
- (id)opaqueBackgroundView;
- (id)confirmationString;
- (void).cxx_destruct;
- (float)preferredDialogViewControllerContainerWidth;
- (void)didTapCancelButton:(id)fp8;
- (void)didTapConfirmationButton:(id)fp8;
- (void)viewDidLayoutSubviews;
- (void)setOpaqueContent:(BOOL)fp8;
- (void)viewDidLoad;
- (id)detailText;
- (id)titleText;

@end
