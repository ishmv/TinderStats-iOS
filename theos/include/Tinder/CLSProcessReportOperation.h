/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class CLSInternalReport, CLSSymbolResolver;

@interface CLSProcessReportOperation : _ABCreateStringWithAddressDictionary
{
    CLSSymbolResolver *_symbolResolver;
    CLSInternalReport *_report;
}

- (id)report;
- (id)symbolResolver;
- (void).cxx_destruct;
- (void)main;
- (BOOL)symbolicateFile:(id)fp8 withResolver:(id)fp12;
- (id)threadArrayFromFile:(id)fp8;
- (id)binaryImagePath;
- (id)initWithReport:(id)fp8 resolver:(id)fp12;

@end

