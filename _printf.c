#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
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
ptr = va_arg(x, char*);
if (ptr == NULL)
ptr = "(null)";
return (write (STDOUT_FILENO, ptr, _strlen(ptr)));
}
int _print(va_list x)
{
int y;
char *t;
y = va_arg(x, int);
t = _itoa(y);
return (write (STDOUT_FILENO, t, _strlen(t)));
}
int _prpercent()
{
_putchar('%');
return (1);
}
int _printf(const char *format, ...)
{
va_list x;
int q, w;
spec  specifiers[] = {
{'c', _prchar},
{'s', _prstr},
{'d', _print},
{'i', _print},
{'%', _prpercent},
{0, NULL}
};
q = 0;
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
specifiers[w].t(x);
}
else
{
_putchar(format[q]);

}
q++;
}
va_end(x);
return (0);
}
