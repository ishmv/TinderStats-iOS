/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol FBSDKBridgeAPIProtocol <NSObject>
- (id)responseParametersForActionID:(id)fp8 queryParameters:(id)fp12 cancelled:(char *)fp16 error:(id *)fp20;
- (id)requestURLWithActionID:(id)fp8 scheme:(id)fp12 methodName:(id)fp16 methodVersion:(id)fp20 parameters:(id)fp24 error:(id *)fp28;
@end
