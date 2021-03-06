/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "TNDRActionSheetDelegate-Protocol.h"

@class TNDRActionSheet, UIImageView, UIViewController;

@interface TNDRSupportContacter : _ABCreateStringWithAddressDictionary <MFMailComposeViewControllerDelegate, TNDRActionSheetDelegate>
{
    UIViewController *_viewController;
    TNDRActionSheet *_actionSheet;
    UIImageView *_blurredBackgroundView;
    int _mailSendType;
}

- (void)setMailSendType:(int)fp8;
- (int)mailSendType;
- (void)setBlurredBackgroundView:(id)fp8;
- (id)blurredBackgroundView;
- (void)setActionSheet:(id)fp8;
- (id)actionSheet;
- (void)setViewController:(id)fp8;
- (id)viewController;
- (void).cxx_destruct;
- (void)makeBlurredBackground:(id)fp8;
- (void)partner;
- (void)makeSuggestion;
- (void)report;
- (id)defaultEmailBody;
- (void)trackMailSentEvent;
- (void)mailComposeController:(id)fp8 didFinishWithResult:(int)fp12 error:(id)fp16;
- (void)actionSheet:(id)fp8 triggeredButtonWithId:(int)fp12;
- (void)show;
- (void)showContactUsOnView:(id)fp8;
- (id)initWithViewControllerToPresentOn:(id)fp8;

@end

