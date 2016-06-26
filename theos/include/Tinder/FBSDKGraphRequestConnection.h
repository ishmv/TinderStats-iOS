/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "FBSDKGraphErrorRecoveryProcessorDelegate-Protocol.h"
#import "FBSDKURLConnectionDelegate-Protocol.h"

@class FBSDKGraphErrorRecoveryProcessor, FBSDKGraphRequestMetadata, FBSDKLogger, FBSDKURLConnection, NSHTTPURLResponse, NSMutableArray, NSOperationQueue, NSString;

@interface FBSDKGraphRequestConnection : _ABCreateStringWithAddressDictionary <FBSDKURLConnectionDelegate, FBSDKGraphErrorRecoveryProcessorDelegate>
{
    NSString *_overrideVersionPart;
    unsigned int _expectingResults;
    NSOperationQueue *_delegateQueue;
    FBSDKGraphRequestMetadata *_recoveringRequestMetadata;
    FBSDKGraphErrorRecoveryProcessor *_errorRecoveryProcessor;
    id <FBSDKGraphRequestConnectionDelegate> _delegate;
    NSHTTPURLResponse *_URLResponse;
    FBSDKURLConnection *_connection;
    NSMutableArray *_requests;
    unsigned int _state;
    FBSDKLogger *_logger;
    unsigned long _requestStartTime;
    double _timeout;
}

+ (id)userAgent;
+ (void)setDefaultConnectionTimeout:(double)fp8;
- (void)setRequestStartTime:(unsigned long)fp8;
- (unsigned long)requestStartTime;
- (void)setLogger:(id)fp8;
- (id)logger;
- (void)setState:(unsigned int)fp8;
- (unsigned int)state;
- (void)setRequests:(id)fp8;
- (id)requests;
- (id)connection;
- (id)URLResponse;
- (void)setTimeout:(double)fp8;
- (double)timeout;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (id)description;
- (void)processorDidAttemptRecovery:(id)fp8 didRecover:(BOOL)fp12 error:(id)fp16;
- (void)facebookURLConnection:(id)fp8 didSendBodyData:(int)fp12 totalBytesWritten:(int)fp16 totalBytesExpectedToWrite:(int)fp20;
- (void)setConnection:(id)fp8;
- (void)registerTokenToOmitFromLog:(id)fp8;
- (id)accessTokenWithRequest:(id)fp8;
- (void)logRequest:(id)fp8 bodyLength:(unsigned int)fp12 bodyLogger:(id)fp16 attachmentLogger:(id)fp20;
- (id)errorWithCode:(int)fp8 statusCode:(int)fp12 parsedJSONResponse:(id)fp16 innerError:(id)fp20 message:(id)fp24;
- (id)errorFromResult:(id)fp8 request:(id)fp12;
- (void)processResultDebugDictionary:(id)fp8;
- (void)processResultBody:(id)fp8 error:(id)fp12 metadata:(id)fp16 canNotifyDelegate:(BOOL)fp20;
- (void)completeWithResults:(id)fp8 networkError:(id)fp12;
- (id)parseJSONOrOtherwise:(id)fp8 error:(id *)fp12;
- (id)parseJSONResponse:(id)fp8 error:(id *)fp12 statusCode:(int)fp16;
- (void)completeFBSDKURLConnectionWithResponse:(id)fp8 data:(id)fp12 networkError:(id)fp16;
- (id)urlStringForSingleRequest:(id)fp8 forBatch:(BOOL)fp12;
- (id)requestWithBatch:(id)fp8 timeout:(double)fp12;
- (void)_validateFieldsParamForGetRequests:(id)fp8;
- (BOOL)_shouldWarnOnMissingFieldsParam:(id)fp8;
- (void)appendJSONRequests:(id)fp8 toBody:(id)fp12 andNameAttachments:(id)fp16 logger:(id)fp20;
- (void)appendAttachments:(id)fp8 toBody:(id)fp12 addFormData:(BOOL)fp16 logger:(id)fp20;
- (void)addRequest:(id)fp8 toBatch:(id)fp12 attachments:(id)fp16 batchToken:(id)fp20;
- (void)setDelegateQueue:(id)fp8;
- (void)start;
- (void)overrideVersionPartWith:(id)fp8;
- (void)cancel;
- (void)addRequest:(id)fp8 completionHandler:(id)fp(null) batchParameters:(void)fp12;
- (void)addRequest:(id)fp8 completionHandler:(id)fp(null) batchEntryName:(void)fp12;
- (void)addRequest:(id)fp8 completionHandler:(id)fp(null);
- (void)dealloc;
- (id)init;

@end

