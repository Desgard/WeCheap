//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface FTSTopHitValue : NSObject <PBCoding>
{
    unsigned int clickScore;
    unsigned int timestamp;
    NSString *key;
    NSMutableDictionary *dicGroupMember;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)addScore;
- (void)addScore:(int)arg1;
@property(nonatomic) unsigned int clickScore; // @synthesize clickScore;
- (long long)compareTopHitValueAscending:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *dicGroupMember; // @synthesize dicGroupMember;
- (unsigned int)getABTestThredshold;
- (unsigned int)getABTestValidDays;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
- (_Bool)isDisplayAvailable;
- (_Bool)isDisplayAvailable:(int)arg1;
- (_Bool)isOutOfDate;
- (_Bool)isValid;
@property(retain, nonatomic) NSString *key; // @synthesize key;
- (void)minusScore;
- (void)minusScore:(int)arg1;
@property(nonatomic) unsigned int timestamp; // @synthesize timestamp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

