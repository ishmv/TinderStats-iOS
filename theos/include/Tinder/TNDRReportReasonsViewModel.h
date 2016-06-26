/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSArray, NSDictionary;

@interface TNDRReportReasonsViewModel : _ABCreateStringWithAddressDictionary
{
    NSArray *_reportingReasons;
    NSDictionary *_reportingReasonsImageNames;
    NSDictionary *_reportingReasonsStrings;
}

+ (id)analyticsReportKeyForReason:(unsigned int)fp8;
- (void)setReportingReasonsStrings:(id)fp8;
- (id)reportingReasonsStrings;
- (void)setReportingReasonsImageNames:(id)fp8;
- (id)reportingReasonsImageNames;
- (id)reportingReasons;
- (void).cxx_destruct;
- (id)localizedStringsForReportReasons:(id)fp8;
- (id)localizedStringForReportingReason:(unsigned int)fp8;
- (id)imageForReportingReason:(unsigned int)fp8;
- (id)localizedStringForIndexPath:(id)fp8;
- (id)imageForIndexPath:(id)fp8;
- (void)requestReportReasonsWithCompletion:(id)fp(null);
- (id)init;

@end

