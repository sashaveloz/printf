# 0x11. C - printf

## Description

In this Holberton project we are going to create a function that emulates 'printf' functioning.
_printf Function produce an output according to a format. 

## Functions

For this project execution, we are going to use this authorized functions and macros:

* write
* malloc
* free
* va_start
* va_end
* va_copy
* va_arg

Additionally we will create the following functions for the proper execution of the _printf function.

* print_char - Function that print a char. 
* print_string - Function that print a string.
* print_percent - Function that print a percent.
* print_num - Function that print a number.
* print_numbers - Function print numbers.

## Files

* [_printf.c](https://github.com/sashaveloz/printf/blob/master/_printf.c)
* [array_struct.c](https://github.com/sashaveloz/printf/blob/master/array_struct.c)
* [func_print.c](https://github.com/sashaveloz/printf/blob/master/func_print.c)
* [holberton.h](https://github.com/sashaveloz/printf/blob/master/holberton.h)
* [Flowchart](https://drive.google.com/file/d/1eHBIKipdDJQ8Ejm77TQdJYJ9xVR6Q99_/view?usp=sharing)

## Requirements

* Prints a string to the standard output, according to a given format.
* All files were created and compiled on Ubuntu 14.04.4 LTS USING GCC 4.8.4 with the gcc flags: -Wall -Werror -Wextra -Pedantic _Wno-format *.c'
* All files were linted for syntax and style with [Betty](https://github.com/holbertonschool/Betty).

## Usage

~~~c
int age;
  age = 25;
  _printf ( "I am %d years old\n", age );
~~~

* In this example, printf has two arguments. The first is a string: "I am %d years old\n". The second is an integer, "age".

* Now, in this case, the first format specification goes with the first additional argument, second goes with second one. Look at the example:

~~~c
int x = 5, y = 10;
_printf ( "x is %d and y is %d\n", x, y );
~~~

## Prototype

int _printf(const char *format, ...);

## Authors

***Valentina Castillo***
Twitter [@diavale86](https://twitter.com/diavale86)  
***Sasha Martina Veloz***
Twitter [@velozsasha](https://twitter.com/velozsasha)
