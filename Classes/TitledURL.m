//
//  TitledURL.m
//  iPhoneStreamingPlayer
//
//  Created by Chris Hobbs on 2/21/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import "TitledURL.h"


@implementation TitledURL
@synthesize title, url;

- (id) initWithTitle:(NSString *) titleString andURL: (NSString *) urlString {
	if( self = [super init] ) {
		self.title = titleString;
		self.url = [NSURL URLWithString: urlString];
	}
	return self;
}

- (NSString *) description {
	return self.title;
}
@end
