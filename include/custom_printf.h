#ifndef CUSTOM_PRINTF_H
#define CUSTOM_PRINTF_H

#include <stdarg.h>

int customPrintf(const char *format, ...);
int handle_char(va_list args);
int handle_string(va_list args);
int handle_integer(va_list args);
int handle_binary(va_list args);
int print_binary(int num);

#endif
