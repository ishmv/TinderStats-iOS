/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol BKURLConnectionInformalDelegate <NSObject>
- (BOOL)connection:(id)fp8 canAuthenticateAgainstProtectionSpace:(id)fp12;
- (void)connection:(id)fp8 didReceiveAuthenticationChallenge:(id)fp12;
- (void)connection:(id)fp8 didFailWithError:(id)fp12;
- (void)connectionDidFinishLoading:(id)fp8;
- (void)connection:(id)fp8 didSendBodyData:(int)fp12 totalBytesWritten:(int)fp16 totalBytesExpectedToWrite:(int)fp20;
- (void)connection:(id)fp8 didReceiveData:(id)fp12;
- (void)connection:(id)fp8 didReceiveResponse:(id)fp12;
@end

