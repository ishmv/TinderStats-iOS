/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "TNDRSubscriptionPaywallViewControllerDelegate-Protocol.h"

@class NSIndexPath, TNDRTinderPlusRecsBlendSelectViewModel;

@interface TNDRTinderPlusRecsBlendSelectTableViewController : _ABCreateStringWithAddressDictionary <TNDRSubscriptionPaywallViewControllerDelegate>
{
    id <TNDRTinderPlusBlendSelectTableViewControllerDelegate><TNDRTinderPlusFeaturePurchaseTableViewControllerDelegate> _delegate;
    NSIndexPath *_selectedIndexPath;
    TNDRTinderPlusRecsBlendSelectViewModel *_featureDataSource;
}

- (void)setFeatureDataSource:(id)fp8;
- (id)featureDataSource;
- (void)setSelectedIndexPath:(id)fp8;
- (id)selectedIndexPath;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)updateTableViewAndReloadData;
- (void)didCompletePurchase;
- (void)paywallRequestsDismissal;
- (float)tableView:(id)fp8 heightForHeaderInSection:(int)fp12;
- (void)notifyDelegateOfBlendSelectionChange:(int)fp8 didFinishSelection:(BOOL)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (BOOL)tableView:(id)fp8 shouldHighlightRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (id)tableView:(id)fp8 titleForHeaderInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (id)tableView:(id)fp8 viewForHeaderInSection:(int)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (id)checkMark;
- (void)handleTinderPlusSubscriptionDeactivation:(id)fp8;
- (void)handleTinderPlusSubscriptionActivation:(id)fp8;
- (void)dealloc;
- (void)registerForNotifications;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (id)init;

@end
