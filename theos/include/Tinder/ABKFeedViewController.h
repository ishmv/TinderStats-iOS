/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "ABKCardActionDelegate-Protocol.h"
#import "SKStoreProductViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ABKSpinnerView, NSMutableArray, NSMutableSet, UILabel, UITableView, UIView;

@interface ABKFeedViewController : _ABCreateStringWithAddressDictionary <ABKCardActionDelegate, UITableViewDataSource, UITableViewDelegate, SKStoreProductViewControllerDelegate>
{
    BOOL _disableUnreadIndicator;
    BOOL _viewIsDisplaying;
    float _cardWidthForiPhone;
    float _cardWidthForiPad;
    float _minimumCardMarginForiPhone;
    float _minimumCardMarginForiPad;
    id <ABKFeedViewControllerDelegate> _appboyDelegate;
    unsigned int _categories;
    NSMutableArray *_currentViewModels;
    NSMutableSet *_viewedFeedItems;
    float _itemVerticalSpacing;
    UITableView *_tableView;
    ABKSpinnerView *_activityIndicatorView;
    UILabel *_emptyFeedLabel;
    UIView *_noConnectionView;
    NSMutableArray *_loadedCards;
    id _refreshControl;
}

- (void)setRefreshControl:(id)fp8;
- (id)refreshControl;
- (void)setViewIsDisplaying:(BOOL)fp8;
- (BOOL)viewIsDisplaying;
- (void)setLoadedCards:(id)fp8;
- (id)loadedCards;
- (void)setNoConnectionView:(id)fp8;
- (id)noConnectionView;
- (void)setEmptyFeedLabel:(id)fp8;
- (id)emptyFeedLabel;
- (void)setActivityIndicatorView:(id)fp8;
- (id)activityIndicatorView;
- (void)setTableView:(id)fp8;
- (id)tableView;
- (void)setItemVerticalSpacing:(float)fp8;
- (float)itemVerticalSpacing;
- (void)setViewedFeedItems:(id)fp8;
- (id)viewedFeedItems;
- (void)setCurrentViewModels:(id)fp8;
- (id)currentViewModels;
- (BOOL)disableUnreadIndicator;
- (unsigned int)categories;
- (void)setAppboyDelegate:(id)fp8;
- (id)appboyDelegate;
- (void)setMinimumCardMarginForiPad:(float)fp8;
- (float)minimumCardMarginForiPad;
- (void)setMinimumCardMarginForiPhone:(float)fp8;
- (float)minimumCardMarginForiPhone;
- (void)setCardWidthForiPad:(float)fp8;
- (float)cardWidthForiPad;
- (void)setCardWidthForiPhone:(float)fp8;
- (float)cardWidthForiPhone;
- (void).cxx_destruct;
- (void)loadSpinnerAndNoConnectionView;
- (void)viewDidUnload;
- (void)dealloc;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (BOOL)productViewControllerSupported;
- (void)productViewControllerDidFinish:(id)fp8;
- (void)openItunesStoreProduct:(id)fp8;
- (void)openURLInWebView:(id)fp8;
- (void)tableView:(id)fp8 didEndDisplayingCell:(id)fp12 forRowAtIndexPath:(id)fp16;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (id)getCellForViewModel:(id)fp8;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)prepareToDisplayCards:(id)fp8;
- (void)feedUpdatedForDisplay:(id)fp8;
- (void)downloadCardsImagesIfNotCached:(id)fp8;
- (void)resetViewTrackingOfCards;
- (void)tableView:(id)fp8 willDisplayCell:(id)fp12 forRowAtIndexPath:(id)fp16;
- (void)receiveWillEnterForeground:(id)fp8;
- (void)viewDidDisappear:(BOOL)fp8;
- (float)calculateCardWidth;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)moveScrollIndicatorToRightSide;
- (void)resizeTableView;
- (void)viewDidLayoutSubviews;
- (void)setCategories:(unsigned int)fp8;
- (void)updateCardImageRatio:(id)fp8;
- (void)setDisableUnreadIndicator:(BOOL)fp8;
- (void)viewDidLoad;
- (void)refreshFeed;
- (void)loadView;
- (void)setup;
- (id)init;
- (id)initWithCoder:(id)fp8;

@end

