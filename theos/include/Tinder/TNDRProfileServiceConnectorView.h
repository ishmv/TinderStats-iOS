/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSLayoutConstraint, NSString, TTTAttributedLabel, UIButton, UIView;

@interface TNDRProfileServiceConnectorView : _ABCreateStringWithAddressDictionary
{
    NSString *_title;
    NSString *_disconnectedDescription;
    NSString *_connectedDescription;
    UIButton *_connectorButton;
    UIButton *_disconnectButton;
    unsigned int _connectorState;
    id <TNDRProfileServiceConnectorViewDelegate> _delegate;
    TTTAttributedLabel *_titleLabel;
    UIView *_buttonContainerView;
    NSLayoutConstraint *_disconnectButtonLeftConstraint;
    float _disconnectButtonWidth;
}

- (float)disconnectButtonWidth;
- (void)setDisconnectButtonLeftConstraint:(id)fp8;
- (id)disconnectButtonLeftConstraint;
- (void)setButtonContainerView:(id)fp8;
- (id)buttonContainerView;
- (void)setTitleLabel:(id)fp8;
- (id)titleLabel;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (unsigned int)connectorState;
- (void)setDisconnectButton:(id)fp8;
- (id)disconnectButton;
- (void)setConnectorButton:(id)fp8;
- (id)connectorButton;
- (id)connectedDescription;
- (id)disconnectedDescription;
- (id)title;
- (void).cxx_destruct;
- (void)animateConstraintChanges;
- (void)handleTapInDisconnectButton:(id)fp8;
- (void)handleTapInConnectorButton:(id)fp8;
- (void)setConnectorState:(unsigned int)fp8;
- (void)setDisconnectedDescription:(id)fp8;
- (void)setConnectedDescription:(id)fp8;
- (void)setTitle:(id)fp8;
- (id)disconnectButtonText;
- (id)disconnectedText;
- (id)connectedText;
- (id)titleText;
- (id)serviceConnectorFont;
- (id)serviceTitleFont;
- (struct CGSize)intrinsicContentSize;
- (void)configureView;
- (id)initWithFrame:(struct CGRect)fp8;

@end

