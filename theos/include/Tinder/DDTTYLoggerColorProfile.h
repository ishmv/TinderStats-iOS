/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSString;

@interface DDTTYLoggerColorProfile : _ABCreateStringWithAddressDictionary
{
    unsigned int mask;
    int context;
    unsigned char fg_r;
    unsigned char fg_g;
    unsigned char fg_b;
    unsigned char bg_r;
    unsigned char bg_g;
    unsigned char bg_b;
    unsigned int fgCodeIndex;
    NSString *fgCodeRaw;
    unsigned int bgCodeIndex;
    NSString *bgCodeRaw;
    char fgCode[24];
    unsigned long fgCodeLen;
    char bgCode[24];
    unsigned long bgCodeLen;
    char resetCode[8];
    unsigned long resetCodeLen;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithForegroundColor:(struct UIColor *)fp8 backgroundColor:(struct UIColor *)fp12 flag:(unsigned int)fp16 context:(int)fp20;

@end

