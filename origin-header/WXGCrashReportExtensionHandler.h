//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WXGCrashReportExtensionHandler : NSObject
{
}

+ (id)shareInstance;
- (void)addLogInfo:(struct XLoggerInfo_t)arg1 withMessage:(const char *)arg2;
- (void)dealloc;
- (char *)formateLog:(const char *)arg1 withLogInfo:(struct XLoggerInfo_t)arg2;
- (void)freeLastSceneArray;
- (void)freeLogCycleArray;
- (id)init;
- (void)p_setCurrentUserName:(id)arg1;
- (void)renewHeavyUserType;
- (void)resetLogCycleArray;
- (void)resetSceneArray;
- (void)setBlockTime:(unsigned long long)arg1;
- (void)setCurrentUin:(unsigned long long)arg1 andUsrName:(id)arg2;
- (void)setDumpType:(unsigned long long)arg1;
- (void)setLastScene:(id)arg1;
- (void)setUsrName;

@end

