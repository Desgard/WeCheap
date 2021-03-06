//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class MMTableView, MMUILabel, NSTimer, UIButton, UIImageView, UILabel;

@interface WCSettingUpdateTipsViewController : MMUIViewController
{
    MMTableView *_mainTableView;
    UIButton *moreInfoButton;
    UIImageView *watchFace;
    MMUILabel *tip2Label;
    UILabel *_timeLabel;
    NSTimer *_timeLabelTimer;
}

- (void).cxx_destruct;
- (id)init;
- (void)initUI;
- (void)initWatchFaceUI:(id)arg1;
- (id)makeTableHeaderView;
- (void)refreshTimeLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) NSTimer *timeLabelTimer; // @synthesize timeLabelTimer=_timeLabelTimer;
- (void)showTipsViewAction;
- (void)startAnimationWithCircle1:(id)arg1 andContact1:(id)arg2 andMessageLabel:(id)arg3 circle2:(id)arg4 andContact2:(id)arg5 circle3:(id)arg6 andContact3:(id)arg7;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

@end

