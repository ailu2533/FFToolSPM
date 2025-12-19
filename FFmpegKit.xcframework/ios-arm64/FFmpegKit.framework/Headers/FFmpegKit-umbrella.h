/*
 * FFmpegKit Umbrella Header
 * 
 * This umbrella header imports all public headers for the FFmpegKit framework.
 * It enables Swift projects to use FFmpegKit without requiring a bridging header.
 * 
 * Usage in Swift:
 *   import FFmpegKit
 *   let session = FFmpegKit.execute("-version")
 */

#ifndef FFmpegKit_umbrella_h
#define FFmpegKit_umbrella_h

#import <Foundation/Foundation.h>

// Core Types and Enums
#import "Level.h"
#import "SessionState.h"
#import "LogRedirectionStrategy.h"

// Return Code
#import "ReturnCode.h"

// Logging
#import "Log.h"
#import "LogCallback.h"

// Statistics
#import "Statistics.h"
#import "StatisticsCallback.h"

// Media Information
#import "Chapter.h"
#import "StreamInformation.h"
#import "MediaInformation.h"
#import "MediaInformationJsonParser.h"

// Sessions
#import "Session.h"
#import "AbstractSession.h"
#import "FFmpegSession.h"
#import "FFmpegSessionCompleteCallback.h"
#import "FFprobeSession.h"
#import "FFprobeSessionCompleteCallback.h"
#import "MediaInformationSession.h"
#import "MediaInformationSessionCompleteCallback.h"

// Main API
#import "FFmpegKit.h"
#import "FFprobeKit.h"
#import "FFmpegKitConfig.h"

// Utilities
#import "ArchDetect.h"
#import "Packages.h"
#import "AtomicLong.h"

// Exceptions
#import "ffmpegkit_exception.h"

#endif /* FFmpegKit_umbrella_h */

