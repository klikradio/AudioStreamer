# klikradio/AudioStreamer

A fork of DigitalDJ's AudioStreamer (which is a fork jfricker's AudioStreamer (which is a fork of the original AudioStreamer by mattgallagher))

## Features
Forked and cherry-picked to get a number of community addons and fixes:

* Shoutcast metadata [jfricker]
* MIME type detection [andybee]
* HE-AACv2 [idevsoftware]
* Level Metering [idevsoftware]
* NSThread memory leak [mattgallagher]
* Fix alert spam / Invisible alerts by dispatching alerts on the main (GUI) thread instead of the notification thread [sebsto]
* Fix compilation issues in Mac OS X Sample App [sebsto]
* Fix compilation issue when SHOUTCAST_METADAT flag is defined [sebsto]
* Fix iPhone apps crashes in SHOUTCAST_METADATA mode when returning from Background [sebsto]
* Album metadata [nickpack]
* Buffer fill percentage [rayh]
* Possible fix for playing non-VBR WAV streams [isalkind]
* Invalid byte range header fix [whyz]
* Compatibility with OS3.x [bradfordcp]

### DigitalDJ features:
* Fixed interruption crashes
* Background buffering
* Play/pause from iPod controls
* Stop all UI updating and timers while backgrounded
* Retina display example
* Support for Pause button in UI
* Local Notifications (outside app) on error

### KLIK features:
* Merged in sprhawk's buffering technique (buffers network packets, then streams from that buffer to the audio queue)
* Corrected SHOUTcast metadata problems in sprhawk's merge

#### Features to Implement:
* Seamless transition between a high-bitrate stream to a low-bitrate stream when the user switches between Wi-fi and 3G