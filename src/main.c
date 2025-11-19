#include <stdio.h>
#include "custom_printf.h"

int main(void)
{
    // Basic format specifier tests
    customPrintf("Character: %c", 'A');
    printf("\n");

    customPrintf("String: %s", "Hello, World!");
    printf("\n");

    customPrintf("Integer: %d", 42);
    printf("\n");

    customPrintf("Binary: %b", 5);
    printf("\n");

    customPrintf("Percent sign: %%");
    printf("\n");

    customPrintf("Nonspecifier");
    printf("\n");

    // Edge case: NULL input
    customPrintf(NULL);
    printf("\n");

    // Edge case: Empty string
    customPrintf("");
    printf("\n");

    return 0;
}
