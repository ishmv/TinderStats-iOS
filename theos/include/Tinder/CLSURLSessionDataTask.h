/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "CLSURLSessionTask.h"

#import "NSURLConnectionDelegate-Protocol.h"

@class NSMutableData, NSString, NSURLConnection;

@interface CLSURLSessionDataTask : CLSURLSessionTask <NSURLConnectionDelegate>
{
    id _completionHandler;
    NSURLConnection *_connection;
    NSMutableData *_data;
    NSString *_taskDescription;
}

- (void)setTaskDescription:(id)fp8;
- (id)taskDescription;
- (void)setCompletionHandler:(id)fp(null);
- (id)completionHandler;
- (void)setConnection:(id)fp8;
- (id)connection;
- (void).cxx_destruct;
- (void)connectionDidFinishLoading:(id)fp8;
- (void)connection:(id)fp8 didFailWithError:(id)fp12;
- (void)connection:(id)fp8 didReceiveData:(id)fp12;
- (void)connection:(id)fp8 didReceiveResponse:(id)fp12;
- (void)cancel;
- (void)complete;
- (void)resume;

@end

