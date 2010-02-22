//
//  TitledURL.h
//  iPhoneStreamingPlayer
//
//  Created by Chris Hobbs on 2/21/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "URLable.h"

@interface TitledURL : NSObject <URLable> {
	NSURL *url;
	NSString *title;
}
@property(nonatomic, retain) NSURL *url;
@property(nonatomic, retain) NSString *title;

- (id) initWithTitle:(NSString *) titleString andURL: (NSString *) urlString;
@end
