/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSArray, NSURL;

@interface BFAppLink : _ABCreateStringWithAddressDictionary
{
    BOOL _backToReferrer;
    NSURL *_sourceURL;
    NSArray *_targets;
    NSURL *_webURL;
}

+ (id)appLinkWithSourceURL:(id)fp8 targets:(id)fp12 webURL:(id)fp16;
+ (id)appLinkWithSourceURL:(id)fp8 targets:(id)fp12 webURL:(id)fp16 isBackToReferrer:(BOOL)fp20;
- (void)setBackToReferrer:(BOOL)fp8;
- (BOOL)isBackToReferrer;
- (void)setWebURL:(id)fp8;
- (id)webURL;
- (void)setTargets:(id)fp8;
- (id)targets;
- (void)setSourceURL:(id)fp8;
- (id)sourceURL;
- (void).cxx_destruct;
- (id)initWithIsBackToReferrer:(BOOL)fp8;

@end

