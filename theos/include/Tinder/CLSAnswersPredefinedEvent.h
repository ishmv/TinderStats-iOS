/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "CLSAnswersEvent.h"

@interface CLSAnswersPredefinedEvent : CLSAnswersEvent
{
}

+ (id)serializeNSNumberAsInteger:(id)fp8;
+ (id)serializePriceToMicros:(id)fp8;
+ (id)serializeSuccess:(id)fp8;
- (id)description;
- (void)addPredefinedString:(id)fp8 forKey:(id)fp12;
- (void)addPredefinedNumber:(id)fp8 forKey:(id)fp12;
- (void)addPredefinedAttribute:(id)fp8 forKey:(id)fp12;
- (id)initWithPredefinedEventType:(id)fp8 customAttributes:(id)fp12;

@end

