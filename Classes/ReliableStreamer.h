//
//  ReliableStreamer.h
//  iPhoneStreamingPlayer
//
//  Created by Jake Wood on 10/7/12.
//
//

#import <Foundation/Foundation.h>
#import "AudioStreamer.h"

@interface ReliableStreamer : NSObject {
    AudioStreamer *WifiStream;
    AudioStreamer *CellStream;
    AudioStreamer *currentStream;
}

- (id)initWithURLs:(NSURL *)highURL lowURL:(NSURL *)lowURL;
- (void)prebufferCellStream;
- (void)playCellStream;
- (void)start;
- (void)stop;
- (void)pause;

- (BOOL)isWaiting;
- (BOOL)isPlaying;
- (BOOL)isPaused;
- (BOOL)isIdle;
- (void)setMeteringEnabled:(BOOL)yesno;

@end
