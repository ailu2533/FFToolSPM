/*
 * Copyright (c) 2018-2021 Taner Sener
 *
 * This file is part of FFmpegKit.
 *
 * FFmpegKit is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * FFmpegKit is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with FFmpegKit.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef FFMPEG_KIT_STATISTICS_H
#define FFMPEG_KIT_STATISTICS_H

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Statistics entry for an FFmpeg execute session.
 */
NS_SWIFT_NAME(Statistics)
@interface Statistics : NSObject

/**
 * Creates a new statistics entry.
 *
 * @param sessionId        session identifier
 * @param videoFrameNumber video frame number
 * @param videoFps         video frames per second
 * @param videoQuality     video quality value
 * @param size             output size in bytes
 * @param time             processing time in seconds
 * @param bitrate          bitrate in kbps
 * @param speed            processing speed
 * @return initialized statistics instance
 */
- (instancetype)init:(long)sessionId 
   videoFrameNumber:(int)videoFrameNumber 
           videoFps:(float)videoFps 
       videoQuality:(float)videoQuality 
               size:(int64_t)size 
               time:(double)time 
            bitrate:(double)bitrate 
              speed:(double)speed NS_DESIGNATED_INITIALIZER NS_SWIFT_NAME(init(sessionId:videoFrameNumber:videoFps:videoQuality:size:time:bitrate:speed:));

- (long)getSessionId NS_SWIFT_NAME(getSessionId());

- (int)getVideoFrameNumber NS_SWIFT_NAME(getVideoFrameNumber());

- (float)getVideoFps NS_SWIFT_NAME(getVideoFps());

- (float)getVideoQuality NS_SWIFT_NAME(getVideoQuality());

- (long)getSize NS_SWIFT_NAME(getSize());

- (double)getTime NS_SWIFT_NAME(getTime());

- (double)getBitrate NS_SWIFT_NAME(getBitrate());

- (double)getSpeed NS_SWIFT_NAME(getSpeed());

@end

NS_ASSUME_NONNULL_END

#endif // FFMPEG_KIT_STATISTICS_H
