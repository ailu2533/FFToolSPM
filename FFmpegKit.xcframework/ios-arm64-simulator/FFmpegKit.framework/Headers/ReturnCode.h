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

#ifndef FFMPEG_KIT_RETURN_CODE_H
#define FFMPEG_KIT_RETURN_CODE_H

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, ReturnCodeEnum) {
    ReturnCodeSuccess = 0,
    ReturnCodeCancel = 255
} NS_SWIFT_NAME(ReturnCodeEnum);

/**
 * Return code for FFmpeg/FFprobe executions.
 */
NS_SWIFT_NAME(ReturnCode)
@interface ReturnCode : NSObject

/**
 * Creates a new return code with the given value.
 *
 * @param value return code value
 * @return return code instance
 */
- (instancetype)init:(int)value NS_DESIGNATED_INITIALIZER;

/**
 * Creates a return code with the given value.
 *
 * @param value return code value
 * @return return code instance
 */
+ (instancetype)returnCodeWithValue:(int)value NS_SWIFT_NAME(init(value:));

/**
 * Checks if the given return code represents success.
 *
 * @param value return code to check
 * @return true if successful, false otherwise
 */
+ (BOOL)isSuccess:(ReturnCode*)value;

/**
 * Checks if the given return code represents cancellation.
 *
 * @param value return code to check
 * @return true if cancelled, false otherwise
 */
+ (BOOL)isCancel:(ReturnCode*)value;

/**
 * Returns the numeric value of the return code.
 *
 * @return return code value
 */
- (int)getValue NS_SWIFT_NAME(getValue());

- (BOOL)isValueSuccess;

- (BOOL)isValueError;

- (BOOL)isValueCancel;

@end

NS_ASSUME_NONNULL_END

#endif // FFMPEG_KIT_RETURN_CODE_H
