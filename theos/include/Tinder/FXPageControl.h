/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

@class UIColor, UIImage;

@interface FXPageControl : _ABCreateStringWithAddressDictionary
{
    BOOL _defersCurrentPageDisplay;
    BOOL _hidesForSinglePage;
    BOOL _wrapEnabled;
    BOOL _vertical;
    id <FXPageControlDelegate> _delegate;
    int _currentPage;
    int _numberOfPages;
    UIImage *_dotImage;
    struct CGPath *_dotShape;
    float _dotSize;
    UIColor *_dotColor;
    UIColor *_dotShadowColor;
    float _dotShadowBlur;
    UIImage *_selectedDotImage;
    struct CGPath *_selectedDotShape;
    float _selectedDotSize;
    UIColor *_selectedDotColor;
    UIColor *_selectedDotShadowColor;
    float _selectedDotShadowBlur;
    float _dotSpacing;
    struct CGSize _dotShadowOffset;
    struct CGSize _selectedDotShadowOffset;
}

- (float)dotSpacing;
- (struct CGSize)selectedDotShadowOffset;
- (float)selectedDotShadowBlur;
- (id)selectedDotShadowColor;
- (id)selectedDotColor;
- (float)selectedDotSize;
- (struct CGPath *)selectedDotShape;
- (id)selectedDotImage;
- (struct CGSize)dotShadowOffset;
- (float)dotShadowBlur;
- (id)dotShadowColor;
- (id)dotColor;
- (float)dotSize;
- (struct CGPath *)dotShape;
- (id)dotImage;
- (void)setVertical:(BOOL)fp8;
- (BOOL)isVertical;
- (void)setWrapEnabled:(BOOL)fp8;
- (BOOL)isWrapEnabled;
- (void)setHidesForSinglePage:(BOOL)fp8;
- (BOOL)hidesForSinglePage;
- (void)setDefersCurrentPageDisplay:(BOOL)fp8;
- (BOOL)defersCurrentPageDisplay;
- (int)numberOfPages;
- (int)currentPage;
- (id)delegate;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;
- (void)endTrackingWithTouch:(id)fp8 withEvent:(id)fp12;
- (void)setNumberOfPages:(int)fp8;
- (void)setCurrentPage:(int)fp8;
- (void)setDelegate:(id)fp8;
- (void)setDotSpacing:(float)fp8;
- (void)setSelectedDotShadowOffset:(struct CGSize)fp8;
- (void)setSelectedDotShadowBlur:(float)fp8;
- (void)setSelectedDotShadowColor:(id)fp8;
- (void)setSelectedDotSize:(float)fp8;
- (void)setSelectedDotShape:(struct CGPath *)fp8;
- (void)setSelectedDotColor:(id)fp8;
- (void)setSelectedDotImage:(id)fp8;
- (void)setDotShadowOffset:(struct CGSize)fp8;
- (void)setDotShadowBlur:(float)fp8;
- (void)setDotShadowColor:(id)fp8;
- (void)setDotColor:(id)fp8;
- (void)setDotSize:(float)fp8;
- (void)setDotShape:(struct CGPath *)fp8;
- (void)setDotImage:(id)fp8;
- (int)clampedPageValue:(int)fp8;
- (void)drawRect:(struct CGRect)fp8;
- (void)updateCurrentPageDisplay;
- (struct CGSize)sizeForNumberOfPages:(int)fp8;
- (void)dealloc;
- (id)initWithCoder:(id)fp8;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)setUp;

@end
