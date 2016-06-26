/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSArray, TNDRReportReasonsViewModel;

@interface TNDRAccountWarningsViewModel : _ABCreateStringWithAddressDictionary
{
    NSArray *_accountWarnings;
    TNDRReportReasonsViewModel *_reportReasonsViewModel;
}

+ (id)accountWarningsFromJSON:(id)fp8;
+ (id)accountWarningsFromArray:(id)fp8;
- (void)setReportReasonsViewModel:(id)fp8;
- (id)reportReasonsViewModel;
- (void)setAccountWarnings:(id)fp8;
- (id)accountWarnings;
- (void).cxx_destruct;
- (id)accountWarningsSummaryJoinedByString:(id)fp8 prefix:(id)fp12;
- (void)requestAccountWarningsWithCompletion:(id)fp(null);
- (id)initFromJSON:(id)fp8;
- (id)initFromArray:(id)fp8;

@end

