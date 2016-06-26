/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSString;

@interface TTTOrdinalNumberFormatter : _ABCreateStringWithAddressDictionary
{
    NSString *_ordinalIndicator;
    unsigned int _grammaticalGender;
    unsigned int _grammaticalNumber;
}

- (void)setGrammaticalNumber:(unsigned int)fp8;
- (unsigned int)grammaticalNumber;
- (void)setGrammaticalGender:(unsigned int)fp8;
- (unsigned int)grammaticalGender;
- (void)setOrdinalIndicator:(id)fp8;
- (id)ordinalIndicator;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (BOOL)getObjectValue:(out id *)fp8 forString:(id)fp12 errorDescription:(out id *)fp16;
- (id)stringForObjectValue:(id)fp8;
- (id)zhHansOrdinalIndicatorStringFromNumber:(id)fp8;
- (id)ptOrdinalIndicatorStringFromNumber:(id)fp8;
- (id)nlOrdinalIndicatorStringFromNumber:(id)fp8;
- (id)jaOrdinalIndicatorStringFromNumber:(id)fp8;
- (id)itOrdinalIndicatorStringFromNumber:(id)fp8;
- (id)gaOrdinalIndicatorStringFromNumber:(id)fp8;
- (id)frOrdinalIndicatorStringFromNumber:(id)fp8;
- (id)esOrdinalIndicatorStringFromNumber:(id)fp8;
- (id)enOrdinalIndicatorStringFromNumber:(id)fp8;
- (id)deOrdinalIndicatorStringFromNumber:(id)fp8;
- (id)caOrdinalIndicatorStringFromNumber:(id)fp8;
- (id)localizedOrdinalIndicatorStringFromNumber:(id)fp8;
- (id)init;

@end
