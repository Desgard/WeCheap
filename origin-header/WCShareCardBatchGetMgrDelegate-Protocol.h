//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol WCShareCardBatchGetMgrDelegate <NSObject>

@optional
- (void)onBatchGetEnd:(unsigned int)arg1;
- (void)onBatchGetShareCardList:(NSArray *)arg1 ErrCode:(int)arg2;
@end
