#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * _putchar_string - print a string
 * @str: the string to print
 * Return: string's length
*/
int _putchar_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
