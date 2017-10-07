//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CMessageDB, CMessageWrap, ImageInfo, NSData, NSString, UIImage;
@protocol MessageWrapImgDelegate;

@protocol IMsgExtendOperation <NSObject>
- (id)copy;
@property(nonatomic) CMessageWrap *m_refMessageWrap;

@optional
- (void)ChangeForBackup;
- (void)ChangeForDisplay;
- (void)ChangeForDisplayAnyhow;
- (void)ChangeForSimpleMsgInfo;
- (NSString *)GetContent;
- (unsigned int)GetContentAttributeBitSetFlag;
- (NSString *)GetDisplayContent;
- (NSString *)GetDisplaySessionContent;
- (NSString *)GetDownloadThumbPath;
- (_Bool)GetDownloadThumbStatus:(unsigned int *)arg1;
- (NSString *)GetGameStatReportString;
- (unsigned int)GetPreviewType;
- (NSString *)GetThumbPath;
- (_Bool)IsDownloadEnded;
- (_Bool)IsHDImg;
- (_Bool)IsPlaySounded;
- (_Bool)IsRecording;
- (_Bool)IsUnPlayed;
- (_Bool)SaveMesVoice:(NSString *)arg1;
- (void)SetOriginal:(_Bool)arg1;
- (void)SetPlaySounded:(_Bool)arg1;
- (void)SetPlayed;
- (void)UpdateContent:(NSString *)arg1;
- (void)UpdateGameInfo:(NSString *)arg1;
- (void)UpdateMassSendContent:(NSString *)arg1;
- (void)UpdateVideoStatus:(CMessageDB *)arg1;
- (_Bool)genImageFromMMAssetAndNotify:(id <MessageWrapImgDelegate>)arg1;
- (NSString *)getFileExt;
- (_Bool)isShowAppBottomButton;
- (_Bool)isShowAppMessageBlockButton;
- (void)setImage:(UIImage *)arg1 isLongOriginImage:(_Bool)arg2;
- (void)setImage:(UIImage *)arg1 withData:(NSData *)arg2 isLongOriginImage:(_Bool)arg3;
- (void)setImage:(UIImage *)arg1 withData:(NSData *)arg2 withImageInfo:(ImageInfo *)arg3 isLongOriginImage:(_Bool)arg4;
- (void)setImage:(UIImage *)arg1 withImageInfo:(ImageInfo *)arg2 isLongOriginImage:(_Bool)arg3;
@end
