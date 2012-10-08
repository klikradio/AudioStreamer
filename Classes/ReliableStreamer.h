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
}

- (id)initWithURLs:(NSURL *)highURL lowURL:(NSURL *)lowURL;
- (void)prebufferCellStream;
- (void)playCellStream;
- (void)start;
- (void)stop;

@end
