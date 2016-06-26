/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class CLSFileManager, CLSInternalReport, NSString;

@interface CLSPackageReportOperation : _ABCreateStringWithAddressDictionary
{
    CLSInternalReport *_report;
    CLSFileManager *_fileManager;
    NSString *_finalPath;
}

- (void)setFinalPath:(id)fp8;
- (id)finalPath;
- (id)fileManager;
- (id)report;
- (void).cxx_destruct;
- (void)encode:(id)fp8 data:(id)fp12 fromPath:(id)fp16;
- (void)main;
- (id)packagedPathWithName:(id)fp8;
- (id)destinationDirectory;
- (id)reportPath;
- (BOOL)writeBytes:(const void *)fp8 length:(unsigned long)fp12 toGZFile:(void *)fp16;
- (BOOL)compressData:(id)fp8 toPath:(id)fp12;
- (id)initWithReport:(id)fp8 fileManager:(id)fp12;

@end
