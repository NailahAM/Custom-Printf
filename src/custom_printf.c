#include <stdarg.h>         // For va_list, va_start, va_end
#include <unistd.h>         // For write()
#include "custom_printf.h"  // To include function declarations

int customPrintf(const char *format, ...) {
    if (!format) {
        write(1, "error: formatString is NULL\n", 28);
        return -1;
    }

    va_list args;
    va_start(args, format);
    int count = 0;

    while (*format) {
        if (*format == '%') {
            format++;
            if (*format == '\0') break;

            if (*format == 'c') count += handle_char(args);
            else if (*format == 's') count += handle_string(args);
            else if (*format == 'd' || *format == 'i') count += handle_integer(args);
            else if (*format == 'b') count += handle_binary(args);
            else if (*format == '%') {
                write(1, "%", 1);
                count++;
            } else {
                write(1, "%", 1);
                write(1, format, 1);
                count += 2;
            }
        } else {
            write(1, format, 1);
            count++;
        }
        format++;
    }

    va_end(args);
    return count;
}
