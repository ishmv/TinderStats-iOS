/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "AFHTTPResponseSerializer.h"

@interface AFImageResponseSerializer : AFHTTPResponseSerializer
{
    BOOL _automaticallyInflatesResponseImage;
    float _imageScale;
}

- (void)setAutomaticallyInflatesResponseImage:(BOOL)fp8;
- (BOOL)automaticallyInflatesResponseImage;
- (void)setImageScale:(float)fp8;
- (float)imageScale;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)responseObjectForResponse:(id)fp8 data:(id)fp12 error:(id *)fp16;
- (id)init;

@end

