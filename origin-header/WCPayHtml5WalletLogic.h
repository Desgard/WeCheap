//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "MMWebViewDelegate-Protocol.h"
#import "WCPayLoadingViewControllerDelegate-Protocol.h"

@class NSString;

@interface WCPayHtml5WalletLogic : WCPayControlLogic <WCPayLoadingViewControllerDelegate, MMWebViewDelegate>
{
}

- (void)didFail;
- (void)getWalletUrl;
- (void)loadingViewControllerDidBack:(id)arg1;
- (void)showErrorAlert;
- (void)showLoadingViewController;
- (void)showWebViewControllerWithURL:(id)arg1 animated:(_Bool)arg2;
- (void)startLogic;
- (void)webViewReturn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

