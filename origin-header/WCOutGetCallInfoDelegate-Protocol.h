//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GetWCOCallInfoRequest, GetWCOCallInfoResponse;

@protocol WCOutGetCallInfoDelegate <NSObject>
- (void)GetCallInfoResponse:(int)arg1 Request:(GetWCOCallInfoRequest *)arg2 Response:(GetWCOCallInfoResponse *)arg3;
@end

