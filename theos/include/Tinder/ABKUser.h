/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class ABKAttributionData, ABKFacebookUser, ABKManager, ABKPersistentData, ABKTwitterUser, NSArray, NSDate, NSDateFormatter, NSDictionary, NSMutableDictionary, NSNumber, NSObject, NSString;

@interface ABKUser : _ABCreateStringWithAddressDictionary
{
    ABKFacebookUser *_facebookUser;
    ABKTwitterUser *_twitterUser;
    ABKAttributionData *_attributionData;
    NSString *_userID;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_email;
    NSDate *_dateOfBirth;
    NSString *_country;
    NSString *_homeCity;
    NSString *_bio;
    NSString *_phone;
    NSString *_foursquareAccessToken;
    NSString *_avatarImageURL;
    NSDictionary *_facebookDictionary;
    NSDictionary *_twitterDictionary;
    NSDictionary *_attributionDataDictionary;
    NSDateFormatter *_dateFormatter;
    ABKManager *_appboyManager;
    NSArray *_reservedKeysList;
    NSMutableDictionary *_customAttributes;
    NSString *_emailSubscription;
    NSString *_pushSubscription;
    NSNumber *_enableClearTwitterData;
    NSString *_userGender;
    ABKPersistentData *_persistentData;
    NSObject *_userLock;
}

- (void)setUserLock:(id)fp8;
- (id)userLock;
- (void)setPersistentData:(id)fp8;
- (id)persistentData;
- (void)setUserGender:(id)fp8;
- (id)userGender;
- (void)setEnableClearTwitterData:(id)fp8;
- (id)enableClearTwitterData;
- (void)setPushSubscription:(id)fp8;
- (void)setEmailSubscription:(id)fp8;
- (void)setCustomAttributes:(id)fp8;
- (id)customAttributes;
- (void)setReservedKeysList:(id)fp8;
- (id)reservedKeysList;
- (void)setAppboyManager:(id)fp8;
- (id)appboyManager;
- (void)setDateFormatter:(id)fp8;
- (id)dateFormatter;
- (void)setAttributionDataDictionary:(id)fp8;
- (id)attributionDataDictionary;
- (id)twitterDictionary;
- (void)setFacebookDictionary:(id)fp8;
- (id)facebookDictionary;
- (id)avatarImageURL;
- (id)foursquareAccessToken;
- (id)phone;
- (void)setBio:(id)fp8;
- (id)bio;
- (id)homeCity;
- (id)country;
- (id)dateOfBirth;
- (id)email;
- (id)lastName;
- (id)firstName;
- (void).cxx_destruct;
- (id)asDictionary;
- (void)notifyOfPropertyUpdate;
- (BOOL)setLastKnownLocationWithLatitude:(double)fp8 longitude:(double)fp16 horizontalAccuracy:(double)fp24 altitude:(double)fp32 verticalAccuracy:(double)fp40;
- (BOOL)setLastKnownLocationWithLatitude:(double)fp8 longitude:(double)fp16 horizontalAccuracy:(double)fp24;
- (BOOL)setCustomAttributeArrayWithKey:(id)fp8 array:(id)fp12;
- (BOOL)removeFromCustomAttributeArrayWithKey:(id)fp8 value:(id)fp12;
- (BOOL)addToCustomAttributeArrayWithKey:(id)fp8 value:(id)fp12;
- (BOOL)changeToUserWithID:(id)fp8;
- (BOOL)incrementCustomUserAttribute:(id)fp8 by:(int)fp12;
- (BOOL)incrementCustomUserAttribute:(id)fp8;
- (BOOL)setGender:(int)fp8;
- (BOOL)setPushNotificationSubscriptionType:(int)fp8;
- (BOOL)setEmailNotificationSubscriptionType:(int)fp8;
- (BOOL)setIsSubscribedToEmails:(BOOL)fp8;
- (id)checkValidationOfCustomAttributeObjectAsString:(id)fp8;
- (id)checkValidationOfKey:(id)fp8;
- (BOOL)setCustomAttributeWithKey:(id)fp8 andObject:(id)fp12;
- (BOOL)unsetCustomAttributeWithKey:(id)fp8;
- (BOOL)setCustomAttributeWithKey:(id)fp8 andDateValue:(id)fp12;
- (BOOL)setCustomAttributeWithKey:(id)fp8 andStringValue:(id)fp12;
- (BOOL)setCustomAttributeWithKey:(id)fp8 andDoubleValue:(double)fp12;
- (BOOL)setCustomAttributeWithKey:(id)fp8 andIntegerValue:(int)fp12;
- (BOOL)setCustomAttributeWithKey:(id)fp8 andBOOLValue:(BOOL)fp12;
- (id)userID;
- (id)proxyForJson;
- (void)setValue:(id)fp8 forUndefinedKey:(id)fp12;
- (void)dealloc;
- (void)setAvatarImageURL:(id)fp8;
- (void)setFoursquareAccessToken:(id)fp8;
- (void)setPhone:(id)fp8;
- (void)setHomeCity:(id)fp8;
- (void)setCountry:(id)fp8;
- (void)setDateOfBirth:(id)fp8;
- (void)setEmail:(id)fp8;
- (void)setLastName:(id)fp8;
- (void)setFirstName:(id)fp8;
- (void)setAttributionData:(id)fp8;
- (void)setTwitterDictionary:(id)fp8;
- (void)setTwitterUser:(id)fp8;
- (void)setFacebookUser:(id)fp8;
- (id)attributionData;
- (id)twitterUser;
- (id)facebookUser;
- (id)getReservedKeysList;
- (int)getGender;
- (id)pushSubscription;
- (id)emailSubscription;
- (id)getCustomAttributesDictionary;
- (void)resetUserValuesFromDictionary:(id)fp8;
- (id)initWithBackingStore:(id)fp8 manager:(id)fp12;
- (id)init;

@end

