//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QDataSourceBase.h"

@protocol QDataCacheProtocol;

@interface QDataSourceStandard : QDataSourceBase
{
}

+ (id)dataSourceStandard:(id)arg1;
+ (id)dataSourceStandard:(id)arg1 version:(id)arg2;
- (_Bool)shouldCollectRequestTime;
- (id)tilePath:(CDStruct_43274f37)arg1 info:(id)arg2;
- (double)tileSize;
- (int)tileType;

// Remaining properties
@property(retain, nonatomic) id <QDataCacheProtocol> dataCache;

@end

