//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface ExtDeviceLoginConfirmOKRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *loginUrl; // @dynamic loginUrl;
@property(retain, nonatomic) NSString *sessionList; // @dynamic sessionList;
@property(nonatomic) _Bool syncMsg; // @dynamic syncMsg;
@property(retain, nonatomic) NSMutableArray *unReadChatContactList; // @dynamic unReadChatContactList;

@end
