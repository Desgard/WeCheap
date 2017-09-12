//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBizControlLogic.h"

#import "WCAddressLogicMgrExt-Protocol.h"
#import "WCBaseControlMgrExt-Protocol.h"

@class NSString, WCAddressControlData, WCAddressControlLogic;

@interface WCAddressGetAddressControlLogic : WCBizControlLogic <WCAddressLogicMgrExt, WCBaseControlMgrExt>
{
    WCAddressControlData *m_data;
    WCAddressControlLogic *m_oWCAddressControlLogic;
    int m_eWCAddressGetAddressControlLogicSituation;
}

- (void).cxx_destruct;
- (void)EndWCAddressGetAddressControlLogic;
- (void)OnGetLatestAddress:(id)arg1 UserName:(id)arg2 NickName:(id)arg3 Error:(id)arg4;
- (void)OnPreFinishedWCAddressLogic:(id)arg1 waitUntilDone:(_Bool *)arg2;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 Situation:(int)arg2;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)startLogic;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
