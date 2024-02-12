#include "logging.h"

#include <stdio.h>

int main(void)
{
    log_info("hello");
    log_error("you will die");
    log_success("you did it");
    log_warning("there is problem");

    log_custom("this is from boss", DEFAULT, DARK_RED, "BOSS");
    return 0;
}
