//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface HotAdData : MMObject <PBCoding>
{
    unsigned int index;
    NSString *picUrl;
    NSString *jumpUrl;
    NSString *noticeId;
}

+ (void)initialize;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) unsigned int index; // @synthesize index;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl;
@property(retain, nonatomic) NSString *noticeId; // @synthesize noticeId;
- (void)parse:(id)arg1;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

