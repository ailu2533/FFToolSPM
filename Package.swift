// swift-tools-version: 6.1
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "FFToolSPM",
    platforms: [.iOS(.v13)],
    products: [
        // Products define the executables and libraries a package produces, making them visible to other packages.
        .library(
            name: "FFToolSPM",
            targets: ["FFToolSPM"]),
    ],
    dependencies: [
             .package(url: "https://github.com/ailu2533/FFmpegKitSPM.git", branch: "main"),
        ],
    targets: [
        // Targets are the basic building blocks of a package, defining a module or a test suite.
        // Targets can depend on other targets in this package and products from dependencies.
        .binaryTarget(name: "FFmpegKit", path: "FFmpegKit.xcframework"),
        .target(
            name: "FFToolSPM",
            dependencies: [
                "FFmpegKit",
                .product(name: "FFmpegKitSPM", package: "FFmpegKitSPM")
            ]),
        .testTarget(
            name: "FFToolSPMTests",
            dependencies: ["FFToolSPM"]),
    ]
)
