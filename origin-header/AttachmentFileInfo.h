//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AttachmentFileInfo : NSObject
{
    unsigned int startPos;
    unsigned int totalSize;
    NSString *clientID;
    NSString *localPath;
    NSString *fileName;
    NSString *attachID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *attachID; // @synthesize attachID;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName;
@property(retain, nonatomic) NSString *localPath; // @synthesize localPath;
@property(nonatomic) unsigned int startPos; // @synthesize startPos;
@property(nonatomic) unsigned int totalSize; // @synthesize totalSize;

@end

