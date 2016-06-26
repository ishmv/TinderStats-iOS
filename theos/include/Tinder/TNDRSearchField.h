/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSDictionary, UIButton, UITextField, UIView;

@interface TNDRSearchField : _ABCreateStringWithAddressDictionary <UITextFieldDelegate>
{
    UITextField *_textField;
    id <TNDRSearchFieldDelegate> _delegate;
    UIView *_topBorder;
    UIView *_bottomBorder;
    UIButton *_cancelButton;
    UIView *_magnifyingGlassView;
    NSDictionary *_viewsForAutolayout;
}

+ (BOOL)requiresConstraintBasedLayout;
+ (id)border;
- (void)setViewsForAutolayout:(id)fp8;
- (void)setMagnifyingGlassView:(id)fp8;
- (void)setCancelButton:(id)fp8;
- (void)setBottomBorder:(id)fp8;
- (void)setTopBorder:(id)fp8;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setTextField:(id)fp8;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (void)setupConstraints;
- (BOOL)textFieldShouldReturn:(id)fp8;
- (void)textFieldDidEndEditing:(id)fp8;
- (void)textFieldDidBeginEditing:(id)fp8;
- (void)textFieldDidChange:(id)fp8;
- (void)setShowsCancelButton:(BOOL)fp8 animated:(BOOL)fp12;
- (void)didPressCancelButton:(id)fp8;
- (id)viewsForAutolayout;
- (id)bottomBorder;
- (id)topBorder;
- (id)cancelButton;
- (id)magnifyingGlassView;
- (id)textField;
- (void)setup;
- (id)init;

@end

