/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "TNDRDialogViewControllerPriority-Protocol.h"
#import "TNDRURLNavigableProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class NSLayoutConstraint, NSMutableArray, UIColor, UIImageView, UITableView, UITapGestureRecognizer, UIView;

@interface TNDRDialogViewController : _ABCreateStringWithAddressDictionary <UITableViewDataSource, TNDRURLNavigableProtocol, TNDRDialogViewControllerPriority, UIGestureRecognizerDelegate>
{
    BOOL _adjustLayerAnchorPointForAnimation;
    BOOL _showAnchorArrow;
    BOOL _opaqueContent;
    BOOL _tapShouldDismiss;
    BOOL _shouldAnimateBeforeDismiss;
    UIView *_headerView;
    UIView *_footerView;
    int _contentPosition;
    float _contentToAnchorOffset;
    UIColor *_anchorArrowColor;
    UIView *_backgroundOverlay;
    UIView *_containerView;
    UIView *_dialogContentsView;
    UITableView *_tableView;
    id <TNDRDialogViewControllerDelegate> _delegate;
    float _numberOfRowsToDisplay;
    UIImageView *_arrowAccessoryView;
    UITapGestureRecognizer *_dismissOnTapGestureRecognizer;
    NSMutableArray *_dialogContentsViewConstraints;
    NSMutableArray *_bottomAcessoryViewConstraints;
    NSLayoutConstraint *_containerCenterYOffsetConstraint;
    NSLayoutConstraint *_anchorContainerPositioningConstraint;
    NSLayoutConstraint *_arrowCenterXConstraint;
    struct CGPoint _anchorPoint;
}

+ (id)viewControllerNavigationKey;
- (void)setArrowCenterXConstraint:(id)fp8;
- (id)arrowCenterXConstraint;
- (void)setAnchorContainerPositioningConstraint:(id)fp8;
- (id)anchorContainerPositioningConstraint;
- (void)setContainerCenterYOffsetConstraint:(id)fp8;
- (id)containerCenterYOffsetConstraint;
- (void)setBottomAcessoryViewConstraints:(id)fp8;
- (id)bottomAcessoryViewConstraints;
- (void)setDialogContentsViewConstraints:(id)fp8;
- (id)dialogContentsViewConstraints;
- (void)setDismissOnTapGestureRecognizer:(id)fp8;
- (id)dismissOnTapGestureRecognizer;
- (void)setArrowAccessoryView:(id)fp8;
- (id)arrowAccessoryView;
- (void)setShouldAnimateBeforeDismiss:(BOOL)fp8;
- (BOOL)shouldAnimateBeforeDismiss;
- (float)numberOfRowsToDisplay;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (BOOL)tapShouldDismiss;
- (BOOL)hasOpaqueContent;
- (void)setTableView:(id)fp8;
- (id)tableView;
- (void)setDialogContentsView:(id)fp8;
- (id)dialogContentsView;
- (void)setContainerView:(id)fp8;
- (id)containerView;
- (void)setBackgroundOverlay:(id)fp8;
- (id)backgroundOverlay;
- (void)setShowAnchorArrow:(BOOL)fp8;
- (BOOL)showAnchorArrow;
- (void)setAdjustLayerAnchorPointForAnimation:(BOOL)fp8;
- (BOOL)adjustLayerAnchorPointForAnimation;
- (id)anchorArrowColor;
- (void)setContentToAnchorOffset:(float)fp8;
- (float)contentToAnchorOffset;
- (void)setContentPosition:(int)fp8;
- (int)contentPosition;
- (void)setAnchorPoint:(struct CGPoint)fp8;
- (struct CGPoint)anchorPoint;
- (id)footerView;
- (id)headerView;
- (void).cxx_destruct;
- (void)handleTapInView:(id)fp8;
- (BOOL)gestureRecognizerShouldBegin:(id)fp8;
- (void)setupGestureRecognizer;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (void)setTapShouldDismiss:(BOOL)fp8;
- (id)animationController;
- (void)setFooterView:(id)fp8;
- (void)setHeaderView:(id)fp8;
- (void)updateArrowAccessoryView;
- (void)requestDismissal;
- (void)adjustArrowCenterXConstraint;
- (void)updateBottomAccessoryViewConstraints;
- (void)updateDialogContentsViewContentsConstraints;
- (void)updateViewConstraints;
- (unsigned int)dialogPriority;
- (void)setNumberOfRowsToDisplay:(float)fp8;
- (void)setOpaqueContent:(BOOL)fp8;
- (void)updateContainerViewLayerAnchorPoint;
- (void)setAnchorArrowColor:(id)fp8;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)fp8;
- (void)setupContainerMarginConstraintWithAnchor:(float)fp8 position:(int)fp12 offset:(float)fp16;
- (void)updateContainerConstraints;
- (void)addConstraints;
- (void)viewDidLoad;
- (float)bottomAccessoryViewXOffset;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;
- (float)preferredDialogViewControllerContainerWidth;

@end

