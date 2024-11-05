// swift-tools-version: 2.1
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "MnghaDataSource",
    platforms: [
        .iOS(.v14) // Define the platform and version
    ],
    products: [
        // Products define the executables and libraries a package produces, making them visible to other packages.
        .library(
            name: "MnghaDataSource",
            targets: ["MnghaDataSource"]),
    ],
    targets: [
        // Targets are the basic building blocks of a package, defining a module or a test suite.
        // Targets can depend on other targets in this package and products from dependencies.
        // The binary target that includes the XCFramework
        .binaryTarget(
            name: "MnghaDataSource",
            path: "./Frameworks/MnghaDataSource.xcframework" // Adjust the path to your XCFramework
        )
    ]
)
