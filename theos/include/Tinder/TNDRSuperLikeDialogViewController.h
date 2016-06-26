/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "TNDRDialogViewController.h"

#import "TNDRButtonViewSwappingOverlayAnimationControllerDestinationViewController-Protocol.h"

@class NSAttributedString, NSString, UIImage;

@interface TNDRSuperLikeDialogViewController : TNDRDialogViewController <TNDRButtonViewSwappingOverlayAnimationControllerDestinationViewController>
{
    BOOL _marketingEnabled;
    NSAttributedString *_titleText;
    NSAttributedString *_detailText;
    NSString *_confirmationString;
    NSString *_cancelString;
    NSAttributedString *_marketingText;
    UIImage *_marketingImage;
    unsigned int _footerType;
}

- (void)setFooterType:(unsigned int)fp8;
- (unsigned int)footerType;
- (void)setMarketingEnabled:(BOOL)fp8;
- (BOOL)isMarketingEnabled;
- (id)marketingImage;
- (id)marketingText;
- (id)cancelString;
- (id)confirmationString;
- (id)detailText;
- (id)titleText;
- (void).cxx_destruct;
- (float)preferredDialogViewControllerContainerWidth;
- (id)outerContainerView;
- (id)animationController;
- (void)didTapCancelButton:(id)fp8;
- (void)didTapConfirmationButton:(id)fp8;
- (void)viewDidLoad;
- (id)marketingBanner;
- (id)constellationBanner;

@end

