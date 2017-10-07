//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class UIImageView, UIView;
@protocol FaceRecogRectViewDelegate;

@interface FaceRecogRectView : MMUIView
{
    UIImageView *_greenFrameView;
    UIImageView *_netView;
    UIImageView *_greenScanView;
    UIView *_topLeftView;
    UIView *_rightTopView;
    UIView *_leftBottomView;
    UIView *_bottomRightView;
    _Bool _isDoingAnimations;
    id <FaceRecogRectViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <FaceRecogRectViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isDoingAnimations; // @synthesize isDoingAnimations=_isDoingAnimations;
- (void)playCatchFaceAnimation;
- (void)playCatchedFaceAnimation;
- (void)resetView;

@end
