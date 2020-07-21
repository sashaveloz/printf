#include "holberton.h"
/**
 * get_spc - Returns a function as the case may be.
 * @s: char.
 * Return: function or NULL.
 */
int (*get_spc(char s))(va_list)
{
	func_t sp[] = {
		{"s", print_string},
		{"c", print_char},
		{"%", print_percent},
		{"i", print_integer},
		{"d", print_decimal},
		{NULL, NULL}
	};

	int index = 0;

	while (sp[index].tp != NULL)
	{
		if (s == sp[index].tp[0])
			return (sp[index].ftp)
		index++;
	}
	return (NULL);
}
