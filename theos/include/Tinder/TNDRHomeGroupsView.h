/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSArray, NSLayoutConstraint, NSString, NSTimer, TNDRAnimatedPromptTextField, TNDRAvatarLinearView, TNDRHomeActionBar, TNDRHomeExpirationLabel, UILabel;

@interface TNDRHomeGroupsView : _ABCreateStringWithAddressDictionary
{
    int _homeGroupsState;
    id <TNDRHomeGroupsViewDelegate><TNDRAnimatedPromptDelgate> _delegate;
    TNDRAvatarLinearView *_avatarLinearView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    TNDRHomeActionBar *_actionBar;
    TNDRHomeExpirationLabel *_expirationLabel;
    TNDRAnimatedPromptTextField *_animatedPromptTextField;
    NSString *_createGroupTitle;
    NSString *_leaveGroupTitle;
    NSString *_extendGroupTitle;
    NSString *_disbandGroupTitle;
    NSString *_createNewGroupTitle;
    NSString *_groupExpiredTitle;
    NSString *_initialGroupsTitle;
    NSString *_initialGroupsDescription;
    NSArray *_groupMembers;
    NSLayoutConstraint *_actionBarBottomPinConstraint;
    NSLayoutConstraint *_actionBarHeightConstraint;
    NSArray *_actionBarHorizPinConstraints;
    NSTimer *_groupExpiryTimer;
}

+ (BOOL)requiresConstraintBasedLayout;
- (void)setGroupExpiryTimer:(id)fp8;
- (id)groupExpiryTimer;
- (void)setActionBarHorizPinConstraints:(id)fp8;
- (id)actionBarHorizPinConstraints;
- (void)setActionBarHeightConstraint:(id)fp8;
- (id)actionBarHeightConstraint;
- (void)setActionBarBottomPinConstraint:(id)fp8;
- (id)actionBarBottomPinConstraint;
- (void)setGroupMembers:(id)fp8;
- (id)groupMembers;
- (void)setInitialGroupsDescription:(id)fp8;
- (id)initialGroupsDescription;
- (void)setInitialGroupsTitle:(id)fp8;
- (id)initialGroupsTitle;
- (void)setGroupExpiredTitle:(id)fp8;
- (id)groupExpiredTitle;
- (void)setCreateNewGroupTitle:(id)fp8;
- (id)createNewGroupTitle;
- (void)setDisbandGroupTitle:(id)fp8;
- (id)disbandGroupTitle;
- (void)setExtendGroupTitle:(id)fp8;
- (id)extendGroupTitle;
- (void)setLeaveGroupTitle:(id)fp8;
- (id)leaveGroupTitle;
- (void)setCreateGroupTitle:(id)fp8;
- (id)createGroupTitle;
- (void)setAnimatedPromptTextField:(id)fp8;
- (id)animatedPromptTextField;
- (void)setExpirationLabel:(id)fp8;
- (id)expirationLabel;
- (void)setActionBar:(id)fp8;
- (id)actionBar;
- (void)setDescriptionLabel:(id)fp8;
- (id)descriptionLabel;
- (void)setTitleLabel:(id)fp8;
- (id)titleLabel;
- (void)setAvatarLinearView:(id)fp8;
- (id)avatarLinearView;
- (id)delegate;
- (int)homeGroupsState;
- (void).cxx_destruct;
- (float)infoFontSize;
- (float)titleFontSize;
- (float)fontMultiplier;
- (id)metricsForAutoLayout;
- (float)maxLabelWidth;
- (id)viewsForAutoLayout;
- (void)updateViewsForGroupMembers:(id)fp8 title:(id)fp12 isExpired:(BOOL)fp16;
- (void)updateViewsForGroupMembers:(id)fp8 title:(id)fp12 expirationDate:(id)fp16 groupStatus:(id)fp20;
- (id)createGroupAction;
- (id)leaveGroupAction;
- (id)extendGroupAction;
- (id)disbandGroupAction;
- (void)focusOnTextView;
- (void)setDelegate:(id)fp8;
- (BOOL)pointInsideStatusField:(struct CGPoint)fp8;
- (float)heightOfActionBar;
- (void)updateActionBarForPillMode:(BOOL)fp8;
- (void)setHomeGroupsState:(int)fp8;
- (void)updateWithNewUserData:(id)fp8;
- (void)setupAnimatedPromptTextFieldConstraints;
- (id)actionBarHorizPinConstraintsForPill:(BOOL)fp8;
- (id)actionBarHeightConstraintForPercentage:(float)fp8;
- (void)setupActionBarConstraints;
- (void)setupExpirationLabelConstraints;
- (void)setupDescriptionLabelConstraints;
- (void)setupTitleLabelConstraints;
- (void)setupAvatarLinearViewConstraints;
- (void)setupConstraints;
- (void)setupActionBar;
- (void)setupAnimatedPromptTextField;
- (void)setupLabels;
- (void)setupAvatarLinearView;
- (void)setupStrings;
- (void)setup;
- (id)init;

@end

