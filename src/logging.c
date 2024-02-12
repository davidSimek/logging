#include "logging.h"


#include <stdio.h>

#ifdef WINDOWS

#include <windows.h> 


void log_custom(const char* message, LogColors bg, LogColors fg, const char* label) {
    printf("[%s]\t%s\n", label, message);
};

void log_error(const char* message) {
    HANDLE  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    printf("[");
    SetConsoleTextAttribute(hConsole, 4);
    printf("ERROR");
    SetConsoleTextAttribute(hConsole, 7);
    printf("]\t%s\n", message);
}

void log_success(const char* message) {
    HANDLE  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    printf("[");
    SetConsoleTextAttribute(hConsole, 2);
    printf("OK");
    SetConsoleTextAttribute(hConsole, 7);
    printf("]\t%s\n", message);
}

void log_info(const char* message) {
    HANDLE  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    printf("[");
    SetConsoleTextAttribute(hConsole, 1);
    printf("INFO");
    SetConsoleTextAttribute(hConsole, 7);
    printf("]\t%s\n", message);
}


void log_warning(const char* message) {
    HANDLE  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    printf("[");
    SetConsoleTextAttribute(hConsole, 6);
    printf("!!!");
    SetConsoleTextAttribute(hConsole, 7);
    printf("]\t%s\n", message);}


#else
void log_error(const char* message) {
    log_custom(message, DEFAULT, RED, "ERROR");
}
void log_success(const char* message) {
    log_custom(message, DEFAULT, GREEN, "OK");
}
void log_info(const char* message) {
    log_custom(message, DEFAULT, BLUE, "INFO");
}
void log_warning(const char* message) {
    log_custom(message, DEFAULT, DARK_YELLOW, "!!!");
}

void log_custom(const char* message, LogColors bg, LogColors fg, const char* label) {
    char fg_colors[17][6] = {
        "\033[39m",
        "\033[30m",
        "\033[31m",
        "\033[32m",
        "\033[33m",
        "\033[34m",
        "\033[35m",
        "\033[36m",
        "\033[37m",
        "\033[90m",
        "\033[91m",
        "\033[92m",
        "\033[93m",
        "\033[94m",
        "\033[95m",
        "\033[96m",
        "\033[97m"
    };

    char bg_colors[17][6] = {
        "\033[49m",
        "\033[40m",
        "\033[41m",
        "\033[42m",
        "\033[43m",
        "\033[44m",
        "\033[45m",
        "\033[46m",
        "\033[47m",
        "\033[100m",
        "\033[101m",
        "\033[101m",
        "\033[103m",
        "\033[104m",
        "\033[105m",
        "\033[106m",
        "\033[107m"
    };

    printf("[%s%s%s%s%s]\t%s\n", bg_colors[bg], fg_colors[fg], label, bg_colors[DEFAULT], fg_colors[DEFAULT], message);
}
#endif
