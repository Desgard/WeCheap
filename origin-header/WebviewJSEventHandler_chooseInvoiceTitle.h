//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "IMyInvoiceLogicMgrExt-Protocol.h"
#import "IWebviewAskAuthorizationLogicExt-Protocol.h"
#import "MyInvoiceInfoViewControllerDelegate-Protocol.h"
#import "MyInvoiceListViewControllerDelegate-Protocol.h"

@class JSEvent, NSString;

@interface WebviewJSEventHandler_chooseInvoiceTitle : WebviewJSEventHandlerBase <IMyInvoiceLogicMgrExt, MyInvoiceListViewControllerDelegate, MyInvoiceInfoViewControllerDelegate, IWebviewAskAuthorizationLogicExt>
{
    JSEvent *_jsEvent;
}

- (void).cxx_destruct;
- (void)OnAskAuthorizationFailure:(id)arg1 ForAuthInfo:(id)arg2;
- (void)OnAskAuthorizationSuccessForAuthInfo:(id)arg1;
- (void)OnGetInvoiceRet:(_Bool)arg1 andResult:(id)arg2 fromScene:(unsigned int)arg3;
- (void)OnJsapiAddInvoiceCancel;
- (void)OnJsapiAddInvoiceFail;
- (void)OnJsapiAddInvoiceSuccess:(id)arg1;
- (void)chooseFailed;
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)init;
- (void)onChooseCancel;
- (void)onChooseSuccess:(id)arg1;
- (void)startInvoice;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

