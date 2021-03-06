/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSArray, NSLayoutConstraint, SLKInputAccessoryView, SLKTextView, SLKTextViewController, UIButton, UIColor, UILabel, UIView;

@interface SLKTextInputbar : _ABCreateStringWithAddressDictionary
{
    BOOL _autoHideRightButton;
    BOOL _editing;
    SLKTextViewController *_controller;
    SLKTextView *_textView;
    SLKInputAccessoryView *_inputAccessoryView;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UIView *_editorContentView;
    UILabel *_editorTitle;
    UIButton *_editorLeftButton;
    UIButton *_editorRightButton;
    float _editorContentViewHeight;
    unsigned int _maxCharCount;
    unsigned int _counterStyle;
    unsigned int _counterPosition;
    UIColor *_charCountLabelNormalColor;
    UIColor *_charCountLabelWarningColor;
    NSLayoutConstraint *_leftButtonWC;
    NSLayoutConstraint *_leftButtonHC;
    NSLayoutConstraint *_leftMarginWC;
    NSLayoutConstraint *_bottomMarginWC;
    NSLayoutConstraint *_rightButtonWC;
    NSLayoutConstraint *_rightMarginWC;
    NSLayoutConstraint *_rightButtonTopMarginC;
    NSLayoutConstraint *_rightButtonBottomMarginC;
    NSLayoutConstraint *_editorContentViewHC;
    NSArray *_charCountLabelVCs;
    UILabel *_charCountLabel;
    Class _textViewClass;
    struct CGPoint _previousOrigin;
    struct UIEdgeInsets _contentInset;
}

+ (BOOL)requiresConstraintBasedLayout;
- (void)setTextViewClass:(Class)fp8;
- (Class)textViewClass;
- (void)setPreviousOrigin:(struct CGPoint)fp8;
- (struct CGPoint)previousOrigin;
- (void)setCharCountLabel:(id)fp8;
- (void)setCharCountLabelVCs:(id)fp8;
- (id)charCountLabelVCs;
- (void)setEditorContentViewHC:(id)fp8;
- (id)editorContentViewHC;
- (void)setRightButtonBottomMarginC:(id)fp8;
- (id)rightButtonBottomMarginC;
- (void)setRightButtonTopMarginC:(id)fp8;
- (id)rightButtonTopMarginC;
- (void)setRightMarginWC:(id)fp8;
- (id)rightMarginWC;
- (void)setRightButtonWC:(id)fp8;
- (id)rightButtonWC;
- (void)setBottomMarginWC:(id)fp8;
- (id)bottomMarginWC;
- (void)setLeftMarginWC:(id)fp8;
- (id)leftMarginWC;
- (void)setLeftButtonHC:(id)fp8;
- (id)leftButtonHC;
- (void)setLeftButtonWC:(id)fp8;
- (id)leftButtonWC;
- (void)setCharCountLabelWarningColor:(id)fp8;
- (id)charCountLabelWarningColor;
- (void)setCharCountLabelNormalColor:(id)fp8;
- (id)charCountLabelNormalColor;
- (unsigned int)counterPosition;
- (void)setCounterStyle:(unsigned int)fp8;
- (unsigned int)counterStyle;
- (void)setMaxCharCount:(unsigned int)fp8;
- (unsigned int)maxCharCount;
- (BOOL)isEditing;
- (void)setEditorContentViewHeight:(float)fp8;
- (float)editorContentViewHeight;
- (void)setEditorRightButton:(id)fp8;
- (void)setEditorLeftButton:(id)fp8;
- (void)setEditorTitle:(id)fp8;
- (void)setEditorContentView:(id)fp8;
- (struct UIEdgeInsets)contentInset;
- (BOOL)autoHideRightButton;
- (void)setRightButton:(id)fp8;
- (void)setLeftButton:(id)fp8;
- (void)setInputAccessoryView:(id)fp8;
- (void)setTextView:(id)fp8;
- (void)setController:(id)fp8;
- (id)controller;
- (void).cxx_destruct;
- (void)dealloc;
- (void)slk_unregisterNotifications;
- (void)slk_registerNotifications;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (void)slk_unregisterFrom:(id)fp8 forSelector:(SEL)fp12;
- (void)slk_registerTo:(id)fp8 forSelector:(SEL)fp12;
- (void)slk_updateConstraintConstants;
- (void)slk_setupViewConstraints;
- (void)slk_didChangeContentSizeCategory:(id)fp8;
- (void)slk_didChangeTextViewContentSize:(id)fp8;
- (void)slk_didChangeTextViewText:(id)fp8;
- (void)slk_updateCounter;
- (void)endTextEdition;
- (void)beginTextEditing;
- (BOOL)canEditText:(id)fp8;
- (void)setCounterPosition:(unsigned int)fp8;
- (void)setEditing:(BOOL)fp8;
- (void)setContentInset:(struct UIEdgeInsets)fp8;
- (void)setAutoHideRightButton:(BOOL)fp8;
- (void)setBackgroundColor:(id)fp8;
- (unsigned int)slk_defaultNumberOfLines;
- (float)slk_appropriateRightButtonMargin;
- (float)slk_appropriateRightButtonWidth;
- (BOOL)limitExceeded;
- (float)slk_inputBarHeightForLines:(unsigned int)fp8;
- (float)appropriateHeight;
- (float)minimumInputbarHeight;
- (id)charCountLabel;
- (id)editorRightButton;
- (id)editorLeftButton;
- (id)editorTitle;
- (id)editorContentView;
- (id)rightButton;
- (id)leftButton;
- (id)inputAccessoryView;
- (id)textView;
- (struct CGSize)intrinsicContentSize;
- (void)layoutIfNeeded;
- (void)slk_commonInit;
- (id)initWithCoder:(id)fp8;
- (id)init;
- (id)initWithTextViewClass:(Class)fp8;

@end

