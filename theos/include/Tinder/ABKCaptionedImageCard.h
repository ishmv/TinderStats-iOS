/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "ABKCard.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface ABKCaptionedImageCard : ABKCard <NSCoding>
{
    NSString *_image;
    float _imageAspectRatio;
    NSString *_title;
    NSString *_cardDescription;
    NSString *_url;
    NSString *_domain;
}

- (void)setDomain:(id)fp8;
- (id)domain;
- (void)setUrl:(id)fp8;
- (id)url;
- (void)setCardDescription:(id)fp8;
- (id)cardDescription;
- (void)setTitle:(id)fp8;
- (id)title;
- (void)setImageAspectRatio:(float)fp8;
- (float)imageAspectRatio;
- (void)setImage:(id)fp8;
- (id)image;
- (void).cxx_destruct;
- (id)proxyForJson;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (unsigned int)hash;
- (BOOL)isEqual:(id)fp8;
- (BOOL)isValid;
- (void)setNilValueForKey:(id)fp8;
- (void)setValue:(id)fp8 forKey:(id)fp12;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;

@end

