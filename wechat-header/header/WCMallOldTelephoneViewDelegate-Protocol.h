//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCMallOldTelephoneViewDelegate <NSObject>
- (unsigned int)GetNumberOfOldTelephoneListCount;
- (NSString *)GetOldTelephoneNumber:(unsigned int)arg1;
- (NSString *)GetOldTelephoneOperatorName:(unsigned int)arg1;
- (NSString *)GetOldTelephoneOwnerName:(unsigned int)arg1;
- (void)OnClickWCMallOldTelephoneCell:(unsigned int)arg1;
- (void)OnClickWCMallOldTelephoneClearButton;
- (void)onTapBackgrounView;
@end
