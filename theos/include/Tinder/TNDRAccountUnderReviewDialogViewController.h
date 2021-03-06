/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "TNDRDialogViewController.h"

#import "TNDRAccountWarningDialog-Protocol.h"

@interface TNDRAccountUnderReviewDialogViewController : TNDRDialogViewController <TNDRAccountWarningDialog>
{
    BOOL _sendAnalyticsForThisAppSession;
}

+ (id)viewControllerNavigationKey;
- (void)setSendAnalyticsForThisAppSession:(BOOL)fp8;
- (BOOL)didSendAnalyticsForThisAppSession;
- (unsigned int)dialogPriority;
- (int)warningType;
- (void)handleUserLoggedOutAndCleared:(id)fp8;
- (void)handleLogoutButtonTap;
- (void)setupFooter;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;

@end

