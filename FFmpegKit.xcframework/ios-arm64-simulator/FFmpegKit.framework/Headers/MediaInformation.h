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

#ifndef FFMPEG_KIT_MEDIA_INFORMATION_H
#define FFMPEG_KIT_MEDIA_INFORMATION_H

#import <Foundation/Foundation.h>
#import "Chapter.h"
#import "StreamInformation.h"

NS_ASSUME_NONNULL_BEGIN

extern NSString* const MediaKeyMediaProperties;
extern NSString* const MediaKeyFilename;
extern NSString* const MediaKeyFormat;
extern NSString* const MediaKeyFormatLong;
extern NSString* const MediaKeyStartTime;
extern NSString* const MediaKeyDuration;
extern NSString* const MediaKeySize;
extern NSString* const MediaKeyBitRate;
extern NSString* const MediaKeyTags;

/**
 * Media information class.
 */
NS_SWIFT_NAME(MediaInformation)
@interface MediaInformation : NSObject

/**
 * Creates a new media information instance.
 *
 * @param mediaDictionary media properties dictionary
 * @param streams         array of stream information objects
 * @param chapters        array of chapter objects
 * @return initialized media information instance
 */
- (instancetype)init:(NSDictionary<NSString*, id>*)mediaDictionary 
         withStreams:(NSArray<StreamInformation*>*)streams 
        withChapters:(NSArray<Chapter*>*)chapters NS_DESIGNATED_INITIALIZER;

/**
 * Returns file name.
 *
 * @return media file name (nullable if not available)
 */
- (nullable NSString*)getFilename NS_SWIFT_NAME(getFilename());

/**
 * Returns format.
 *
 * @return media format (nullable if not available)
 */
- (nullable NSString*)getFormat NS_SWIFT_NAME(getFormat());

/**
 * Returns long format.
 *
 * @return media long format (nullable if not available)
 */
- (nullable NSString*)getLongFormat NS_SWIFT_NAME(getLongFormat());

/**
 * Returns duration.
 *
 * @return media duration in "seconds.microseconds" format (nullable if not available)
 */
- (nullable NSString*)getDuration NS_SWIFT_NAME(getDuration());

/**
 * Returns start time.
 *
 * @return media start time in milliseconds (nullable if not available)
 */
- (nullable NSString*)getStartTime NS_SWIFT_NAME(getStartTime());

/**
 * Returns size.
 *
 * @return media size in bytes (nullable if not available)
 */
- (nullable NSString*)getSize NS_SWIFT_NAME(getSize());

/**
 * Returns bitrate.
 *
 * @return media bitrate in kb/s (nullable if not available)
 */
- (nullable NSString*)getBitrate NS_SWIFT_NAME(getBitrate());

/**
 * Returns all tags.
 *
 * @return tags dictionary (nullable if no tags)
 */
- (nullable NSDictionary<NSString*, NSString*>*)getTags NS_SWIFT_NAME(getTags());

/**
 * Returns all streams.
 *
 * @return array of stream information objects
 */
- (NSArray<StreamInformation*>*)getStreams NS_SWIFT_NAME(getStreams());

/**
 * Returns all chapters.
 *
 * @return array of chapter objects
 */
- (NSArray<Chapter*>*)getChapters NS_SWIFT_NAME(getChapters());

/**
 * Returns the property associated with the key.
 *
 * @param key property key
 * @return property as string or nil if the key is not found
 */
- (nullable NSString*)getStringProperty:(NSString*)key NS_SWIFT_NAME(getStringProperty(_:));

/**
 * Returns the property associated with the key.
 *
 * @param key property key
 * @return property as number or nil if the key is not found
 */
- (nullable NSNumber*)getNumberProperty:(NSString*)key NS_SWIFT_NAME(getNumberProperty(_:));

/**
 * Returns the property associated with the key.
 *
 * @param key property key
 * @return property or nil if the key is not found
*/
- (nullable id)getProperty:(NSString*)key NS_SWIFT_NAME(getProperty(_:));

/**
 * Returns the format property associated with the key.
 *
 * @param key property key
 * @return format property as string or nil if the key is not found
 */
- (nullable NSString*)getStringFormatProperty:(NSString*)key NS_SWIFT_NAME(getStringFormatProperty(_:));

/**
 * Returns the format property associated with the key.
 *
 * @param key property key
 * @return format property as number or nil if the key is not found
 */
- (nullable NSNumber*)getNumberFormatProperty:(NSString*)key NS_SWIFT_NAME(getNumberFormatProperty(_:));

/**
 * Returns the format property associated with the key.
 *
 * @param key property key
 * @return format property or nil if the key is not found
*/
- (nullable id)getFormatProperty:(NSString*)key NS_SWIFT_NAME(getFormatProperty(_:));

/**
 * Returns all format properties defined.
 *
 * @return all format properties in a dictionary or nil if no format properties are defined
*/
- (nullable NSDictionary<NSString*, id>*)getFormatProperties NS_SWIFT_NAME(getFormatProperties());

/**
 * Returns all properties defined.
 *
 * @return all properties in a dictionary or nil if no properties are defined
*/
- (nullable NSDictionary<NSString*, id>*)getAllProperties NS_SWIFT_NAME(getAllProperties());

@end

NS_ASSUME_NONNULL_END

#endif // FFMPEG_KIT_MEDIA_INFORMATION_H
