/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABCreateStringWithAddressDictionary.h"

#import "TTTAttributedLabel-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSAttributedString, NSDataDetector, NSDictionary, NSString, TTTAttributedLabelLink, UIColor, UILongPressGestureRecognizer;

@interface TTTAttributedLabel : _ABCreateStringWithAddressDictionary <TTTAttributedLabel, UIGestureRecognizerDelegate>
{
    BOOL _needsFramesetter;
    struct __CTFramesetter *_framesetter;
    struct __CTFramesetter *_highlightFramesetter;
    BOOL _extendsLinkTouchArea;
    NSAttributedString *_attributedText;
    id <TTTAttributedLabelDelegate> _delegate;
    NSDictionary *_linkAttributes;
    NSDictionary *_activeLinkAttributes;
    NSDictionary *_inactiveLinkAttributes;
    float _shadowRadius;
    float _highlightedShadowRadius;
    UIColor *_highlightedShadowColor;
    float _kern;
    float _firstLineIndent;
    float _lineSpacing;
    float _minimumLineHeight;
    float _maximumLineHeight;
    float _lineHeightMultiple;
    int _verticalAlignment;
    NSString *_truncationTokenString;
    NSDictionary *_truncationTokenStringAttributes;
    NSAttributedString *_attributedTruncationToken;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSAttributedString *_inactiveAttributedText;
    NSAttributedString *_renderedAttributedText;
    NSDataDetector *_dataDetector;
    NSArray *_linkModels;
    TTTAttributedLabelLink *_activeLink;
    NSArray *_accessibilityElements;
    unsigned long long _enabledTextCheckingTypes;
    struct CGSize _highlightedShadowOffset;
    struct UIEdgeInsets _linkBackgroundEdgeInset;
    struct UIEdgeInsets _textInsets;
}

+ (struct CGSize)sizeThatFitsAttributedString:(id)fp8 withConstraints:(struct CGSize)fp12 limitedToNumberOfLines:(unsigned int)fp20;
+ (void)load;
- (void)setAccessibilityElements:(id)fp8;
- (id)activeLink;
- (id)linkModels;
- (void)setDataDetector:(id)fp8;
- (id)dataDetector;
- (void)setRenderedAttributedText:(id)fp8;
- (void)setInactiveAttributedText:(id)fp8;
- (id)inactiveAttributedText;
- (id)longPressGestureRecognizer;
- (void)setAttributedTruncationToken:(id)fp8;
- (id)attributedTruncationToken;
- (void)setTruncationTokenStringAttributes:(id)fp8;
- (id)truncationTokenStringAttributes;
- (void)setTruncationTokenString:(id)fp8;
- (id)truncationTokenString;
- (void)setVerticalAlignment:(int)fp8;
- (int)verticalAlignment;
- (void)setTextInsets:(struct UIEdgeInsets)fp8;
- (struct UIEdgeInsets)textInsets;
- (void)setLineHeightMultiple:(float)fp8;
- (float)lineHeightMultiple;
- (void)setMaximumLineHeight:(float)fp8;
- (float)maximumLineHeight;
- (void)setMinimumLineHeight:(float)fp8;
- (float)minimumLineHeight;
- (void)setLineSpacing:(float)fp8;
- (float)lineSpacing;
- (void)setFirstLineIndent:(float)fp8;
- (float)firstLineIndent;
- (void)setKern:(float)fp8;
- (float)kern;
- (void)setHighlightedShadowColor:(id)fp8;
- (id)highlightedShadowColor;
- (void)setHighlightedShadowOffset:(struct CGSize)fp8;
- (struct CGSize)highlightedShadowOffset;
- (void)setHighlightedShadowRadius:(float)fp8;
- (float)highlightedShadowRadius;
- (void)setShadowRadius:(float)fp8;
- (float)shadowRadius;
- (void)setExtendsLinkTouchArea:(BOOL)fp8;
- (BOOL)extendsLinkTouchArea;
- (void)setLinkBackgroundEdgeInset:(struct UIEdgeInsets)fp8;
- (struct UIEdgeInsets)linkBackgroundEdgeInset;
- (void)setInactiveLinkAttributes:(id)fp8;
- (id)inactiveLinkAttributes;
- (void)setActiveLinkAttributes:(id)fp8;
- (id)activeLinkAttributes;
- (void)setLinkAttributes:(id)fp8;
- (id)linkAttributes;
- (unsigned long long)enabledTextCheckingTypes;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (id)attributedText;
- (void).cxx_destruct;
- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (void)copy:(id)fp8;
- (void)longPressGestureDidFire:(id)fp8;
- (BOOL)gestureRecognizer:(id)fp8 shouldReceiveTouch:(id)fp12;
- (void)touchesCancelled:(id)fp8 withEvent:(id)fp12;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (void)touchesMoved:(id)fp8 withEvent:(id)fp12;
- (void)touchesBegan:(id)fp8 withEvent:(id)fp12;
- (BOOL)canPerformAction:(SEL)fp8 withSender:(id)fp12;
- (BOOL)canBecomeFirstResponder;
- (id)hitTest:(struct CGPoint)fp8 withEvent:(id)fp16;
- (void)tintColorDidChange;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;
- (id)accessibilityElements;
- (int)indexOfAccessibilityElement:(id)fp8;
- (id)accessibilityElementAtIndex:(int)fp8;
- (int)accessibilityElementCount;
- (BOOL)isAccessibilityElement;
- (void)drawTextInRect:(struct CGRect)fp8;
- (struct CGRect)textRectForBounds:(struct CGRect)fp8 limitedToNumberOfLines:(int)fp24;
- (void)setTextColor:(id)fp8;
- (id)textColor;
- (void)setHighlighted:(BOOL)fp8;
- (void)setActiveLink:(id)fp8;
- (void)setText:(id)fp8 afterInheritingLabelAttributesAndConfiguringWithBlock:(id)fp(null);
- (void)setText:(id)fp8;
- (void)drawStrike:(struct __CTFrame *)fp8 inRect:(struct CGRect)fp12 context:(struct CGContext *)fp28;
- (void)drawBackground:(struct __CTFrame *)fp8 inRect:(struct CGRect)fp12 context:(struct CGContext *)fp28;
- (void)drawFramesetter:(struct __CTFramesetter *)fp8 attributedString:(id)fp12 textRange:(CDAnonymousStruct3)fp16 inRect:(struct CGRect)fp24 context:(struct CGContext *)fp40;
- (struct CGRect)boundingRectForCharacterRange:(struct _NSRange)fp8;
- (long)characterIndexAtPoint:(struct CGPoint)fp8;
- (id)linkAtCharacterIndex:(long)fp8;
- (id)linkAtRadius:(float)fp8 aroundPoint:(struct CGPoint)fp12;
- (id)linkAtPoint:(struct CGPoint)fp8;
- (BOOL)containslinkAtPoint:(struct CGPoint)fp8;
- (id)addLinkToTransitInformation:(id)fp8 withRange:(struct _NSRange)fp12;
- (id)addLinkToDate:(id)fp8 timeZone:(id)fp12 duration:(double)fp16 withRange:(struct _NSRange)fp24;
- (id)addLinkToDate:(id)fp8 withRange:(struct _NSRange)fp12;
- (id)addLinkToPhoneNumber:(id)fp8 withRange:(struct _NSRange)fp12;
- (id)addLinkToAddress:(id)fp8 withRange:(struct _NSRange)fp12;
- (id)addLinkToURL:(id)fp8 withRange:(struct _NSRange)fp12;
- (id)addLinkWithTextCheckingResult:(id)fp8;
- (id)addLinksWithTextCheckingResults:(id)fp8 attributes:(id)fp12;
- (id)addLinkWithTextCheckingResult:(id)fp8 attributes:(id)fp12;
- (void)addLinks:(id)fp8;
- (void)addLink:(id)fp8;
- (void)setEnabledTextCheckingTypes:(unsigned long long)fp8;
- (void)setDataDetectorTypes:(unsigned long long)fp8;
- (unsigned long long)dataDetectorTypes;
- (void)setLeading:(float)fp8;
- (float)leading;
- (void)setHighlightFramesetter:(struct __CTFramesetter *)fp8;
- (struct __CTFramesetter *)highlightFramesetter;
- (void)setFramesetter:(struct __CTFramesetter *)fp8;
- (struct __CTFramesetter *)framesetter;
- (void)setNeedsFramesetter;
- (void)setLinkModels:(id)fp8;
- (id)links;
- (id)renderedAttributedText;
- (void)setAttributedText:(id)fp8;
- (void)dealloc;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)fp8;

@end

