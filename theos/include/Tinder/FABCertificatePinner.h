/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class NSArray;

@interface FABCertificatePinner : _ABCreateStringWithAddressDictionary
{
    NSArray *_certificates;
}

+ (struct __SecCertificate *)createCertificationWithData:(const void *)fp8 length:(unsigned int)fp12;
- (id)certificates;
- (void).cxx_destruct;
- (BOOL)handleChallenge:(id)fp8 fromURLSession:(id)fp12 completionHandler:(id)fp(null);
- (short)evaluateTrust:(struct __SecTrust *)fp8 result:(unsigned int *)fp12;
- (id)initWithCertificates:(id)fp8;

@end

