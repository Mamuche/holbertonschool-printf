#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>


int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list ap, int *char_num);
int print_str(va_list ap, int *char_num);
int print_prct(va_list ap, int *char_num);

#endif
