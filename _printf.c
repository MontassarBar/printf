#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
*
*
**/
void _prchar(va_list x)
{
char *ptr;
ptr = malloc(sizeof(char) * 2);
ptr[0] = va_arg(x, int);
ptr[1] = '\0';
write (STDOUT_FILENO, ptr, _strlen(ptr));
}
void _prstr(va_list x)
{
char *ptr;
ptr = va_arg(x, char*);
if (ptr == NULL)
ptr = "(null)";
write (STDOUT_FILENO, ptr, _strlen(ptr));
}
void _print(va_list x)
{
int y;
y = va_arg(x, int);
print_number(y);
}
void _prpercent()
{
_putchar('%');
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
while (format[q] != '\0' && format != NULL && format[q] == '%')
{
if (format[q] == '%')
format++;
w = 0;
while ((specifiers[w].y != format[q]) && specifiers[w].y != 0)
{
w++;
}
if (specifiers[w].y == format[q])
specifiers[w].t(x);
q++;
}
_putchar('\n');
va_end(x);
return (0);
}
