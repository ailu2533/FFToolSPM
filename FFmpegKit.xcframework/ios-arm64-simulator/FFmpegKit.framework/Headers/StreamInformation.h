/*
 * Copyright (c) 2018-2022 Taner Sener
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

#ifndef FFMPEG_KIT_STREAM_INFORMATION_H
#define FFMPEG_KIT_STREAM_INFORMATION_H

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString* const StreamKeyIndex;
extern NSString* const StreamKeyType;
extern NSString* const StreamKeyCodec;
extern NSString* const StreamKeyCodecLong;
extern NSString* const StreamKeyFormat;
extern NSString* const StreamKeyWidth;
extern NSString* const StreamKeyHeight;
extern NSString* const StreamKeyBitRate;
extern NSString* const StreamKeySampleRate;
extern NSString* const StreamKeySampleFormat;
extern NSString* const StreamKeyChannelCount;
extern NSString* const StreamKeyChannelLayout;
extern NSString* const StreamKeyBitsPerSample;
extern NSString* const StreamKeySampleAspectRatio;
extern NSString* const StreamKeyDisplayAspectRatio;
extern NSString* const StreamKeyAverageFrameRate;
extern NSString* const StreamKeyRealFrameRate;
extern NSString* const StreamKeyTimeBase;
extern NSString* const StreamKeyCodecTimeBase;
extern NSString* const StreamKeyTags;

/**
 * Stream information class.
 */
NS_SWIFT_NAME(StreamInformation)
@interface StreamInformation : NSObject

- (instancetype)init:(NSDictionary<NSString*, id>*)streamDictionary NS_DESIGNATED_INITIALIZER;

/**
 * Returns stream index.
 *
 * @return stream index, starting from zero
 */
- (nullable NSNumber*)getIndex NS_SWIFT_NAME(getIndex());

/**
 * Returns stream type.
 *
 * @return stream type; audio or video
 */
- (nullable NSString*)getType NS_SWIFT_NAME(getType());

/**
 * Returns stream codec.
 *
 * @return stream codec
 */
- (nullable NSString*)getCodec NS_SWIFT_NAME(getCodec());

/**
 * Returns stream codec in long format.
 *
 * @return stream codec with additional profile and mode information
 */
- (nullable NSString*)getCodecLong NS_SWIFT_NAME(getCodecLong());

/**
 * Returns stream format.
 *
 * @return stream format
 */
- (nullable NSString*)getFormat NS_SWIFT_NAME(getFormat());

/**
 * Returns width.
 *
 * @return width in pixels
 */
- (nullable NSNumber*)getWidth NS_SWIFT_NAME(getWidth());

/**
 * Returns height.
 *
 * @return height in pixels
 */
- (nullable NSNumber*)getHeight NS_SWIFT_NAME(getHeight());

/**
 * Returns bitrate.
 *
 * @return bitrate in kb/s
 */
- (nullable NSString*)getBitrate NS_SWIFT_NAME(getBitrate());

/**
 * Returns sample rate.
 *
 * @return sample rate in hz
 */
- (nullable NSString*)getSampleRate NS_SWIFT_NAME(getSampleRate());

/**
 * Returns sample format.
 *
 * @return sample format
 */
- (nullable NSString*)getSampleFormat NS_SWIFT_NAME(getSampleFormat());

/**
 * Returns channel count.
 *
 * @return channel count
 */
- (nullable NSNumber*)getChannelCount NS_SWIFT_NAME(getChannelCount());

/**
 * Returns channel layout.
 *
 * @return channel layout
 */
- (nullable NSString*)getChannelLayout NS_SWIFT_NAME(getChannelLayout());

/**
 * Returns bits per sample.
 *
 * @return bits per sample
 */
- (nullable NSNumber*)getBitsPerSample NS_SWIFT_NAME(getBitsPerSample());

/**
 * Returns sample aspect ratio.
 *
 * @return sample aspect ratio
 */
- (nullable NSString*)getSampleAspectRatio NS_SWIFT_NAME(getSampleAspectRatio());

/**
 * Returns display aspect ratio.
 *
 * @return display aspect ratio
 */
- (nullable NSString*)getDisplayAspectRatio NS_SWIFT_NAME(getDisplayAspectRatio());

/**
 * Returns average frame rate.
 *
 * @return average frame rate in fps
 */
- (nullable NSString*)getAverageFrameRate NS_SWIFT_NAME(getAverageFrameRate());

/**
 * Returns real frame rate.
 *
 * @return real frame rate in tbr
 */
- (nullable NSString*)getRealFrameRate NS_SWIFT_NAME(getRealFrameRate());

/**
 * Returns time base.
 *
 * @return time base in tbn
 */
- (nullable NSString*)getTimeBase NS_SWIFT_NAME(getTimeBase());

/**
 * Returns codec time base.
 *
 * @return codec time base in tbc
 */
- (nullable NSString*)getCodecTimeBase NS_SWIFT_NAME(getCodecTimeBase());

/**
 * Returns all tags.
 *
 * @return tags dictionary
 */
- (nullable NSDictionary<NSString*, id>*)getTags NS_SWIFT_NAME(getTags());

/**
 * Returns the stream property associated with the key.
 *
 * @return stream property as string or nil if the key is not found
 */
- (nullable NSString*)getStringProperty:(NSString*)key NS_SWIFT_NAME(getStringProperty(_:));

/**
 * Returns the stream property associated with the key.
 *
 * @return stream property as number or nil if the key is not found
 */
- (nullable NSNumber*)getNumberProperty:(NSString*)key NS_SWIFT_NAME(getNumberProperty(_:));

/**
 * Returns the stream property associated with the key.
 *
 * @return stream property as id or nil if the key is not found
*/
- (nullable id)getProperty:(NSString*)key NS_SWIFT_NAME(getProperty(_:));

/**
 * Returns all stream properties defined.
 *
 * @return all stream properties in a dictionary or nil if no properties are defined
*/
- (nullable NSDictionary<NSString*, id>*)getAllProperties NS_SWIFT_NAME(getAllProperties());

@end

NS_ASSUME_NONNULL_END

#endif // FFMPEG_KIT_STREAM_INFORMATION_H
