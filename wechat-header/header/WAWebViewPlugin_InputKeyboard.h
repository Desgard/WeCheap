//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAWebViewPlugin_embedView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WATextInputDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, WACustomKeyboard, WAJSEventHandler_BaseEvent;
@protocol InputKeyboardDelegate, WATextInputInterface;

@interface WAWebViewPlugin_InputKeyboard : WAWebViewPlugin_embedView <UIGestureRecognizerDelegate, UIScrollViewDelegate, WATextInputDelegate>
{
    double _toolBarHeight;
    long long _orientation;
    NSMutableDictionary *_textInputs;
    double _keyboardHeight;
    _Bool _keyboardDidShow;
    _Bool _forceAdjustView;
    _Bool _viewDisappear;
    _Bool _canShowKeyboard;
    _Bool _hidding;
    double _offset;
    _Bool _modalMask;
    _Bool _durationSwith;
    _Bool _systemKeyboard;
    id <InputKeyboardDelegate> _inputDelegate;
    id <WATextInputInterface> _field;
    WACustomKeyboard *_customKeyboard;
    NSDictionary *_delayParam;
    WAJSEventHandler_BaseEvent *_handler;
}

- (void).cxx_destruct;
- (void)addNotifications;
- (void)adjustViewPosition:(_Bool)arg1;
@property(retain, nonatomic) WACustomKeyboard *customKeyboard; // @synthesize customKeyboard=_customKeyboard;
- (void)dealloc;
@property(retain, nonatomic) NSDictionary *delayParam; // @synthesize delayParam=_delayParam;
- (void)didHeightChange:(double)arg1 lineNum:(long long)arg2 input:(id)arg3;
- (void)didRotate:(id)arg1;
- (void)didValueChange:(id)arg1 pos:(long long)arg2 input:(id)arg3;
@property(nonatomic) _Bool durationSwith; // @synthesize durationSwith=_durationSwith;
- (void)enterBackground;
@property(retain, nonatomic) id <WATextInputInterface> field; // @synthesize field=_field;
- (long long)getConfirmButton:(id)arg1;
- (double)getContentHeight:(unsigned int)arg1;
- (long long)getLineCount:(unsigned int)arg1;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
@property(retain, nonatomic) WAJSEventHandler_BaseEvent *handler; // @synthesize handler=_handler;
- (void)hideKeyBoard:(_Bool)arg1;
@property(nonatomic) __weak id <InputKeyboardDelegate> inputDelegate; // @synthesize inputDelegate=_inputDelegate;
- (unsigned int)insertTextArea:(id)arg1;
- (_Bool)keyboardShowAnimating;
- (_Bool)keyboardVisible;
@property(nonatomic) _Bool modalMask; // @synthesize modalMask=_modalMask;
- (void)onCaretBreak;
- (void)onDeleteDrop:(id)arg1 input:(id)arg2;
- (void)onDone;
- (void)onFocus:(id)arg1;
- (void)onKeyboardDidHide:(id)arg1;
- (void)onKeyboardDidReady;
- (void)onKeyboardDidShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (_Bool)onReturn:(id)arg1;
- (void)onScrollViewDidEndScroll:(id)arg1;
- (void)onScrollViewWillBeginDragging:(id)arg1;
- (void)onSelectDrop:(id)arg1 input:(id)arg2;
- (void)onSystemKeyboardWillShow:(id)arg1;
- (_Bool)removeTextArea:(unsigned int)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setDelayedHandler:(id)arg1 withParam:(id)arg2;
- (void)setInputValue:(id)arg1 cursorPos:(long long)arg2;
@property(nonatomic) _Bool systemKeyboard; // @synthesize systemKeyboard=_systemKeyboard;
- (void)setSystemKeyboardMode:(_Bool)arg1;
- (void)showCustomKeyboard:(long long)arg1 confirmButton:(_Bool)arg2;
- (void)showKeyBoard:(id)arg1;
- (void)showKeyboardForExistInput:(id)arg1;
- (void)showSystemKeyboard:(_Bool)arg1;
- (void)switchEmojiKeyBoard;
- (_Bool)updateTextArea:(id)arg1;
- (_Bool)updateTextField:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
