//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "MMResourceMgrExt-Protocol.h"

@class MMStaticResourcePatchConfig, NSMutableDictionary, NSRecursiveLock, NSString;

@interface MMStaticResourcePatchMgr : MMObject <MMResourceMgrExt>
{
    _Bool m_isServiceInit;
    NSMutableDictionary *m_resouceMapping;
    NSRecursiveLock *m_lock;
    MMStaticResourcePatchConfig *m_patchConfig;
}

+ (id)GetStaticResouceBundleDir;
+ (id)GetStaticResouceImageDir;
+ (id)GetStaticResourceConfigPath;
+ (id)GetStaticResourceDir;
+ (id)GetStaticResourceRootDir;
+ (id)GetStaticResourceUnzipTempDirPath;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)cleanOldResource;
- (void)clearResVersion;
- (void)dealloc;
- (void)deleteStaticResource;
- (void)exitOnEnteringBackground;
- (id)getBundleResource:(id)arg1 ext:(id)arg2;
- (id)getImageResource:(id)arg1;
- (id)init;
- (void)loadPatchResource;
@property(nonatomic) _Bool m_isServiceInit; // @synthesize m_isServiceInit;
@property(retain, nonatomic) NSRecursiveLock *m_lock; // @synthesize m_lock;
@property(retain, nonatomic) MMStaticResourcePatchConfig *m_patchConfig; // @synthesize m_patchConfig;
@property(retain, nonatomic) NSMutableDictionary *m_resouceMapping; // @synthesize m_resouceMapping;
- (unsigned int)newClientVersion;
- (void)onResDeleteFinishWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (id)parseBundleResource:(id)arg1;
- (id)parseImageResource:(id)arg1;
- (void)registerExtension;
- (void)reportIDKeyData:(unsigned int)arg1 key:(unsigned int)arg2;
- (void)setNewResClientVersion:(unsigned int)arg1;
- (void)updateStaticResource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

