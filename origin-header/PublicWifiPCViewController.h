//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "IPublicWifiManagerExt-Protocol.h"
#import "PublicWifiPCLogicDelegate-Protocol.h"

@class MMScrollView, MMWebImageView, NSString, PublicWifiPCLogic, RichTextView, UIActivityIndicatorView, UIButton, UILabel;

@interface PublicWifiPCViewController : MMUIViewController <IPublicWifiManagerExt, ILinkEventExt, PublicWifiPCLogicDelegate>
{
    _Bool _isGuideViewShowed;
    unsigned int _shopid;
    NSString *_ticket;
    NSString *_appid;
    PublicWifiPCLogic *_pcLogic;
    MMScrollView *_scrollView;
    MMWebImageView *_brandImage;
    UILabel *_brandNameLbl;
    UILabel *_ssidLbl;
    UILabel *_failedLbl;
    UIButton *_confirmBtn;
    UIButton *_connectingBtn;
    UIActivityIndicatorView *_loadingView;
    RichTextView *_helpTextView;
    UILabel *_phoneNumNoticeLbl;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(retain, nonatomic) MMWebImageView *brandImage; // @synthesize brandImage=_brandImage;
@property(retain, nonatomic) UILabel *brandNameLbl; // @synthesize brandNameLbl=_brandNameLbl;
- (void)buttonPressed:(id)arg1;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIButton *connectingBtn; // @synthesize connectingBtn=_connectingBtn;
- (void)didGetPcFrontPage:(id)arg1 headimg:(id)arg2;
- (void)didNetWorkError:(id)arg1 errMsg:(id)arg2;
- (void)didSetUserInfo;
- (void)doBack;
@property(retain, nonatomic) UILabel *failedLbl; // @synthesize failedLbl=_failedLbl;
- (id)genConnecttingButton;
- (id)genPhoneNumNoticeTbl;
- (id)genRichTextView;
- (id)getParamValueFromUrl:(id)arg1 withKey:(id)arg2;
@property(retain, nonatomic) RichTextView *helpTextView; // @synthesize helpTextView=_helpTextView;
- (void)initViewForPc;
- (id)initWithMpUrl:(id)arg1;
@property(nonatomic) _Bool isGuideViewShowed; // @synthesize isGuideViewShowed=_isGuideViewShowed;
- (void)layout;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
@property(retain, nonatomic) PublicWifiPCLogic *pcLogic; // @synthesize pcLogic=_pcLogic;
@property(retain, nonatomic) UILabel *phoneNumNoticeLbl; // @synthesize phoneNumNoticeLbl=_phoneNumNoticeLbl;
@property(retain, nonatomic) MMScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property unsigned int shopid; // @synthesize shopid=_shopid;
@property(retain, nonatomic) UILabel *ssidLbl; // @synthesize ssidLbl=_ssidLbl;
@property(copy, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
- (void)start;
- (_Bool)useTransparentNavibar;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

