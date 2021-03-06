//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "IMsgExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface DisasterNoticeMgr : MMService <PBMessageObserverDelegate, IMsgExt, MMService>
{
    _Bool m_isGettingDisasterInfo;
    NSMutableDictionary *m_dicSvrErrorInfo;
    NSMutableDictionary *m_dictBannerInfos;
    NSMutableDictionary *m_dictCloseTime;
    unsigned int m_manualAuthNoticeId;
}

- (void).cxx_destruct;
- (void)HandleXmlMessage:(id)arg1;
- (void)MainThreadNotifyIDCErrorMsg:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)SaveData;
- (void)closeDisasterInfoByNoticeId:(id)arg1;
- (void)dealloc;
- (void)getDisasterInfo:(unsigned int)arg1;
- (id)getDisasterInfoByPosition:(id)arg1;
- (void)handleDisasterInfo:(id)arg1;
- (_Bool)hasNotice;
- (void)makeSureInit;
- (void)onManualAuthError:(id)arg1;
- (void)onNewIDCError:(id)arg1;
- (void)onServiceInit;
- (void)removeExpireInfos;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

