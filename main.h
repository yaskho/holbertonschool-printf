#ifndef HEADER_H
#define HEADER_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct format - a struct of char and the function
 * @c: char
 * @function: the required function
*/
typedef struct format
{
	char c;
	int (*function)(va_list);
} format_t;

int _printf(const char *format, ...);
int _putchar_string(char *str);
int _putchar(char c);
int print_int(va_list args);
int print_string(va_list args);
int print_char(va_list args);
int (*select_func(char ch))(va_list args);
int print_decimal(va_list args);


#endif
