//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSContextPluginBase.h"

@class NSMutableArray;

@interface WAJSContextPlugin_DelayToForeground : WAJSContextPluginBase
{
    NSMutableArray *_delayPerformArr;
}

- (void).cxx_destruct;
- (void)addDelayJSAPIHandler:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSMutableArray *delayPerformArr; // @synthesize delayPerformArr=_delayPerformArr;
- (void)execute;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (id)init;

@end

