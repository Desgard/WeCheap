//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "IGroupMgrExt-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "contactVerifyLogicDelegate-Protocol.h"

@class CContactVerifyLogic, MMLoadingView, NSDictionary, NSMutableArray, NSString, UIView;
@protocol ContactsCreateChatRoomLogicDelegate;

@interface ContactsCreateChatRoomLogic : MMObject <contactVerifyLogicDelegate, IGroupMgrExt, UIAlertViewDelegate>
{
    NSDictionary *m_dicMultiSelect;
    UIView *m_ParentView;
    MMLoadingView *m_loadingView;
    id <ContactsCreateChatRoomLogicDelegate> m_Delegate;
    unsigned int m_uiUseChatState;
    CContactVerifyLogic *m_oContactVerifyLogic;
    NSMutableArray *m_arrNeedVerifyUsrName;
}

- (void).cxx_destruct;
- (void)OnCreateGroup:(id)arg1 withStatus:(int)arg2 resp:(id)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)contactVerifyOk:(id)arg1 opCode:(unsigned int)arg2;
- (_Bool)createChatRoom;
- (id)genErrorString:(id)arg1 needVerify:(_Bool *)arg2;
- (id)genMemerList;
- (id)getErrorContactName:(id)arg1;
- (id)init;
@property(nonatomic) __weak id <ContactsCreateChatRoomLogicDelegate> m_Delegate; // @synthesize m_Delegate;
@property(nonatomic) unsigned int m_uiUseChatState; // @synthesize m_uiUseChatState;
- (void)reset;
- (_Bool)start:(id)arg1 parentView:(id)arg2;
- (void)startLoading;
- (void)stopLoading;
- (void)verifyContact;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

