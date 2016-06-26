/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "TNDRRegionCodePickerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NBAsYouTypeFormatter, NBPhoneNumberUtil, NSString, TNDRNumericTextField, UIButton, UIColor, UIImage, UIImageView, UILabel, UINavigationBar, UINavigationItem, UIView;

@interface TNDRSMSVerificationViewController : _ABCreateStringWithAddressDictionary <UITextFieldDelegate, TNDRRegionCodePickerDelegate, UIAlertViewDelegate>
{
    UIColor *_validColor;
    UIColor *_invalidColor;
    UIImage *_codeRejectedImage;
    UIImage *_codeAcceptedImage;
    UIColor *_codeValidColor;
    UIColor *_codeInvalidColor;
    BOOL _hasSubmitted;
    BOOL _isShortScreen;
    BOOL _presentingFromIntro;
    UINavigationBar *_navigationBar;
    NSString *_currentCountryCode;
    NSString *_currentCountryPrefix;
    NBAsYouTypeFormatter *_phoneNumberFormatter;
    NBPhoneNumberUtil *_sharedPhoneUtil;
    UIView *_phoneNumberScreen;
    UIView *_enterCodeScreen;
    UIView *_verificationCompleteScreen;
    UILabel *_phoneNumberErrorLabel;
    UINavigationItem *_phoneNumberNavItem;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    TNDRNumericTextField *_countryCodeField;
    TNDRNumericTextField *_phoneNumberTextField;
    UIButton *_requestCodeButton;
    UINavigationItem *_codeNavItem;
    UILabel *_codeTitleLabel;
    UILabel *_codeDetailLabel;
    UILabel *_codePrivacyLabel;
    TNDRNumericTextField *_codeTextField;
    UIButton *_resendCodeButton;
    UIButton *_submitCodeButton;
    UIView *_statusContainer;
    UIImageView *_spinner;
    UIImageView *_errorView;
    UILabel *_doneTitleLabel;
    UILabel *_doneDetailLabel;
    UIButton *_startPlayingButton;
    UIView *_visibleScreen;
}

- (void)setVisibleScreen:(id)fp8;
- (id)visibleScreen;
- (void)setStartPlayingButton:(id)fp8;
- (id)startPlayingButton;
- (void)setDoneDetailLabel:(id)fp8;
- (id)doneDetailLabel;
- (void)setDoneTitleLabel:(id)fp8;
- (id)doneTitleLabel;
- (void)setErrorView:(id)fp8;
- (id)errorView;
- (void)setSpinner:(id)fp8;
- (id)spinner;
- (void)setStatusContainer:(id)fp8;
- (id)statusContainer;
- (void)setSubmitCodeButton:(id)fp8;
- (id)submitCodeButton;
- (void)setResendCodeButton:(id)fp8;
- (id)resendCodeButton;
- (void)setCodeTextField:(id)fp8;
- (id)codeTextField;
- (void)setCodePrivacyLabel:(id)fp8;
- (id)codePrivacyLabel;
- (void)setCodeDetailLabel:(id)fp8;
- (id)codeDetailLabel;
- (void)setCodeTitleLabel:(id)fp8;
- (id)codeTitleLabel;
- (void)setCodeNavItem:(id)fp8;
- (id)codeNavItem;
- (void)setRequestCodeButton:(id)fp8;
- (id)requestCodeButton;
- (void)setPhoneNumberTextField:(id)fp8;
- (id)phoneNumberTextField;
- (void)setCountryCodeField:(id)fp8;
- (id)countryCodeField;
- (void)setDetailLabel:(id)fp8;
- (id)detailLabel;
- (void)setTitleLabel:(id)fp8;
- (id)titleLabel;
- (void)setPhoneNumberNavItem:(id)fp8;
- (id)phoneNumberNavItem;
- (void)setPhoneNumberErrorLabel:(id)fp8;
- (id)phoneNumberErrorLabel;
- (void)setVerificationCompleteScreen:(id)fp8;
- (id)verificationCompleteScreen;
- (void)setEnterCodeScreen:(id)fp8;
- (id)enterCodeScreen;
- (void)setPhoneNumberScreen:(id)fp8;
- (id)phoneNumberScreen;
- (void)setSharedPhoneUtil:(id)fp8;
- (id)sharedPhoneUtil;
- (void)setPhoneNumberFormatter:(id)fp8;
- (id)phoneNumberFormatter;
- (void)setCurrentCountryPrefix:(id)fp8;
- (id)currentCountryPrefix;
- (void)setCurrentCountryCode:(id)fp8;
- (id)currentCountryCode;
- (void)setNavigationBar:(id)fp8;
- (id)navigationBar;
- (void)setPresentingFromIntro:(BOOL)fp8;
- (BOOL)isPresentingFromIntro;
- (void).cxx_destruct;
- (void)validatePhoneNumber;
- (BOOL)textFieldShouldReturn:(id)fp8;
- (BOOL)textField:(id)fp8 shouldChangeCharactersInRange:(struct _NSRange)fp12 replacementString:(id)fp20;
- (void)textFieldDidEndEditing:(id)fp8;
- (void)textFieldDidBeginEditing:(id)fp8;
- (void)didChooseRegion:(id)fp8 andRegionCode:(id)fp12;
- (void)alertView:(id)fp8 didDismissWithButtonIndex:(int)fp12;
- (void)showAlertViewRequestSMSCodeFailure;
- (void)requestVerificationOfTokenCompletion:(id)fp(null);
- (void)requestTokenForPhoneNumberCompletion:(id)fp(null);
- (void)handlePlayGameButtonTapped:(id)fp8;
- (void)handleSubmitButtonTapped:(id)fp8;
- (void)handleResendButtonTapped:(id)fp8;
- (void)handleRequestCodeButtonTapped:(id)fp8;
- (void)handleBackToPhoneNumberTapped:(id)fp8;
- (void)handleBackBarItemTapped:(id)fp8;
- (void)showSuccessState;
- (void)showErrorState;
- (void)spinnerSpin:(BOOL)fp8;
- (void)updatePhoneNumberTextFieldFormat;
- (void)updateCountryPrefixForCountryCode;
- (void)updateCountryPrefixForCurrentLocale;
- (void)transitionFromView:(id)fp8 toView:(id)fp12 inDirection:(int)fp16;
- (void)readyCursorForTyping;
- (id)leftBarButtonsWithTitle:(id)fp8 andSelector:(SEL)fp12;
- (void)keyboardWillHide:(id)fp8;
- (void)keyboardWillShow:(id)fp8;
- (void)unregisterNotifications;
- (void)registerNotifications;
- (void)adjustSubviewFrames;
- (void)setupVerificationCompletedScreen;
- (void)setupEnterCodeScreen;
- (void)setupPhoneNumberScreen;
- (void)setupNavigationBar;
- (void)setup;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (id)init;

@end

