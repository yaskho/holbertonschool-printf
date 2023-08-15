#include "main.h"
/**
 * print_char - print char
 * @args: the char to print
 * Return: count
*/

int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
/**
*print_string - print string
*@args: the string to print
*Return: count
*/
int print_string(va_list args)
{
	char *s;
	int i;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";
	i = _putchar_string(s);
	return (i);
}

/**
 * print_int - print an integer
 * @args: a va_list
 * Return: count
*/
int print_int(va_list args)
{
	return (print_decimal(args));
}
