#include "holberton.h"

/**
  *print_char - Function that print a char.
  *@c: Argument char type va_list.
  *Return: int
  */

int print_char(va_list c)
{
	char i = va_arg(c, int);

	_putchar(i);
	return (1);
}

/**
  *print_string - Function that print a string.
  *@s: Argument string type va_list.
  *Return: int
  */

int print_string(va_list s)
{
	char *i = va_arg(s, char *);
	int count;

	if (i == NULL)
		i = "(null)";
	for (count = 0; i[count] != NULL; count++)
		_putchar(i[count]);
	return (count);
}

/**
  *print_percent - Function that print a percent.
  *@p: Argument character type va_list.
  *Return: int
  */

int print_percent(va_list p)
{
	(void) p;

	_putchar('%');
	return (1);
}

/**
  *print_num - Function that print a number.
  *@d: Argument number type va_list.
  *Return: int
  */

int print_num(va_list d)
{
	unsigned int pos;
	int i, c;

	i = va_arg(d, int);
	if (i < 0)
	{
		pos = (i * -1);
		_putchar('-');
		c = 1;
	}
	else
		pos = i;
	if (pos > 9)
	{
		c += print_numbers(pos);
		return (c);
	}
	_putchar(pos + 48);
	return (++c);
}

/**
  *print_numbers - Function print numbers
  *@num: variable type unsigned int.
  *Return: 0.
 */
int print_numbers(unsigned int num)
{
	unsigned int divide, module;
	int count = 0;

	if (num != 0)
	{
		divide = (num / 10);
		module = (num % 10);
		count += print_numbers(divide);
		count++;
		_putchar(module + '0');
		return (count);
	}
	return (0);
}
