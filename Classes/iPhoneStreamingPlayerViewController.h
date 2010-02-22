//
//  iPhoneStreamingPlayerViewController.h
//  iPhoneStreamingPlayer
//
//  Created by Matt Gallagher on 28/10/08.
//  Copyright Matt Gallagher 2008. All rights reserved.
//
//  Permission is given to use this source code file, free of charge, in any
//  project, commercial or otherwise, entirely at your risk, with the condition
//  that any redistribution (in part or whole) of source code must retain
//  this copyright and permission notice. Attribution in compiled projects is
//  appreciated but not required.
//

#import <UIKit/UIKit.h>

@class AudioStreamer;

@interface iPhoneStreamingPlayerViewController : UIViewController
{
	IBOutlet UITextView *downloadSourceField;
	IBOutlet UIButton *button;
	IBOutlet UIButton *nextButton;
	IBOutlet UIButton *previousButton;
	IBOutlet UIView *volumeSlider;
	IBOutlet UILabel *positionLabel;
	IBOutlet UILabel *playingLabel;
	AudioStreamer *streamer;
	NSTimer *progressUpdateTimer;
}

- (IBAction)buttonPressed:(id)sender;
- (IBAction)playNextPressed:(id)sender;
- (IBAction)playPreviousPressed:(id)sender;
- (void)spinButton;
- (void)updateProgress:(NSTimer *)aNotification;

@end

