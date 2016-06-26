/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "NSStreamDelegate-Protocol.h"

@class NSOutputStream, NSString;

@interface FABMultipartMimeStreamEncoder : _ABCreateStringWithAddressDictionary <NSStreamDelegate>
{
    unsigned int _length;
    NSString *_boundary;
    NSOutputStream *_outputStream;
}

+ (id)generateBoundary;
+ (id)encoderWithStream:(id)fp8 andBoundary:(id)fp12;
+ (id)contentTypeHTTPHeaderValueWithBoundary:(id)fp8;
+ (void)populateRequest:(id)fp8 withDataFromEncoder:(id)fp(null);
- (void)setOutputStream:(id)fp8;
- (id)outputStream;
- (void)setBoundary:(id)fp8;
- (id)boundary;
- (void)setLength:(unsigned int)fp8;
- (unsigned int)length;
- (void).cxx_destruct;
- (void)writeData:(id)fp8;
- (BOOL)writeBytes:(const void *)fp8 ofLength:(unsigned int)fp12;
- (void)addFile:(id)fp8 fileName:(id)fp12 mimeType:(id)fp16 fieldName:(id)fp20;
- (void)addValue:(id)fp8 fieldName:(id)fp12;
- (void)addFileData:(id)fp8 fileName:(id)fp12 mimeType:(id)fp16 fieldName:(id)fp20;
- (id)footerData;
- (id)headerData;
- (void)endEncoding;
- (void)beginEncoding;
- (id)contentLengthHTTPHeaderValue;
- (id)contentTypeHTTPHeaderValue;
- (void)encode:(id)fp(null);
- (id)initWithStream:(id)fp8 andBoundary:(id)fp12;

@end
