//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class MMLoadingView;

@interface WXGClearCacheUIViewController : MMUIViewController
{
    unsigned int _cacheMask;
    MMLoadingView *_loadingView;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int cacheMask; // @synthesize cacheMask=_cacheMask;
- (void)didReceiveMemoryWarning;
- (id)initWithCacheMask:(unsigned int)arg1;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
- (void)viewDidLoad;

@end
