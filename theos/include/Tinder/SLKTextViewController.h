/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "SLKTextViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, SLKTextInputbar, UICollectionView, UIGestureRecognizer, UIPanGestureRecognizer, UIScrollView, UITableView, UIView, UIView<SLKTypingIndicatorProtocol>;

@interface SLKTextViewController : _ABCreateStringWithAddressDictionary <SLKTextViewDelegate, UITableViewDelegate, UITableViewDataSource, UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate, UIAlertViewDelegate>
{
    struct CGPoint _scrollViewOffsetBeforeDragging;
    float _keyboardHeightBeforeDragging;
    BOOL _autoCompleting;
    BOOL _presentedInPopover;
    BOOL _bounces;
    BOOL _shakeToClearEnabled;
    BOOL _keyboardPanningEnabled;
    BOOL _externalKeyboardDetected;
    BOOL _keyboardUndocked;
    BOOL _shouldClearTextAtRightButtonPress;
    BOOL _shouldScrollToBottomAfterKeyboardShows;
    BOOL _inverted;
    BOOL _textInputbarHidden;
    BOOL _editing;
    BOOL _movingKeyboard;
    BOOL _viewVisible;
    BOOL _transitioning;
    UITableView *_tableView;
    UICollectionView *_collectionView;
    UIScrollView *_scrollView;
    UIView<SLKTypingIndicatorProtocol> *_typingIndicatorProxyView;
    SLKTextInputbar *_textInputbar;
    UITableView *_autoCompletionView;
    UIScrollView *_scrollViewProxy;
    UIGestureRecognizer *_singleTapGesture;
    UIPanGestureRecognizer *_verticalPanGesture;
    NSString *_foundPrefix;
    NSString *_foundWord;
    NSArray *_registeredPrefixes;
    UIView *_autoCompletionHairline;
    NSLayoutConstraint *_scrollViewHC;
    NSLayoutConstraint *_textInputbarHC;
    NSLayoutConstraint *_typingIndicatorViewHC;
    NSLayoutConstraint *_autoCompletionViewHC;
    NSLayoutConstraint *_keyboardHC;
    unsigned int _keyboardStatus;
    Class _textViewClass;
    Class _typingIndicatorViewClass;
    Class _textInputbarClass;
    struct _NSRange _foundPrefixRange;
}

+ (void)clearAllCachedText;
+ (id)collectionViewLayoutForCoder:(id)fp8;
+ (int)tableViewStyleForCoder:(id)fp8;
- (void)setTextInputbarClass:(Class)fp8;
- (Class)textInputbarClass;
- (void)setTypingIndicatorViewClass:(Class)fp8;
- (Class)typingIndicatorViewClass;
- (void)setTextViewClass:(Class)fp8;
- (Class)textViewClass;
- (void)setTransitioning:(BOOL)fp8;
- (BOOL)isTransitioning;
- (void)setViewVisible:(BOOL)fp8;
- (BOOL)isViewVisible;
- (void)setKeyboardStatus:(unsigned int)fp8;
- (unsigned int)keyboardStatus;
- (void)setMovingKeyboard:(BOOL)fp8;
- (BOOL)isMovingKeyboard;
- (void)setKeyboardHC:(id)fp8;
- (id)keyboardHC;
- (void)setAutoCompletionViewHC:(id)fp8;
- (id)autoCompletionViewHC;
- (void)setTypingIndicatorViewHC:(id)fp8;
- (id)typingIndicatorViewHC;
- (void)setTextInputbarHC:(id)fp8;
- (id)textInputbarHC;
- (void)setScrollViewHC:(id)fp8;
- (id)scrollViewHC;
- (void)setAutoCompletionHairline:(id)fp8;
- (id)autoCompletionHairline;
- (id)registeredPrefixes;
- (id)foundWord;
- (struct _NSRange)foundPrefixRange;
- (id)foundPrefix;
- (BOOL)isEditing;
- (BOOL)isTextInputbarHidden;
- (BOOL)isInverted;
- (void)setShouldScrollToBottomAfterKeyboardShows:(BOOL)fp8;
- (BOOL)shouldScrollToBottomAfterKeyboardShows;
- (void)setShouldClearTextAtRightButtonPress:(BOOL)fp8;
- (BOOL)shouldClearTextAtRightButtonPress;
- (BOOL)isKeyboardUndocked;
- (BOOL)isExternalKeyboardDetected;
- (void)setKeyboardPanningEnabled:(BOOL)fp8;
- (BOOL)isKeyboardPanningEnabled;
- (void)setShakeToClearEnabled:(BOOL)fp8;
- (BOOL)shakeToClearEnabled;
- (void)setBounces:(BOOL)fp8;
- (BOOL)bounces;
- (id)verticalPanGesture;
- (id)singleTapGesture;
- (void)setPresentedInPopover:(BOOL)fp8;
- (id)scrollViewProxy;
- (BOOL)isAutoCompleting;
- (id)scrollView;
- (id)collectionView;
- (id)tableView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (BOOL)shouldAutorotate;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize)fp8 withTransitionCoordinator:(id)fp16;
- (void)willTransitionToTraitCollection:(id)fp8 withTransitionCoordinator:(id)fp12;
- (void)slk_unregisterNotifications;
- (void)slk_registerNotifications;
- (id)slk_arrowKeyCommand:(id)fp8;
- (id)slk_escKeyCommand;
- (id)slk_returnKeyCommand;
- (id)keyCommands;
- (void)slk_updateViewConstraints;
- (void)slk_setupViewConstraints;
- (void)alertView:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (BOOL)gestureRecognizerShouldBegin:(id)fp8;
- (void)scrollViewDidScroll:(id)fp8;
- (void)scrollViewDidEndDecelerating:(id)fp8;
- (void)scrollViewDidEndDragging:(id)fp8 willDecelerate:(BOOL)fp12;
- (BOOL)scrollViewShouldScrollToTop:(id)fp8;
- (id)collectionView:(id)fp8 cellForItemAtIndexPath:(id)fp12;
- (int)collectionView:(id)fp8 numberOfItemsInSection:(int)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (BOOL)textView:(id)fp8 shouldInsertSuffixForFormattingWithSymbol:(id)fp12 prefixRange:(struct _NSRange)fp16;
- (BOOL)textView:(id)fp8 shouldOfferFormattingForSymbol:(id)fp12;
- (void)textViewDidEndEditing:(id)fp8;
- (void)textViewDidBeginEditing:(id)fp8;
- (BOOL)textViewShouldEndEditing:(id)fp8;
- (BOOL)textViewShouldBeginEditing:(id)fp8;
- (void)textViewDidChangeSelection:(id)fp8;
- (void)textViewDidChange:(id)fp8;
- (BOOL)textView:(id)fp8 shouldChangeTextInRange:(struct _NSRange)fp12 replacementText:(id)fp20;
- (BOOL)shouldHideAutoCompletionViewOnKeyboardHide;
- (void)registerClassForTextInputbar:(Class)fp8;
- (void)registerClassForTypingIndicatorView:(Class)fp8;
- (void)registerClassForTextView:(Class)fp8;
- (void)slk_cacheTextToDisk:(id)fp8;
- (void)clearCachedText;
- (void)slk_cacheTextView;
- (void)slk_reloadTextView;
- (id)slk_keyForPersistency;
- (id)keyForTextCaching;
- (void)slk_hideAutoCompletionViewIfNeeded;
- (void)slk_invalidateAutoCompletion;
- (void)slk_handleProcessedWord:(id)fp8 range:(struct _NSRange)fp12;
- (void)slk_processTextForAutoCompletion;
- (void)cancelAutoCompletion;
- (void)acceptAutoCompletionWithString:(id)fp8 keepPrefix:(BOOL)fp12;
- (void)acceptAutoCompletionWithString:(id)fp8;
- (void)showAutoCompletionView:(BOOL)fp8;
- (BOOL)canShowAutoCompletion;
- (void)didChangeAutoCompletionPrefix:(id)fp8 andWord:(id)fp12;
- (void)registerPrefixesForAutoCompletion:(id)fp8;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (void)slk_willTerminateApplication:(id)fp8;
- (void)slk_willShowOrHideTypeIndicatorView:(id)fp8;
- (void)slk_didShakeTextView:(id)fp8;
- (void)slk_didChangeTextViewPasteboard:(id)fp8;
- (void)slk_didChangeTextViewSelectedRange:(id)fp8;
- (void)slk_didChangeTextViewContentSize:(id)fp8;
- (void)slk_didChangeTextViewText:(id)fp8;
- (void)slk_willChangeTextViewText:(id)fp8;
- (void)slk_didPostSLKKeyboardNotification:(id)fp8;
- (void)slk_didShowOrHideKeyboard:(id)fp8;
- (void)slk_willShowOrHideKeyboard:(id)fp8;
- (void)didPressArrowKey:(id)fp8;
- (void)didPressEscapeKey:(id)fp8;
- (void)didPressReturnKey:(id)fp8;
- (void)slk_prepareForInterfaceTransitionWithDuration:(double)fp8;
- (void)slk_adjustContentConfigurationIfNeeded;
- (void)slk_detectKeyboardStatesInNotification:(id)fp8;
- (void)slk_dismissTextInputbarIfNeeded;
- (void)slk_enableTypingSuggestionIfNeeded;
- (void)slk_postKeyboarStatusNotification:(id)fp8;
- (void)slk_performRightAction;
- (void)slk_didPanTextView:(id)fp8;
- (void)slk_didTapScrollView:(id)fp8;
- (void)slk_handlePanGestureRecognizer:(id)fp8;
- (void)slk_didPanTextInputBar:(id)fp8;
- (struct CGRect)keyboardPanningZoneFrame;
- (void)setTextInputbarHidden:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setTextInputbarHidden:(BOOL)fp8;
- (void)willRequestUndo;
- (void)didPasteMediaContent:(id)fp8;
- (float)maximumHeightForAutoCompletionView;
- (float)heightForAutoCompletionView;
- (BOOL)canShowTypingIndicator;
- (void)didCancelTextEditing:(id)fp8;
- (void)didCommitTextEditing:(id)fp8;
- (void)editText:(id)fp8;
- (void)didPressRightButton:(id)fp8;
- (void)didPressLeftButton:(id)fp8;
- (BOOL)canPressRightButton;
- (void)textSelectionDidChange;
- (void)textDidUpdate:(BOOL)fp8;
- (void)textWillUpdate;
- (void)didChangeKeyboardStatus:(unsigned int)fp8;
- (BOOL)ignoreTextInputbarAdjustment;
- (BOOL)forceTextInputbarAdjustmentForResponder:(id)fp8;
- (void)dismissKeyboard:(BOOL)fp8;
- (void)presentKeyboard:(BOOL)fp8;
- (BOOL)slk_updateKeyboardStatus:(unsigned int)fp8;
- (void)setInverted:(BOOL)fp8;
- (void)setAutoCompleting:(BOOL)fp8;
- (void)setScrollViewProxy:(id)fp8;
- (void)setEdgesForExtendedLayout:(unsigned int)fp8;
- (BOOL)slk_isIllogicalKeyboardStatus:(unsigned int)fp8;
- (unsigned int)slk_keyboardStatusForNotification:(id)fp8;
- (id)slk_appropriateKeyboardNotificationName:(id)fp8;
- (float)slk_topBarsHeight;
- (float)slk_appropriateScrollViewHeight;
- (float)slk_appropriateBottomMargin;
- (float)slk_appropriateKeyboardHeightFromRect:(struct CGRect)fp8;
- (float)slk_appropriateKeyboardHeightFromNotification:(id)fp8;
- (int)modalPresentationStyle;
- (id)rightButton;
- (id)leftButton;
- (id)textView;
- (BOOL)isPresentedInPopover;
- (id)typingIndicatorView;
- (id)typingIndicatorProxyView;
- (id)textInputbar;
- (id)autoCompletionView;
- (id)collectionViewWithLayout:(id)fp8;
- (id)tableViewWithStyle:(int)fp8;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (void)loadView;
- (void)slk_commonInit;
- (id)initWithCoder:(id)fp8;
- (id)initWithScrollView:(id)fp8;
- (id)initWithCollectionViewLayout:(id)fp8;
- (id)initWithTableViewStyle:(int)fp8;
- (id)init;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end

