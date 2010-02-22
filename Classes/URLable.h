//
//  URLable.h
//  iPhoneStreamingPlayer
//
//  Created by Chris Hobbs on 2/21/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

// a helper interface for AudioStreamer
//this interface is NOT requred to use AudioStreamer
@protocol URLable 
- (NSURL *) url;
@end
