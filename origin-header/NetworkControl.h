//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class NSString;

@interface NetworkControl : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int maxNoopInterval; // @dynamic maxNoopInterval;
@property(nonatomic) unsigned int minNoopInterval; // @dynamic minNoopInterval;
@property(nonatomic) int noopIntervalTime; // @dynamic noopIntervalTime;
@property(retain, nonatomic) NSString *portList; // @dynamic portList;
@property(retain, nonatomic) NSString *timeoutList; // @dynamic timeoutList;
@property(nonatomic) int typingInterval; // @dynamic typingInterval;

@end

