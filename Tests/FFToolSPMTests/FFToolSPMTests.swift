import XCTest
@testable import FFToolSPM

final class FFToolSPMTests: XCTestCase {
    func testExample() throws {
        print("Testing FFmpegKit execute...")
        let session = FFmpegKit.execute("-version")
        print("FFmpegKit session completed with state: \(session?.getState().rawValue ?? 0)")
        
        print("\nTesting FFprobeKit getMediaInformation...")
        let probeSession = FFprobeKit.getMediaInformation("/path/to/non/existent/file.mp4")
        print("FFprobeKit session completed with state: \(probeSession?.getState().rawValue ?? 0)")
        
        XCTAssertNotNil(session, "FFmpegKit session should not be nil")
        XCTAssertNotNil(probeSession, "FFprobeKit session should not be nil")
    }
}
