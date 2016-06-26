/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "TNDRDialogViewController.h"

#import "TNDRDialogViewControllerDelegate-Protocol.h"
#import "TNDROtherReasonDialogDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSArray, NSAttributedString, NSIndexPath, NSString, TNDRMatch, TNDROtherReasonDialogViewController, TNDRReportReasonsViewModel, TNDRUser, TNDRUserReportedDialogViewController;

@interface TNDRReportUserDialogViewController : TNDRDialogViewController <UITableViewDataSource, UITableViewDelegate, UIViewControllerTransitioningDelegate, TNDROtherReasonDialogDelegate, TNDRDialogViewControllerDelegate>
{
    BOOL _waitingForReportResult;
    TNDRUser *_user;
    NSAttributedString *_detailText;
    TNDRReportReasonsViewModel *_reportUserViewModel;
    NSArray *_reportReasons;
    unsigned int _selectedReason;
    NSIndexPath *_selectedIndex;
    NSString *_otherReasonExplanation;
    TNDROtherReasonDialogViewController *_otherReasonDialogViewController;
    TNDRUserReportedDialogViewController *_userReportedDialogViewController;
    TNDRMatch *_match;
    NSString *_reportedUserFirstName;
    NSString *_reportedUserID;
    int _reportFromType;
    id _reportBlock;
    id _completionBlock;
}

+ (id)viewControllerNavigationKey;
- (void)setCompletionBlock:(id)fp(null);
- (id)completionBlock;
- (void)setReportBlock:(id)fp(null);
- (id)reportBlock;
- (void)setReportFromType:(int)fp8;
- (int)reportFromType;
- (id)reportedUserID;
- (id)reportedUserFirstName;
- (void)setMatch:(id)fp8;
- (id)match;
- (BOOL)isWaitingForReportResult;
- (void)setUserReportedDialogViewController:(id)fp8;
- (id)userReportedDialogViewController;
- (void)setOtherReasonDialogViewController:(id)fp8;
- (id)otherReasonDialogViewController;
- (void)setOtherReasonExplanation:(id)fp8;
- (id)otherReasonExplanation;
- (void)setSelectedIndex:(id)fp8;
- (id)selectedIndex;
- (void)setSelectedReason:(unsigned int)fp8;
- (unsigned int)selectedReason;
- (void)setReportReasons:(id)fp8;
- (id)reportReasons;
- (void)setReportUserViewModel:(id)fp8;
- (id)reportUserViewModel;
- (void)setDetailText:(id)fp8;
- (id)detailText;
- (void)setUser:(id)fp8;
- (id)user;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)fp8;
- (id)animationControllerForPresentedController:(id)fp8 presentingController:(id)fp12 sourceController:(id)fp16;
- (void)dialogViewControllerRequestsDismissal:(id)fp8 completion:(id)fp(null);
- (void)reportWithMessage:(id)fp8;
- (void)showOtherReasonDialog;
- (void)clearReportingStatusHUD;
- (void)showReportingStatusHUD;
- (void)requestDismissal;
- (void)requestDismissalOnSuccess;
- (void)sendReport;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (void)showReportFailAlert;
- (void)showUserReportedConfirmation;
- (void)handleReportCompletion:(BOOL)fp8;
- (void)setWaitingForReportResult:(BOOL)fp8;
- (id)localizedStringForIndexPath:(id)fp8;
- (id)disabledImageForIndexPath:(id)fp8;
- (id)highlightedImageForIndexPath:(id)fp8;
- (id)imageForIndexPath:(id)fp8 tintColor:(id)fp12;
- (id)imageForIndexPath:(id)fp8;
- (id)cancelButton;
- (void)handleCancelButtonTap;
- (void)setupReportMatch:(id)fp8 delegate:(id)fp12;
- (void)setupReportUser:(id)fp8 isMatch:(BOOL)fp12 delegate:(id)fp16;
- (void)setupButtons;
- (void)setupTableView;
- (void)setupViews;
- (id)titleText;
- (void)setTitleText:(id)fp8;
- (id)titleTextLabel;
- (id)reportUserTitle;
- (id)analyticsReasonKey;
- (void)viewDidLoad;
- (void)setDelegate:(id)fp8;
- (id)delegate;

@end
