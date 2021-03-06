//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EmoticonCustomManageAddLogicDelegate-Protocol.h"
#import "IMsgRevokeExt-Protocol.h"
#import "MMImgageBrowseViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class CMessageWrap, EmoticonCustomManageAddLogic, MMImageBrowseView, NSString, UIButton, UIView, WCActionSheet;

@interface AppEmoticonPreviewViewController : MMUIViewController <WCActionSheetDelegate, EmoticonCustomManageAddLogicDelegate, MMImgageBrowseViewDelegate, IMsgRevokeExt, UIAlertViewDelegate>
{
    MMImageBrowseView *m_imageView;
    UIButton *m_srcBtn;
    NSString *username;
    CMessageWrap *msgWrap;
    id singleTapOnNav;
    WCActionSheet *m_actionSheet;
    UIView *_bkgView;
    EmoticonCustomManageAddLogic *_addEmoticonLogic;
}

- (void).cxx_destruct;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2 SysMsg:(id)arg3;
@property(retain, nonatomic) UIView *_bkgView; // @synthesize _bkgView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addBackgroundView;
@property(retain, nonatomic) EmoticonCustomManageAddLogic *addEmoticonLogic; // @synthesize addEmoticonLogic=_addEmoticonLogic;
- (void)addNvGestureRecognizer;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (id)init;
- (void)initBottomView;
- (void)initDownloadedView;
- (_Bool)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (void)launch:(id)arg1;
@property(retain, nonatomic) WCActionSheet *m_actionSheet; // @synthesize m_actionSheet;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap;
- (void)onLongPressRightNavigationButton:(id)arg1;
- (void)onOperate:(id)arg1;
- (void)onReturn;
- (void)onSaveEmoticon:(id)arg1;
- (void)onSingleTapImageBrowseView;
- (void)onSingleTapOnNavigationBar:(id)arg1;
- (void)removeNvGestureRecognizer;
- (void)setFullScreen:(_Bool)arg1;
@property(retain, nonatomic) id singleTapOnNav; // @synthesize singleTapOnNav;
@property(retain, nonatomic) NSString *username; // @synthesize username;
- (void)showStatusBar;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateEmoticonView;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

