/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "PINRemoteImageTask.h"

@class NSUUID;

@interface PINRemoteImageProcessorTask : PINRemoteImageTask
{
    NSUUID *_downloadTaskUUID;
}

- (id)downloadTaskUUID;
- (void).cxx_destruct;
- (void)setDownloadTaskUUID:(id)fp8;
- (BOOL)cancelWithUUID:(id)fp8 manager:(id)fp12;

@end

