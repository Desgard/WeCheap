//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface VOIPRecentConnect : NSObject <PBCoding>
{
    NSMutableArray *m_videoRecentConnectUserName;
    NSMutableArray *m_voiceRecentConnectUserName;
}

+ (id)getSavePath;
+ (id)getSaveRootDir;
+ (void)initialize;
+ (id)loadFromFile;
- (void).cxx_destruct;
- (void)addRecentVideoConnect:(id)arg1;
- (void)addRecentVoiceConnect:(id)arg1;
- (void)dealloc;
- (id)getRecentVideoConnect;
- (id)getRecentVoiceContact;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
@property(retain, nonatomic) NSMutableArray *m_videoRecentConnectUserName; // @synthesize m_videoRecentConnectUserName;
@property(retain, nonatomic) NSMutableArray *m_voiceRecentConnectUserName; // @synthesize m_voiceRecentConnectUserName;
- (void)saveToCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

