//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface WCAdWeAppInfo : NSObject <NSCoding>
{
    unsigned int version;
    NSString *appUserName;
    NSString *relativePagePath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appUserName; // @synthesize appUserName;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (_Bool)isValidForJump;
@property(retain, nonatomic) NSString *relativePagePath; // @synthesize relativePagePath;
@property(nonatomic) unsigned int version; // @synthesize version;

@end
