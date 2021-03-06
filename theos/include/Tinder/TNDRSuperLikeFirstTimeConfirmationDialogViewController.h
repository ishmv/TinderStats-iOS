/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "TNDRSuperLikeDialogViewController.h"

@class NSString;

@interface TNDRSuperLikeFirstTimeConfirmationDialogViewController : TNDRSuperLikeDialogViewController
{
    id _introCompletion;
    unsigned int _displayType;
    NSString *_name;
}

+ (id)viewControllerNavigationKey;
- (id)name;
- (unsigned int)displayType;
- (void)setIntroCompletion:(id)fp(null);
- (id)introCompletion;
- (void).cxx_destruct;
- (float)bottomAccessoryViewXOffset;
- (void)requestDismissal;
- (void)didTapCancelButton:(id)fp8;
- (void)didTapConfirmationButton:(id)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (id)cancelString;
- (id)confirmationString;
- (id)marketingText;
- (id)detailText;
- (id)titleText;
- (id)initWithName:(id)fp8 displayType:(unsigned int)fp12;

@end

