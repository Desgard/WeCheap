//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@interface FavoritesRecordUtil : MMObject
{
}

+ (id)ConvertFavData2FavItem:(id)arg1;
+ (id)ConvertFileFavData2MsgWrap:(id)arg1;
+ (id)ConvertFileMsg2FavData:(id)arg1;
+ (id)ConvertImgMsg2FavData:(id)arg1;
+ (id)ConvertImgRecorData2MsgWrap:(id)arg1;
+ (id)ConvertImgRecordData2WCUploadTask:(id)arg1;
+ (id)ConvertLocFavData2MsgWrap:(id)arg1;
+ (id)ConvertLocationMsg2FavData:(id)arg1;
+ (id)ConvertMallProductMsg2FavData:(id)arg1;
+ (id)ConvertMsg2FavData:(id)arg1 forFav:(_Bool)arg2;
+ (id)ConvertMsgList2MsgWrap:(id)arg1;
+ (id)ConvertMusicMsg2FavData:(id)arg1;
+ (id)ConvertProductMsg2FavData:(id)arg1;
+ (id)ConvertReaderWrap2FavData:(id)arg1;
+ (id)ConvertRecordFavItem2MsgWrap:(id)arg1;
+ (id)ConvertRecordMsg2FavData:(id)arg1;
+ (id)ConvertShareCardMsg2FavData:(id)arg1;
+ (id)ConvertShortVideoMsg2FavData:(id)arg1;
+ (id)ConvertSightFavData2MsgWrap:(id)arg1;
+ (id)ConvertTVMsg2FavData:(id)arg1;
+ (id)ConvertTextMsg2FavData:(id)arg1;
+ (id)ConvertUrlMsg2FavData:(id)arg1;
+ (id)ConvertVideoFavData2VideoInfo:(id)arg1;
+ (id)ConvertVideoMsg2FavData:(id)arg1;
+ (id)ConvertVoiceMsg2FavData:(id)arg1;
+ (id)GetFavDataItemSourceByMsg:(id)arg1;
+ (id)GetFavDataItemSourceByMsg:(id)arg1 AndReader:(id)arg2;
+ (id)GetFavDetailTitle:(id)arg1;
+ (id)GetNoteDesc:(id)arg1;
+ (void)GetNoteTitleAndDesc:(id)arg1 toTitle:(id *)arg2 toDesc:(id *)arg3;
+ (id)GetRecordDataDesc:(id)arg1;
+ (id)GetRecordDataNameByMsg:(id)arg1;
+ (id)GetRecordDataTimeByMsg:(id)arg1;
+ (id)GetRecordDesc:(id)arg1;
+ (id)GetRecordForwardReportInfo:(id)arg1;
+ (id)GetRecordForwardTitle:(id)arg1;
+ (id)GetRecordForwardTitleByUser:(id)arg1 brand:(id)arg2;
+ (id)GetRecordInfo:(id)arg1;
+ (id)GetRecordRealChatNameByMsg:(id)arg1;
+ (void)GetTextTitleAndDesc:(id)arg1 toTitle:(id *)arg2 toDesc:(id *)arg3;
+ (id)genNoteConflictTitle:(id)arg1 atTime:(unsigned int)arg2;
+ (id)getContactDisplayName:(id)arg1;
+ (id)getContactHeadImage:(id)arg1;
+ (id)getContactNickName:(id)arg1;
+ (id)getGroupDispName:(id)arg1 NeedSelf:(_Bool)arg2;
+ (id)getMessageWrapTitleFromMsgList:(id)arg1;
+ (id)getWebpageFavDataUrl:(id)arg1;

@end

