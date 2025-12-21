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

#ifndef FFMPEG_KIT_LOG_REDIRECTION_STRATEGY_H
#define FFMPEG_KIT_LOG_REDIRECTION_STRATEGY_H

/**
 * Log redirection strategy enumeration.
 * Controls when logs are printed to console in addition to being forwarded to callbacks.
 */
typedef NS_ENUM(NSUInteger, LogRedirectionStrategy) {
    /** Always print logs to console regardless of callbacks */
    LogRedirectionStrategyAlwaysPrintLogs = 0,
    
    /** Print logs only when both global and session callbacks are not defined (default) */
    LogRedirectionStrategyPrintLogsWhenNoCallbacksDefined = 1,
    
    /** Print logs only when global callback is not defined */
    LogRedirectionStrategyPrintLogsWhenGlobalCallbackNotDefined = 2,
    
    /** Print logs only when session callback is not defined */
    LogRedirectionStrategyPrintLogsWhenSessionCallbackNotDefined = 3,
    
    /** Never print logs to console, only forward to callbacks */
    LogRedirectionStrategyNeverPrintLogs = 4
} NS_SWIFT_NAME(LogRedirectionStrategy);

#endif // FFMPEG_KIT_LOG_REDIRECTION_STRATEGY_H
