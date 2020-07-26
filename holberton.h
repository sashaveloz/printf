#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <limits.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  *struct func - Struct to select a specific function to printf.
  *@tp: Check types of sv.
  *@ftp: Call function to print types.
  *Description: Check specific types for functions
  */
typedef struct func
{
	char *tp;
	int (*ftp)(va_list);
} func_t;

int _printf(const char *format, ...);
int _putchar(char c);
/*functions to print*/
int print_char(va_list c);
int print_string(va_list s);
int print_percent(va_list p);
int print_num(va_list d);
/*More functions*/
int (*get_spc(char s))(va_list);
int print_numbers(unsigned int num);


#endif /*HOLBERTON_H*/
