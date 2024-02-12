# Logging Library

This is a simple logging library for C programs.

## Overview

The logging library provides functions to log different types of messages such as errors, successes, information, and warnings. Additionally, it supports custom log messages with customizable background and foreground colors.

## Usage

To use this library, include the `logging.h` header file in your C program. Then, you can call the following functions to log messages:

- `log_error(const char* message)`: Log an error message.
- `log_success(const char* message)`: Log a success message.
- `log_info(const char* message)`: Log an information message.
- `log_warning(const char* message)`: Log a warning message.
- `log_custom(const char* message, LogColors bg, LogColors fg, const char* label)`: Log a custom message with specified background and foreground colors.

Note: Colors may not work on Windows systems, so it's recommended to verify their behavior on Linux for each case.

## Example

```c
#include "logging.h"

int main() {
    log_error("An error occurred!");
    log_success("Operation was successful!");
    log_info("This is an informational message.");
    log_warning("This is a warning message.");
    log_custom("Custom message with colors", DARK_RED, LIGHT_GRAY, "CUSTOM");
    return 0;
}
```
## License

This library is provided under the [Apache License, Version 2.0](LICENSE).
