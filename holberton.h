#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <limits.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  *struct sv - Struct to select a specific function to printf.
  *@md: Check types of sv.
  *@fmd: Call function to print types.
  *Description: Check specific types for functions
  */

typedef struct func
{
	char *md;
	int (*fmd)(va_list);
} sv_t;

int _printf(const char *format, ...);
int _putchar(char c);
/*functions to print*/
int print_char(va_list c);
int print_string(va_list s);
int print_percen(va_list p);
int print_integer(va_list i);
int print_float(va_list d);
/*More functions*/
int _strlen(char *s);
int (*get_spc(char s))(va_list);
int print_numbers(unsigned int num);


#endef /*HOLBERTON_H*/
