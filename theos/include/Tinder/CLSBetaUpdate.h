/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSString, NSURL;

@interface CLSBetaUpdate : _ABCreateStringWithAddressDictionary
{
    NSURL *_url;
    NSString *_version;
}

+ (id)betaUpdateWithDictionary:(id)fp8 error:(id *)fp12;
- (id)version;
- (id)url;
- (void).cxx_destruct;
- (id)installLabel;
- (id)cancelLabel;
- (id)promptMessage;
- (id)promptTitle;
- (id)initWithDictionary:(id)fp8;

@end

