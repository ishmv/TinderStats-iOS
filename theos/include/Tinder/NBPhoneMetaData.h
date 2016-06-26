/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NBPhoneNumberDesc, NSMutableArray, NSNumber, NSString;

@interface NBPhoneMetaData : _ABCreateStringWithAddressDictionary
{
    BOOL _sameMobileAndFixedLinePattern;
    BOOL _mainCountryForCode;
    BOOL _leadingZeroPossible;
    NBPhoneNumberDesc *_generalDesc;
    NBPhoneNumberDesc *_fixedLine;
    NBPhoneNumberDesc *_mobile;
    NBPhoneNumberDesc *_tollFree;
    NBPhoneNumberDesc *_premiumRate;
    NBPhoneNumberDesc *_sharedCost;
    NBPhoneNumberDesc *_personalNumber;
    NBPhoneNumberDesc *_voip;
    NBPhoneNumberDesc *_pager;
    NBPhoneNumberDesc *_uan;
    NBPhoneNumberDesc *_emergency;
    NBPhoneNumberDesc *_voicemail;
    NBPhoneNumberDesc *_noInternationalDialling;
    NSString *_codeID;
    NSNumber *_countryCode;
    NSString *_internationalPrefix;
    NSString *_preferredInternationalPrefix;
    NSString *_nationalPrefix;
    NSString *_preferredExtnPrefix;
    NSString *_nationalPrefixForParsing;
    NSString *_nationalPrefixTransformRule;
    NSMutableArray *_numberFormats;
    NSMutableArray *_intlNumberFormats;
    NSString *_leadingDigits;
}

- (void)setLeadingZeroPossible:(BOOL)fp8;
- (BOOL)leadingZeroPossible;
- (void)setLeadingDigits:(id)fp8;
- (id)leadingDigits;
- (void)setMainCountryForCode:(BOOL)fp8;
- (BOOL)mainCountryForCode;
- (void)setIntlNumberFormats:(id)fp8;
- (id)intlNumberFormats;
- (void)setNumberFormats:(id)fp8;
- (id)numberFormats;
- (void)setSameMobileAndFixedLinePattern:(BOOL)fp8;
- (BOOL)sameMobileAndFixedLinePattern;
- (void)setNationalPrefixTransformRule:(id)fp8;
- (id)nationalPrefixTransformRule;
- (void)setNationalPrefixForParsing:(id)fp8;
- (id)nationalPrefixForParsing;
- (void)setPreferredExtnPrefix:(id)fp8;
- (id)preferredExtnPrefix;
- (void)setNationalPrefix:(id)fp8;
- (id)nationalPrefix;
- (void)setPreferredInternationalPrefix:(id)fp8;
- (id)preferredInternationalPrefix;
- (void)setInternationalPrefix:(id)fp8;
- (id)internationalPrefix;
- (void)setCountryCode:(id)fp8;
- (id)countryCode;
- (void)setCodeID:(id)fp8;
- (id)codeID;
- (void)setNoInternationalDialling:(id)fp8;
- (id)noInternationalDialling;
- (void)setVoicemail:(id)fp8;
- (id)voicemail;
- (void)setEmergency:(id)fp8;
- (id)emergency;
- (void)setUan:(id)fp8;
- (id)uan;
- (void)setPager:(id)fp8;
- (id)pager;
- (void)setVoip:(id)fp8;
- (id)voip;
- (void)setPersonalNumber:(id)fp8;
- (id)personalNumber;
- (void)setSharedCost:(id)fp8;
- (id)sharedCost;
- (void)setPremiumRate:(id)fp8;
- (id)premiumRate;
- (void)setTollFree:(id)fp8;
- (id)tollFree;
- (void)setMobile:(id)fp8;
- (id)mobile;
- (void)setFixedLine:(id)fp8;
- (id)fixedLine;
- (void)setGeneralDesc:(id)fp8;
- (id)generalDesc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)description;
- (id)init;

@end

