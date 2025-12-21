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

#ifndef FFMPEG_KIT_ABSTRACT_SESSION_H
#define FFMPEG_KIT_ABSTRACT_SESSION_H

#import <Foundation/Foundation.h>
#import "Session.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines how long default "getAll" methods wait, in milliseconds.
 */
extern int const AbstractSessionDefaultTimeoutForAsynchronousMessagesInTransmit;

/**
 * Abstract session implementation which includes common features shared by <code>FFmpeg</code>,
 * <code>FFprobe</code> and <code>MediaInformation</code> sessions.
 */
NS_SWIFT_NAME(AbstractSession)
@interface AbstractSession : NSObject<Session>

/**
 * Creates a new abstract session.
 *
 * @param arguments              command arguments as string array
 * @param logCallback            session specific log callback (nullable)
 * @param logRedirectionStrategy session specific log redirection strategy
 * @return initialized session instance
 */
- (instancetype)init:(NSArray<NSString*>*)arguments 
     withLogCallback:(nullable LogCallback)logCallback 
withLogRedirectionStrategy:(LogRedirectionStrategy)logRedirectionStrategy NS_DESIGNATED_INITIALIZER;

/**
 * Waits for all asynchronous messages to be transmitted until the given timeout.
 *
 * @param timeout wait timeout in milliseconds
 */
- (void)waitForAsynchronousMessagesInTransmit:(int)timeout NS_SWIFT_NAME(waitForAsynchronousMessages(timeout:));

@end

NS_ASSUME_NONNULL_END

#endif // FFMPEG_KIT_ABSTRACT_SESSION_H
