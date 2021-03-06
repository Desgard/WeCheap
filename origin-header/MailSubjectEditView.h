//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UILabel, UITextField;
@protocol MailReceiverEditViewDelegate;

@interface MailSubjectEditView : MMUIView <UITextFieldDelegate>
{
    id <MailReceiverEditViewDelegate> m_delegate;
    UITextField *m_textField;
    UILabel *m_textLabel;
}

- (void).cxx_destruct;
- (_Bool)becomeFirstResponder;
- (id)init;
- (void)initView;
- (_Bool)isFirstResponder;
- (void)layoutSubviews;
@property(nonatomic) __weak id <MailReceiverEditViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)onTextFieldChanged:(id)arg1;
- (_Bool)resignFirstResponder;
- (void)setText:(id)arg1;
- (id)text;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

