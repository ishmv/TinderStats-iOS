/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "FABAsyncOperation.h"

@class NSString;

@interface FABNetworkOperation : FABAsyncOperation
{
    NSString *_APIKey;
}

- (id)APIKey;
- (void).cxx_destruct;
- (id)localeIdentifier;
- (id)userAgentString;
- (id)mutableRequestWithDefaultHTTPHeadersForURL:(id)fp8 timeout:(double)fp12;
- (id)mutableRequestWithDefaultHTTPHeaderFieldsAndTimeoutForURL:(id)fp8;
- (id)initWithAPIKey:(id)fp8;

@end

