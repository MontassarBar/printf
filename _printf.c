#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *_printf-recreates the printf function to print to stdout
 *@format: character string to be printed
 * Return: the number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
va_list x;
int q = 0, w, r = 0, i = 0;
spec  specifiers[] = { {'c', _prchar}, {'s', _prstr}, {'d', _print},
{'i', _print}, {'%', _prpercent}, {0, NULL}
};
va_start(x, format);
if (format == NULL)
{
return (-1);
}
while (format[q] != '\0' && format != NULL)
{
if (format[q] == '%')
{
format++;
w = 0;
while ((specifiers[w].y != format[q]) && specifiers[w].y != 0)
w++;
if (specifiers[w].y == format[q])
i += specifiers[w].t(x);
else
{
_putchar('%');
_putchar(format[q]);
r++;
}
}
else
{
_putchar(format[q]);
r++;
}
q++;
}
va_end(x);
return (r + i);
}
