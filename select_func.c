#include "main.h"
/**
 * select_func - function to call
 * @ch: char
 * Return: number of character
*/
int (*select_func(char ch))(va_list args)
{
	int i;
	format_t tab[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}

	};
	for (i = 0; i < 5; i++)
	{
		if ((tab + i)->c == ch)
			return ((tab + i)->function);
	}
	return (NULL);
}
