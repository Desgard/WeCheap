//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GameCenterBaseMsg.h"

@class GameCenterMsgActionInfo, GameCenterMsgAppInfo, GameCenterMsgBubbleInfoOld, GameCenterMsgControlInfo, NSString;

@interface GameCenterOldBaseMsg : GameCenterBaseMsg
{
    NSString *_noticeId;
    GameCenterMsgAppInfo *_appInfo;
    GameCenterMsgBubbleInfoOld *_bubbleInfoOld;
    GameCenterMsgControlInfo *_controlInfo;
    NSString *_formatContent;
    NSString *_url;
    GameCenterMsgActionInfo *_actionInfo;
}

+ (id)parseFromDbItem:(id)arg1;
+ (id)parseFromMsgWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) GameCenterMsgActionInfo *actionInfo; // @synthesize actionInfo=_actionInfo;
@property(retain, nonatomic) GameCenterMsgAppInfo *appInfo; // @synthesize appInfo=_appInfo;
- (id)appid;
@property(retain, nonatomic) GameCenterMsgBubbleInfoOld *bubbleInfoOld; // @synthesize bubbleInfoOld=_bubbleInfoOld;
@property(retain, nonatomic) GameCenterMsgControlInfo *controlInfo; // @synthesize controlInfo=_controlInfo;
- (unsigned int)createTime;
@property(retain, nonatomic) NSString *formatContent; // @synthesize formatContent=_formatContent;
- (id)getMsgCardInfo;
- (id)getMsgCenterContent;
- (int)getMsgReportType;
- (id)getNoticeid;
- (id)getNotifyContent;
- (id)getSourceInfo;
- (id)initWithXmlNode:(struct XmlReaderNode_t *)arg1;
- (_Bool)isExpired;
- (_Bool)notInMsgCenter;
@property(retain, nonatomic) NSString *noticeId; // @synthesize noticeId=_noticeId;
- (id)parseBubbleInfoOld:(struct XmlReaderNode_t *)arg1;
- (id)parseEntranceInfoOld:(struct XmlReaderNode_t *)arg1;
- (id)parseFloatLayerInfoOld:(struct XmlReaderNode_t *)arg1;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (id)transBubbleInfo:(id)arg1;

@end
