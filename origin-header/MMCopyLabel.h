//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUILabel.h"

@class UIView;
@protocol MMCopyLabelDelegate;

@interface MMCopyLabel : MMUILabel
{
    UIView<MMCopyLabelDelegate> *_delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak UIView<MMCopyLabelDelegate> *delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)longPressToCopy:(id)arg1;
- (void)menuItemHidden:(id)arg1;

@end

