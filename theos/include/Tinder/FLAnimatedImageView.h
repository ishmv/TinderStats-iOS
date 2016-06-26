/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "PINRemoteImageCategory-Protocol.h"

@class CADisplayLink, FLAnimatedImage, NSString, UIImage;

@interface FLAnimatedImageView : _ABCreateStringWithAddressDictionary <PINRemoteImageCategory>
{
    BOOL _shouldAnimate;
    BOOL _needsDisplayWhenImageBecomesAvailable;
    NSString *_runLoopMode;
    FLAnimatedImage *_animatedImage;
    id _loopCompletionBlock;
    UIImage *_currentFrame;
    unsigned int _currentFrameIndex;
    unsigned int _loopCountdown;
    CADisplayLink *_displayLink;
    double _accumulator;
}

+ (id)defaultRunLoopMode;
- (void)setNeedsDisplayWhenImageBecomesAvailable:(BOOL)fp8;
- (BOOL)needsDisplayWhenImageBecomesAvailable;
- (void)setShouldAnimate:(BOOL)fp8;
- (BOOL)shouldAnimate;
- (void)setDisplayLink:(id)fp8;
- (id)displayLink;
- (void)setAccumulator:(double)fp8;
- (double)accumulator;
- (void)setLoopCountdown:(unsigned int)fp8;
- (unsigned int)loopCountdown;
- (void)setCurrentFrameIndex:(unsigned int)fp8;
- (unsigned int)currentFrameIndex;
- (void)setCurrentFrame:(id)fp8;
- (id)currentFrame;
- (void)setLoopCompletionBlock:(id)fp(null);
- (id)loopCompletionBlock;
- (id)animatedImage;
- (id)runLoopMode;
- (void).cxx_destruct;
- (void)displayLayer:(id)fp8;
- (void)displayDidRefresh:(id)fp8;
- (void)updateShouldAnimate;
- (void)setHighlighted:(BOOL)fp8;
- (BOOL)isAnimating;
- (void)stopAnimating;
- (void)setRunLoopMode:(id)fp8;
- (void)startAnimating;
- (double)frameDelayGreatestCommonDivisor;
- (void)setImage:(id)fp8;
- (id)image;
- (struct CGSize)intrinsicContentSize;
- (void)setHidden:(BOOL)fp8;
- (void)setAlpha:(float)fp8;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)dealloc;
- (void)setAnimatedImage:(id)fp8;
- (void)commonInit;
- (id)initWithCoder:(id)fp8;
- (id)initWithFrame:(struct CGRect)fp8;
- (id)initWithImage:(id)fp8 highlightedImage:(id)fp12;
- (id)initWithImage:(id)fp8;
- (BOOL)pin_ignoreGIFs;
- (void)pin_clearImages;
- (void)pin_updateUIWithImage:(id)fp8 animatedImage:(id)fp12;
- (void)pin_setPlaceholderWithImage:(id)fp8;
- (void)setPin_updateWithProgress:(BOOL)fp8;
- (BOOL)pin_updateWithProgress;
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

