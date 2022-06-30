#include <stdbool.h>
#include "tests.h"

/**
 * print_test_result - prints out a message indicating a test's result
 */
void print_test_result(bool succeeded, const char *message)
{
    char *feedback = "success";
    if (!succeeded)
        feedback = "failed";

    printf("%s: %s\n", message, feedback);
}
