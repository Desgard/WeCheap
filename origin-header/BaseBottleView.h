//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class BottleAnimation, BottleTipView, UIView;
@protocol CanvasManagerDelegate><NSObject;

@interface BaseBottleView : MMUIView
{
    _Bool mIsShow;
    UIView *mCanvasView;
    id <CanvasManagerDelegate><NSObject> delegate;
    BottleTipView *mBottleTipView;
    BottleAnimation *mBottleAnimation;
}

- (void).cxx_destruct;
- (id)NavigationController;
- (_Bool)animationHasSetting;
- (_Bool)canvasHasSetting;
- (void)clearCanvas;
- (void)copyTo:(id)arg1;
- (void)darkenCanvasAnimated:(_Bool)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <CanvasManagerDelegate><NSObject> delegate; // @synthesize delegate;
- (void)disableTouch;
- (void)doBrandUserAnimation;
- (void)doFishAudioAnimation;
- (void)doFishFailAnimation;
- (void)doFishTextAnimation;
- (void)doFishingAnimation;
- (void)doSuckAudioAnimation;
- (void)doSuckTextAnimation;
- (void)doThrowAudioAnimation;
- (void)doThrowTextAnimation;
- (void)drawOnCanvas;
- (void)enableTouch;
- (void)hideAllAnimationView;
- (void)hideCanvasBottomBar;
- (void)hideCanvasTopBar;
- (void)hideOnCanvas;
- (id)init;
- (id)initWithCanvas:(id)arg1;
- (_Bool)isAnimationFinish;
- (_Bool)isShow;
@property(retain, nonatomic) BottleAnimation *mBottleAnimation; // @synthesize mBottleAnimation;
@property(retain, nonatomic) BottleTipView *mBottleTipView; // @synthesize mBottleTipView;
@property(retain, nonatomic) UIView *mCanvasView; // @synthesize mCanvasView;
- (void)removeFromCanvas;
- (void)resetAnimationStatus;
- (void)setBottleAnimation:(id)arg1;
- (void)setBottleAnimationDelegate:(id)arg1;
- (void)setBottleTipView:(id)arg1;
- (void)setBottleTipViewDelegate:(id)arg1;
- (void)showCanvasBottomBar;
- (void)showCanvasTopBar;
- (void)showTipViewWithButtonTitle:(id)arg1 andMessage:(id)arg2;
- (void)showTipViewWithLeftButtonTitle:(id)arg1 andRightButtonTitle:(id)arg2 andMessage:(id)arg3;
- (void)showWarningTipView:(id)arg1;
- (void)showWarningTipViewNoConfirm:(id)arg1;
- (void)showWarningTipViewNoHide:(id)arg1;
- (void)spotLightCanvasAnimated:(_Bool)arg1;
- (_Bool)tipViewHasSetting;
- (void)unDarkenCanvasAnimated:(_Bool)arg1;
- (void)unSpotLightCanvasAnimated:(_Bool)arg1;

@end

