/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "DDAbstractLogger.h"

#import "DDLogger-Protocol.h"

@class DDLogFileInfo, NSFileHandle;

@interface DDFileLogger : DDAbstractLogger <DDLogger>
{
    id <DDLogFileManager> _logFileManager;
    DDLogFileInfo *_currentLogFileInfo;
    NSFileHandle *_currentLogFileHandle;
    struct dispatch_source_s *_currentLogFileVnode;
    struct dispatch_source_s *_rollingTimer;
    unsigned long long _maximumFileSize;
    double _rollingFrequency;
    BOOL _doNotReuseLogFiles;
    BOOL _automaticallyAppendNewlineForCustomFormatters;
    id <DDLogFileManager> logFileManager;
}

- (void)setAutomaticallyAppendNewlineForCustomFormatters:(BOOL)fp8;
- (BOOL)automaticallyAppendNewlineForCustomFormatters;
- (void)setDoNotReuseLogFiles:(BOOL)fp8;
- (BOOL)doNotReuseLogFiles;
- (id)logFileManager;
- (void).cxx_destruct;
- (id)loggerName;
- (void)willRemoveLogger;
- (void)logMessage:(id)fp8;
- (id)currentLogFileHandle;
- (id)currentLogFileInfo;
- (void)maybeRollLogFileDueToSize;
- (void)maybeRollLogFileDueToAge;
- (void)rollLogFileNow;
- (void)rollLogFileWithCompletionBlock:(id)fp(null);
- (void)rollLogFile;
- (void)scheduleTimerToRollLogFileDueToAge;
- (void)setRollingFrequency:(double)fp8;
- (double)rollingFrequency;
- (void)setMaximumFileSize:(unsigned long long)fp8;
- (unsigned long long)maximumFileSize;
- (void)dealloc;
- (id)initWithLogFileManager:(id)fp8;
- (id)init;

@end
