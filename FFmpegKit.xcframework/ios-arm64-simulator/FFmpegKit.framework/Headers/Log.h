/*
 * Copyright (c) 2021 Taner Sener
 *
 * This file is part of FFmpegKit.
 *
 * FFmpegKit is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * FFmpegKit is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General License for more details.
 *
 *  You should have received a copy of the GNU Lesser General License
 *  along with FFmpegKit.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef FFMPEG_KIT_LOG_H
#define FFMPEG_KIT_LOG_H

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * <p>Log entry for an <code>FFmpegKit</code> session.
 */
NS_SWIFT_NAME(Log)
@interface Log : NSObject

/**
 * Creates a new log entry.
 *
 * @param sessionId session identifier
 * @param level     log level
 * @param message   log message
 * @return initialized log instance
 */
- (instancetype)init:(long)sessionId 
               level:(int)level 
             message:(NSString*)message NS_DESIGNATED_INITIALIZER NS_SWIFT_NAME(init(sessionId:level:message:));

/**
 * Returns the session identifier.
 *
 * @return session identifier
 */
- (long)getSessionId NS_SWIFT_NAME(getSessionId());

/**
 * Returns the log level.
 *
 * @return log level
 */
- (int)getLevel NS_SWIFT_NAME(getLevel());

/**
 * Returns the log message.
 *
 * @return log message
 */
- (NSString*)getMessage NS_SWIFT_NAME(getMessage());

@end

NS_ASSUME_NONNULL_END

#endif // FFMPEG_KIT_LOG_H
