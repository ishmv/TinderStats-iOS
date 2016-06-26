/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "FBSDKCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDate, NSSet, NSString;

@interface FBSDKAccessToken : _ABCreateStringWithAddressDictionary <FBSDKCopying, NSSecureCoding>
{
    NSString *_appID;
    NSSet *_declinedPermissions;
    NSDate *_expirationDate;
    NSSet *_permissions;
    NSDate *_refreshDate;
    NSString *_tokenString;
    NSString *_userID;
}

+ (BOOL)supportsSecureCoding;
+ (void)refreshCurrentAccessToken:(id)fp(null);
+ (void)setCurrentAccessToken:(id)fp8;
+ (id)currentAccessToken;
- (id)userID;
- (id)tokenString;
- (id)refreshDate;
- (id)permissions;
- (id)expirationDate;
- (id)declinedPermissions;
- (id)appID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (BOOL)isEqualToAccessToken:(id)fp8;
- (BOOL)isEqual:(id)fp8;
- (unsigned int)hash;
- (BOOL)hasGranted:(id)fp8;
- (id)initWithTokenString:(id)fp8 permissions:(id)fp12 declinedPermissions:(id)fp16 appID:(id)fp20 userID:(id)fp24 expirationDate:(id)fp28 refreshDate:(id)fp32;
- (id)init;

@end

