/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol CLSReportsControllerDelegate <NSObject>
- (id)bundleIdentifierForReportsController:(id)fp8;
- (id)APIKeyForReportsController:(id)fp8;
- (id)settingsForReportsController:(id)fp8;
- (void)reportsControllerDidCompleteAllSubmissions:(id)fp8;
- (void)reportsController:(id)fp8 didCompletePackageSubmission:(id)fp12 error:(id)fp16;
@end

