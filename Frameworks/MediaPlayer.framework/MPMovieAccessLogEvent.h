/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMovieAccessLogEvent : NSObject <NSCopying> {
    AVPlayerItemAccessLogEvent * _event;
}

@property (nonatomic, readonly) NSString *URI;
@property (nonatomic, readonly) double durationWatched;
@property (nonatomic, readonly) double indicatedBitrate;
@property (nonatomic, readonly) long long numberOfBytesTransferred;
@property (nonatomic, readonly) int numberOfDroppedVideoFrames;
@property (nonatomic, readonly) unsigned int numberOfSegmentsDownloaded;
@property (nonatomic, readonly) unsigned int numberOfServerAddressChanges;
@property (nonatomic, readonly) int numberOfStalls;
@property (nonatomic, readonly) double observedBitrate;
@property (nonatomic, readonly) NSString *playbackSessionID;
@property (nonatomic, readonly) NSDate *playbackStartDate;
@property (nonatomic, readonly) double playbackStartOffset;
@property (nonatomic, readonly) double segmentsDownloadedDuration;
@property (nonatomic, readonly) NSString *serverAddress;

- (void).cxx_destruct;
- (id)URI;
- (id)_initWithAVItemAccessLogEvent:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)durationWatched;
- (double)indicatedBitrate;
- (long long)numberOfBytesTransferred;
- (int)numberOfDroppedVideoFrames;
- (unsigned int)numberOfSegmentsDownloaded;
- (unsigned int)numberOfServerAddressChanges;
- (int)numberOfStalls;
- (double)observedBitrate;
- (id)playbackSessionID;
- (id)playbackStartDate;
- (double)playbackStartOffset;
- (double)segmentsDownloadedDuration;
- (id)serverAddress;

@end
