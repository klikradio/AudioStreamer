//
//  ReliableStreamer.m
//  iPhoneStreamingPlayer
//
//  Created by Jake Wood on 10/7/12.
//
//

#import "ReliableStreamer.h"

@implementation ReliableStreamer

- (id)initWithURLs:(NSURL *)highURL lowURL:(NSURL *)lowURL;
{
    self = [super init];
    
    WifiStream = [[AudioStreamer alloc] initWithURLAndReliable:highURL reliable:self];
    CellStream = [[AudioStreamer alloc] initWithURLAndReliable:lowURL reliable:self];
    
    return self;
}

- (void)prebufferCellStream
{
    NSLog(@"Pre-buffer cell stream sending");
    [CellStream prebuffer];
}

- (void)playCellStream
{
    NSLog(@"Play cell stream sending");
    [CellStream start];
    currentStream = CellStream;
}

- (void)start
{
    [WifiStream start];
    currentStream = WifiStream;
}

- (void)stop
{
    [WifiStream start];
    [CellStream stop];
}

- (void)pause
{
    [currentStream pause];
}

- (BOOL)isWaiting
{
    return [currentStream isWaiting];
}

- (BOOL)isPlaying
{
    return [currentStream isPlaying];
}

- (BOOL)isPaused
{
    return [currentStream isPaused];
}

- (BOOL)isIdle
{
    return [currentStream isIdle];
}

- (void)setMeteringEnabled:(BOOL)yesno
{
    [currentStream setMeteringEnabled:yesno];
}
@end
