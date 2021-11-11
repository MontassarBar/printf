#ifndef main_h
#define main_h
#include <stdarg.h>

void print_number(int n);
int _putchar(char c);
char *_itoa(int n);
int _printf(const char *format, ...);
int _strlen(char *s);
int count_d10(int n);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_memcpy(char *dest, char *src, unsigned int n);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
int _abs(int n);

int _prchar(va_list x);
int _prstr(va_list x);
int _print(va_list x);
int _prpercent(va_list x);
/**
*struct spec - type
*@y: char
*@t: pointer to function
**/
typedef struct spec
{
char y;
int (*t)(va_list x);
} spec;
#endif
