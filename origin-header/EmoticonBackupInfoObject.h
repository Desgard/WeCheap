//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface EmoticonBackupInfoObject : MMObject <PBCoding>
{
    _Bool m_hasBatchBackup;
    _Bool m_serverBackupListOverLimit;
    NSMutableArray *m_needUploadMd5List;
}

+ (id)Instance;
+ (id)getSavePath;
+ (id)getSaveRootDir;
+ (void)initialize;
- (void).cxx_destruct;
- (void)addNeedUploadMd5List:(id)arg1;
- (id)getNeedUploadMd5;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
@property(nonatomic) _Bool m_hasBatchBackup; // @synthesize m_hasBatchBackup;
@property(retain, nonatomic) NSMutableArray *m_needUploadMd5List; // @synthesize m_needUploadMd5List;
@property(nonatomic) _Bool m_serverBackupListOverLimit; // @synthesize m_serverBackupListOverLimit;
- (void)removeMd5:(id)arg1;
- (void)saveToFile;
- (void)setAllMd5NeedUpload;
- (void)setNoNeedUploadMd5:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
