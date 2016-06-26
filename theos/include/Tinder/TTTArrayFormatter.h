/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSString;

@interface TTTArrayFormatter : _ABCreateStringWithAddressDictionary
{
    BOOL _usesAbbreviatedConjunction;
    BOOL _usesSerialDelimiter;
    unsigned int _arrayStyle;
    NSString *_delimiter;
    NSString *_separator;
    NSString *_conjunction;
    NSString *_abbreviatedConjunction;
}

+ (id)localizedStringFromArray:(id)fp8 arrayStyle:(unsigned int)fp12;
- (void)setUsesSerialDelimiter:(BOOL)fp8;
- (BOOL)usesSerialDelimiter;
- (void)setUsesAbbreviatedConjunction:(BOOL)fp8;
- (BOOL)usesAbbreviatedConjunction;
- (void)setAbbreviatedConjunction:(id)fp8;
- (id)abbreviatedConjunction;
- (void)setConjunction:(id)fp8;
- (id)conjunction;
- (void)setSeparator:(id)fp8;
- (id)separator;
- (void)setDelimiter:(id)fp8;
- (id)delimiter;
- (void)setArrayStyle:(unsigned int)fp8;
- (unsigned int)arrayStyle;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (BOOL)getObjectValue:(out id *)fp8 forString:(id)fp12 errorDescription:(out id *)fp16;
- (id)stringForObjectValue:(id)fp8;
- (id)arrayFromString:(id)fp8;
- (id)stringFromArray:(id)fp8 rangesOfComponents:(id *)fp12;
- (id)stringFromArray:(id)fp8;
- (id)init;

@end
