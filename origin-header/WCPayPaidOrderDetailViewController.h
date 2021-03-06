//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "IWCPayPaidOrderActivityMgrExt-Protocol.h"
#import "WCPayNewPaidOrderDetailViewDelegate-Protocol.h"
#import "WCPayPaidDetailQueryAwardCgiDelegate-Protocol.h"

@class MMUILabel, MMWebImageView, NSMutableArray, NSMutableDictionary, NSString, RichTextView, UIButton, UIView, WCPayNewPaidOrderDetailView, WCPayPaidDetailQueryAwardCgi;
@protocol WCPayPaidOrderDetailViewControllerDelegate;

@interface WCPayPaidOrderDetailViewController : WCPayBaseViewController <WCPayPaidDetailQueryAwardCgiDelegate, WCPayNewPaidOrderDetailViewDelegate, ILinkEventExt, IWCPayPaidOrderActivityMgrExt>
{
    id <WCPayPaidOrderDetailViewControllerDelegate> m_delegate;
    NSString *m_nsCompleteBtnTitle;
    NSString *m_nsCommondTip;
    NSMutableArray *m_arrActivityUrl;
    NSMutableDictionary *m_dicSubscribeSelectedStatus;
    _Bool m_bHandlePoped;
    UIView *m_bottomLogoView;
    RichTextView *richTextView;
    NSString *m_statLinkActivityName;
    _Bool m_bHadStatExpourse;
    _Bool m_bIsNativeRequestReward;
    int nativeRewardResult;
    NSString *nativeResultBtnText;
    _Bool _bNeedQueryActivityAward;
    _Bool _bNeedQueryActivityInNewDetailView;
    _Bool _bHasOpenTinyAppActivity;
    _Bool _bIsQueryingTinyAppActivityAward;
    long long _curActivityBtnTag;
    NSMutableArray *_activityCellInfoArray;
    NSMutableArray *_activityH5AwardIdArray;
    WCPayPaidDetailQueryAwardCgi *_queryAwardCgi;
    WCPayNewPaidOrderDetailView *_paidOrderDetailViewNew;
    NSString *_subscribeBrandUsrname;
    MMWebImageView *_tinyAppActivityImgView;
    UIButton *_tinyAppActivityBtn;
    MMUILabel *_tinyAppActivityTitleLabel;
    MMUILabel *_tinyAppActivityDescLabel;
}

- (void).cxx_destruct;
- (void)BackHistoryOrderDetail;
- (void)OnActivityBtnDone:(id)arg1;
- (void)OnHistoryOrderDetailBack;
- (void)OnNativeActivityBtnClick:(id)arg1;
- (void)OnNextStepBack;
- (void)OnRealnameVerifyCancelNotification:(id)arg1;
- (void)OnRealnameVerifySuccessNotification:(id)arg1;
- (void)OnSelectedAppInfo:(id)arg1;
@property(retain, nonatomic) NSMutableArray *activityCellInfoArray; // @synthesize activityCellInfoArray=_activityCellInfoArray;
@property(retain, nonatomic) NSMutableArray *activityH5AwardIdArray; // @synthesize activityH5AwardIdArray=_activityH5AwardIdArray;
- (void)addBottomLogo;
@property(nonatomic) _Bool bHasOpenTinyAppActivity; // @synthesize bHasOpenTinyAppActivity=_bHasOpenTinyAppActivity;
@property(nonatomic) _Bool bIsQueryingTinyAppActivityAward; // @synthesize bIsQueryingTinyAppActivityAward=_bIsQueryingTinyAppActivityAward;
@property(nonatomic) _Bool bNeedQueryActivityAward; // @synthesize bNeedQueryActivityAward=_bNeedQueryActivityAward;
@property(nonatomic) _Bool bNeedQueryActivityInNewDetailView; // @synthesize bNeedQueryActivityInNewDetailView=_bNeedQueryActivityInNewDetailView;
@property(nonatomic) long long curActivityBtnTag; // @synthesize curActivityBtnTag=_curActivityBtnTag;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)getActivityCellInfoByBtnTag:(long long)arg1;
- (id)getActivityInfoByAwardId:(unsigned long long)arg1;
- (id)getFavView;
- (id)getFirstOrderDetail;
- (id)getFlowImageViewWithOrigin:(struct CGPoint)arg1;
- (id)getHeaderView;
- (id)getLinkActivityCell:(id)arg1;
- (id)getOrderDetailByAwardId:(unsigned long long)arg1;
- (id)getOrderDetailView:(id)arg1;
- (id)getPaidSuccessView;
- (id)init;
- (void)initNavigationBar;
- (void)internalBackHistoryOrderDetail;
- (void)makeActivityCellInfo:(id)arg1 CellInfo:(id)arg2;
- (void)makeLinkActivityCellInfo:(id)arg1 CellInfo:(id)arg2;
- (void)makeSubscribeCellInfo:(id)arg1 CellInfo:(id)arg2;
- (void)makeTinyAppActivityInfoCellInfo:(id)arg1 CellInfo:(id)arg2;
- (void)makeTinyAppInfoCellInfo:(id)arg1 CellInfo:(id)arg2;
- (void)onGetTinyAppActivityQueryAwardResp:(id)arg1;
- (void)onGetWCPaidDetailQueryAwardCgiResp:(id)arg1;
- (void)onH5ActivityRespBack:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onNativeActivityRespBack:(id)arg1;
- (void)onNewDetailViewClickH5Activity:(id)arg1;
- (void)onNewDetailViewClickH5ActivityOpenWithTinyAppUsername:(id)arg1 tinyAppPath:(id)arg2;
- (void)onNewDetailViewClickNativeActicity;
- (void)onNewDetailViewClickTinyAppActivityWithTinyAppUsername:(id)arg1 tinyAppPath:(id)arg2;
- (void)onNewDetailViewDoneBtnClickWithBrandUsername:(id)arg1;
- (void)onNewDetailViewOpenTinyAppWithTinyAppUsername:(id)arg1 tinyAppPath:(id)arg2;
- (void)onPayPaidOrderActivityChanged;
- (void)onTinyAppActivityBtnClick;
- (void)openTinyAppWithUsername:(id)arg1 path:(id)arg2 fromScene:(unsigned long long)arg3;
@property(retain, nonatomic) WCPayNewPaidOrderDetailView *paidOrderDetailViewNew; // @synthesize paidOrderDetailViewNew=_paidOrderDetailViewNew;
@property(retain, nonatomic) WCPayPaidDetailQueryAwardCgi *queryAwardCgi; // @synthesize queryAwardCgi=_queryAwardCgi;
- (void)queryH5ActivityAwardStatusIfNeed;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadTableView;
- (void)reportClickTinyAppActivity;
- (void)reportNewDetailViewClickH5Activity;
- (void)reportOrderDetailViewData;
- (void)sendQueryTinyAppActivityAwardRequest;
- (void)setCompleteBtnTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
@property(retain, nonatomic) NSString *subscribeBrandUsrname; // @synthesize subscribeBrandUsrname=_subscribeBrandUsrname;
@property(retain, nonatomic) UIButton *tinyAppActivityBtn; // @synthesize tinyAppActivityBtn=_tinyAppActivityBtn;
@property(retain, nonatomic) MMUILabel *tinyAppActivityDescLabel; // @synthesize tinyAppActivityDescLabel=_tinyAppActivityDescLabel;
@property(retain, nonatomic) MMWebImageView *tinyAppActivityImgView; // @synthesize tinyAppActivityImgView=_tinyAppActivityImgView;
@property(retain, nonatomic) MMUILabel *tinyAppActivityTitleLabel; // @synthesize tinyAppActivityTitleLabel=_tinyAppActivityTitleLabel;
- (void)showBizSafeTitle:(_Bool)arg1;
- (void)tinyAppInfoClick;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

