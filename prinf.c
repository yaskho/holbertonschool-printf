#include "main.h"
/**
 * _printf - print the required output
 *@format: the given format
 *Return: num of written charcters
*/
int _printf(const char *format, ...)
{
	int a = 0;
	va_list args;
	const char *p;
	int (*print_function)(va_list);

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
		return (-1);

	for (p = format; *p != '\0'; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				a = a + _putchar('%');
				continue;
			}
			print_function = select_func(*p);
			if (print_function)
				a = a + print_function(args);
			else
				a = _printf("%%%c", *p);
		}

		else
			a = a + _putchar(*p);

	}
	va_end(args);
	return (a);
}
