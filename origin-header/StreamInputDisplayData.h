//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface StreamInputDisplayData : NSObject
{
    _Bool _isEnd;
    unsigned int _inputId;
    NSString *_resultText;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic) unsigned int inputId; // @synthesize inputId=_inputId;
@property(nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
@property(retain, nonatomic) NSString *resultText; // @synthesize resultText=_resultText;

@end

