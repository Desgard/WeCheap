//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "Q2DOperation-Protocol.h"

@class NSMutableData, NSString, NSURLConnection, NSURLRequest;

@interface Q2DDownloaderOperation : NSOperation <Q2DOperation>
{
    _Bool _executing;
    _Bool _finished;
    NSURLRequest *_request;
    NSURLConnection *_connection;
    NSMutableData *_receivedData;
    CDUnknownBlockType _completedBlock;
    CDUnknownBlockType _cancelledBlock;
}

- (void).cxx_destruct;
- (void)cancel;
@property(copy, nonatomic) CDUnknownBlockType cancelledBlock; // @synthesize cancelledBlock=_cancelledBlock;
@property(copy, nonatomic) CDUnknownBlockType completedBlock; // @synthesize completedBlock=_completedBlock;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (void)done;
- (id)initWithRequest:(id)arg1 completed:(CDUnknownBlockType)arg2 cancelled:(CDUnknownBlockType)arg3;
- (_Bool)isConcurrent;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void)reset;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

