/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "NSCopying-Protocol.h"

@class NSDictionary, NSInputStream, NSString;

@interface AFHTTPBodyPart : _ABCreateStringWithAddressDictionary <NSCopying>
{
    int _phase;
    NSInputStream *_inputStream;
    unsigned long long _phaseReadOffset;
    BOOL _hasInitialBoundary;
    BOOL _hasFinalBoundary;
    unsigned int _stringEncoding;
    NSDictionary *_headers;
    NSString *_boundary;
    id _body;
    unsigned long long _bodyContentLength;
}

- (void)setHasFinalBoundary:(BOOL)fp8;
- (BOOL)hasFinalBoundary;
- (void)setHasInitialBoundary:(BOOL)fp8;
- (BOOL)hasInitialBoundary;
- (void)setInputStream:(id)fp8;
- (void)setBodyContentLength:(unsigned long long)fp8;
- (unsigned long long)bodyContentLength;
- (void)setBody:(id)fp8;
- (id)body;
- (void)setBoundary:(id)fp8;
- (id)boundary;
- (void)setHeaders:(id)fp8;
- (id)headers;
- (void)setStringEncoding:(unsigned int)fp8;
- (unsigned int)stringEncoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (BOOL)transitionToNextPhase;
- (int)readData:(id)fp8 intoBuffer:(char *)fp12 maxLength:(unsigned int)fp16;
- (int)read:(char *)fp8 maxLength:(unsigned int)fp12;
- (BOOL)hasBytesAvailable;
- (unsigned long long)contentLength;
- (id)stringForHeaders;
- (id)inputStream;
- (void)dealloc;
- (id)init;

@end

