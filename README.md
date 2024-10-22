
# MnghaDataSource

`MnghaDataSource` is a Swift package that wraps an `XCFramework` built using Kotlin Multiplatform Mobile (KMM). This package enables seamless integration of shared Kotlin/Native logic into iOS applications via Swift Package Manager (SPM).

## Features

- Easily integrate the Kotlin Multiplatform shared code in your iOS Swift projects.
- Supports iOS projects targeting iOS 13 and above.
- Distributed as a precompiled binary (`MnghaDataSource.xcframework`).

## Installation

You can add the `MnghaDataSource` package to your iOS project using Swift Package Manager (SPM). Follow these steps:

1. In Xcode, open your project and navigate to `File > Add Packages...`.
2. Enter the repository URL: `https://github.com/yourusername/MnghaDataSource.git`.
3. Select the version you want to use (or choose the latest version).
4. Add the package to your project.

## Usage

After successfully adding the package, you can import the `MnghaDataSource` module into your Swift files and begin using the functionality provided by the `XCFramework`.

```swift
import MnghaDataSource

// Example usage
let myObject = MyMnghaClass() // Replace with actual classes/methods from the framework
```

## Requirements

- iOS 13.0+
- Swift 5.3+
- Xcode 12.0+

## Package Details

The repository contains the following components:

- `MnghaDataSource.xcframework`: The precompiled binary framework containing the Kotlin/Native code.
- `Package.swift`: The Swift Package manifest file defining the binary target.

### Directory Structure

```
MnghaDataSource/
├── Frameworks/
│   └── MnghaDataSource.xcframework/  <-- The XCFramework (precompiled binary)
├── Sources/
│   └── MnghaDataSource/  <-- Empty (no Swift code in this package)
├── Tests/
│   └── MnghaDataSourceTests/  <-- Optional unit tests
├── Package.swift  <-- Swift Package Manager configuration
└── README.md  <-- This file
```

## Building the XCFramework

If you need to rebuild the `XCFramework` from Kotlin Multiplatform Mobile, follow these steps:

1. Build the iOS ARM and simulator binaries using Kotlin Gradle tasks:
    ```bash
    ./gradlew assemble
    ```
2. Create the XCFramework by bundling the ARM64 and simulator binaries.

3. Place the newly created `MnghaDataSource.xcframework` inside the `Frameworks` directory.

## Contributing

Contributions, issues, and feature requests are welcome! Feel free to check the [issues page](https://github.com/yourusername/MnghaDataSource/issues) or submit a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more information.

## Acknowledgements

This package utilizes Kotlin Multiplatform Mobile (KMM) for sharing business logic between iOS and Android.
