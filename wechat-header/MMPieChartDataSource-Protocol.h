//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMPieChartView, UIColor;

@protocol MMPieChartDataSource <NSObject>
- (unsigned long long)numberOfPiesInChart:(MMPieChartView *)arg1;
- (double)pieChart:(MMPieChartView *)arg1 valueForPieAtIndex:(unsigned long long)arg2;

@optional
- (UIColor *)pieChart:(MMPieChartView *)arg1 colorForPieAtIndex:(unsigned long long)arg2;
- (double)pieChart:(MMPieChartView *)arg1 radiuForPieAtIndex:(unsigned long long)arg2;
@end
