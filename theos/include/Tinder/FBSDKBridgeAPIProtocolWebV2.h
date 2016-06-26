/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "FBSDKBridgeAPIProtocol-Protocol.h"

@class FBSDKBridgeAPIProtocolNativeV1;

@interface FBSDKBridgeAPIProtocolWebV2 : _ABCreateStringWithAddressDictionary <FBSDKBridgeAPIProtocol>
{
    FBSDKBridgeAPIProtocolNativeV1 *_nativeProtocol;
}

- (void).cxx_destruct;
- (id)responseParametersForActionID:(id)fp8 queryParameters:(id)fp12 cancelled:(char *)fp16 error:(id *)fp20;
- (id)requestURLWithActionID:(id)fp8 scheme:(id)fp12 methodName:(id)fp16 methodVersion:(id)fp20 parameters:(id)fp24 error:(id *)fp28;
- (id)_requestURLForDialogConfiguration:(id)fp8 error:(id *)fp12;
- (id)_redirectURLWithActionID:(id)fp8 methodName:(id)fp12 error:(id *)fp16;
- (id)init;

@end

