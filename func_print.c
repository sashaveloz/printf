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
	for (count = 0; i[count] != '\0'; count++)
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

/**
  *print_num - Function that print a number.
  *@d: Argument number type va_list.
  *Return: int
  */

int print_num(va_list d)
{
	unsigned int positive;
	int num, count;

	num = va_arg(d, int);
	if (num < 0)
	{
		positive = (num * -1);
		_putchar('-');
		count = 1;
	}
	else
		positive = num;
	if (positive > 9)
	{
		count += print_numbers(positive);
		return (count);
	}
	_putchar(positive + 48);
	return (++count);
}
