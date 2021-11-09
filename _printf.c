#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
*
*
**/
int _prchar(va_list x)
{
char ptr;
ptr = va_arg(x, int);
_putchar(ptr);
return (1);
}
int _prstr(va_list x)
{
char *ptr;
int y = 0;
ptr = va_arg(x, char*);
y = _strlen(ptr);
write (STDOUT_FILENO, ptr, _strlen(ptr));
return (y);
}
int _print(va_list x)
{
int y, e;
char *t;
y = 0;
e = 0;
y = va_arg(x, int);
t = _itoa(y);

e = _strlen(t);
write (STDOUT_FILENO, t, _strlen(t));
return (e);
}
int _prpercent()
{
_putchar('%');
return (1);
}
int _printf(const char *format, ...)
{
va_list x;
int q, w, r, i;
spec  specifiers[] = {
{'c', _prchar},
{'s', _prstr},
{'d', _print},
{'i', _print},
{'%', _prpercent},
{0, NULL}
};
q = 0;
r = 0;
i = 0;
va_start(x, format);
while (format[q] != '\0' && format != NULL)
{
if (format[q] == '%')
{
format++;
w = 0;
while ((specifiers[w].y != format[q]) && specifiers[w].y != 0)
{
w++;
}
if (specifiers[w].y == format[q])
{
i = specifiers[w].t(x);
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
