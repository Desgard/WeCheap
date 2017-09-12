//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol EnterpriseSearchDataControllerDelegate;

@interface EnterpriseSearchDataController : NSObject <PBMessageObserverDelegate>
{
    id <EnterpriseSearchDataControllerDelegate> _delegate;
    NSMutableDictionary *_dicLocalContact;
    NSMutableDictionary *_dicLocalGroup;
    NSMutableDictionary *_dicRemoteContactResult;
    NSString *_brandUserName;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
@property(readonly, nonatomic) NSString *brandUserName; // @synthesize brandUserName=_brandUserName;
- (void)clearSearchResult;
- (void)dealloc;
- (void)handleBizChatContactSearchResp:(id)arg1;
- (void)initData;
- (id)initWithBrandUserName:(id)arg1 delegate:(id)arg2;
- (id)localSearchWithKeyword:(id)arg1 range:(unsigned int)arg2;
- (_Bool)makeBizChatContactSearchReq:(id)arg1 offset:(unsigned int)arg2;
- (_Bool)remoteSearchMoreWithKeyword:(id)arg1 range:(unsigned int)arg2 error:(_Bool *)arg3;
- (id)remoteSearchResultWithKeyword:(id)arg1 range:(unsigned int)arg2;

@end
