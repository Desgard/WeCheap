//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString;

@interface FICImageTableMetadata : NSObject <PBCoding>
{
    NSRecursiveLock *m_lock;
    unsigned int m_entryCount;
    NSMutableArray *m_imgCacheFIFO;
    NSMutableDictionary *m_imgMemoryCache;
    unsigned int imgSizeWidth;
    unsigned int imgSizeHeight;
    unsigned int imgMaxCnt;
    unsigned int maxLRUFactor;
    unsigned int cpuzSize;
    unsigned int pageSize;
    unsigned int version;
    NSMutableDictionary *MRUEntries;
    NSString *formatName;
    NSMutableDictionary *_indexMap;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *MRUEntries; // @synthesize MRUEntries;
- (void)clearImageCache;
@property(nonatomic) unsigned int cpuzSize; // @synthesize cpuzSize;
- (_Bool)deleteEntryForEntityUUID:(id)arg1;
@property(nonatomic) unsigned int entryCount; // @synthesize entryCount=m_entryCount;
@property(retain, nonatomic) NSString *formatName; // @synthesize formatName;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)imageCacheForEntityUUID:(id)arg1;
@property(nonatomic) unsigned int imgMaxCnt; // @synthesize imgMaxCnt;
@property(nonatomic) unsigned int imgSizeHeight; // @synthesize imgSizeHeight;
@property(nonatomic) unsigned int imgSizeWidth; // @synthesize imgSizeWidth;
@property(retain, nonatomic) NSMutableDictionary *indexMap; // @synthesize indexMap=_indexMap;
- (unsigned long long)indexOfEntryForEntityUUID:(id)arg1;
- (id)initWithLock:(id)arg1;
- (_Bool)isAnyEntityInUsed;
- (_Bool)loadMetadata:(id)arg1 imgFormat:(id)arg2;
@property(nonatomic) unsigned int maxLRUFactor; // @synthesize maxLRUFactor;
- (unsigned long long)nextEntryIndex;
@property(nonatomic) unsigned int pageSize; // @synthesize pageSize;
- (void)reset;
- (_Bool)saveMetadata:(id)arg1 imgFormat:(id)arg2;
- (void)setEntityInUse:(_Bool)arg1 entityUUID:(id)arg2;
- (void)setImageCache:(id)arg1 withEntityUUID:(id)arg2;
@property(nonatomic) unsigned int version; // @synthesize version;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

