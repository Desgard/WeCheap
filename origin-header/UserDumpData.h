//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSData;

@interface UserDumpData : MMObject
{
    unsigned int compressedBufSize;
    NSData *data;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) unsigned int compressedBufSize; // @synthesize compressedBufSize;
@property(retain, nonatomic) NSData *data; // @synthesize data;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

@end
