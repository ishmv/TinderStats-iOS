/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol PINRemoteImageCategory <NSObject>
- (void)setPin_updateWithProgress:(BOOL)fp8;
- (BOOL)pin_updateWithProgress;
- (BOOL)pin_ignoreGIFs;
- (void)pin_clearImages;
- (void)pin_updateUIWithImage:(id)fp8 animatedImage:(id)fp12;
- (void)pin_setPlaceholderWithImage:(id)fp8;
- (void)pin_setDownloadImageOperationUUID:(id)fp8;
- (id)pin_downloadImageOperationUUID;
- (void)pin_cancelImageDownload;
- (void)pin_setImageFromURLs:(id)fp8 placeholderImage:(id)fp12 completion:(id)fp(null);
- (void)pin_setImageFromURLs:(id)fp8 placeholderImage:(id)fp12;
- (void)pin_setImageFromURLs:(id)fp8;
- (void)pin_setImageFromURL:(id)fp8 placeholderImage:(id)fp12 processorKey:(id)fp16 processor:(id)fp(null) completion:(void)fp20;
- (void)pin_setImageFromURL:(id)fp8 processorKey:(id)fp12 processor:(id)fp(null) completion:(void)fp16;
- (void)pin_setImageFromURL:(id)fp8 placeholderImage:(id)fp12 processorKey:(id)fp16 processor:(id)fp(null);
- (void)pin_setImageFromURL:(id)fp8 processorKey:(id)fp12 processor:(id)fp(null);
- (void)pin_setImageFromURL:(id)fp8 placeholderImage:(id)fp12 completion:(id)fp(null);
- (void)pin_setImageFromURL:(id)fp8 completion:(id)fp(null);
- (void)pin_setImageFromURL:(id)fp8 placeholderImage:(id)fp12;
- (void)pin_setImageFromURL:(id)fp8;
@end

