//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CBaseContact, CContact, MMUIViewController, UITableViewCell;

@protocol RoomContactSelectDelegate <NSObject>

@optional
- (void)didClickDelContact:(CBaseContact *)arg1;
- (void)didReloadMemData;
- (void)didSelectContact:(CBaseContact *)arg1;
- (MMUIViewController *)getViewController;
- (void)makeCell:(UITableViewCell *)arg1 contact:(CContact *)arg2;
- (void)onCancelSelectContact;
- (void)roomContactSearchBarDidBecomeFirstResponse;
@end

