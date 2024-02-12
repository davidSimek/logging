#ifndef LOGGING_H
#define LOGGING_H

typedef enum {
    DEFAULT = 0,
    BLACK = 1,
    DARK_RED = 2,
    DARK_GREEN = 3,
    DARK_YELLOW = 4,
    DARK_BLUE = 5,
    DARK_MAGENTA = 6,
    DARK_CYAN = 7,
    LIGHT_GRAY = 8,
    DARK_GRAY = 9,
    RED = 10,
    GREEN = 11,
    ORANGE = 12,
    BLUE = 13,
    MAGENTA = 14,
    CYAN = 15,
    WHITE = 16
} LogColors;

void log_error(const char* message);
void log_success(const char* message);
void log_info(const char* message);
void log_warning(const char* message);

// colors don't work on windows
// check if correct on linux for each case
void log_custom(const char* message, LogColors bg, LogColors fg, const char* label);

#endif
