#include "main.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * count_d10 - count number of digits
 *
 * @n: number
 *
 * Return: 10^count-1
 **/
int count_d10(int n)
{
	int x;

	x = 1;
	n /= 10;
	while (n != 0)
	{
		n /= 10;
		x *= 10;
	}
	return (x);
}
/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
* *_strcat -  concatenates two strings
*loop
*@dest: pointer
*@src: pointer
*Return: dest
**/
char *_strcat(char *dest, char *src)
{
int x, z, i;
z = _strlen(src);
i = _strlen(dest);
for (x = 0; x < z; x++)
{
dest[i] = src[x];
i++;
}
return (dest);
}
/**
**_memcpy - copies memory area
*loop
*@dest: pointer
*@src: pointer
*@n: var
*Return: dest
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x;
int y;
y = 0;
for (x = 0; x < n; x++)
{
dest[y] = src[x];
y++;
}
return (dest);
}
/**
*_abs - abs
*@n: var
**/
int _abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
/**
**_strchr - locates a character in a string
*loop
*@s: pointer
*@c: var
*Return: s
**/
char *_strchr(char *s, char c)
{
while ((*s != c) && (*s != '\0'))
{
s++;
}
if (*s == c)
return (s);
else
return (NULL);
}
/**
 * _strlen - get length of string
 *
 * @s: string
 *
 * Return: length
 **/
int _strlen(char *s)
{
int i;
i = 0;
while (*(s + i) != '\0')
{
i++;
}
return (i);
}
/**
*_strcmp - compares two strings
*loop
*@s1: pointer
*@s2: pointer
*Return: a
**/
int _strcmp(char *s1, char *s2)
{
int x, y, z, a;
y = _strlen(s1);
z = 0;
a = 0;
for (x = 0; ((x < y)&&(z == 0)); x++)
{
if (s1[x] != s2[x])
z = 1;
if (z == 1)
a = s1[x] - s2[x];
}
return (a);
}
/**
*_strspn - gets the length of a prefix substring
*loops
*@s: pointer
*@accept: pointer
*Return: r
**/
unsigned int _strspn(char *s, char *accept)
{
int x, y, z, a, r;
y = _strlen(s);
a = _strlen(accept);
r = 0;
for (x = 0; x < y; x++)
{
for (z = 0; z < a; z++)
{
if (s[x] == accept[z])
break;
}
if (s[x] == accept[z])
r++;
else if (s[x] != accept[z])
break;
}
return (r);
}
/**
**_strpbrk - searches a string for any of a set of bytes
*loops
*@s: pointer
*@accept: pointer
*Return: s+x or NULL
**/
char *_strpbrk(char *s, char *accept)
{
int x, i, y, z;
y = _strlen(s);
z = _strlen(accept);
for (x = 0; x < y; x++)
{
for (i = 0; i < z; i++)
{
if (s[x] == accept[i])
return (s + x);
}
}
return (NULL);
}
/**
**_strstr - locates a substring
*loop
*@haystack: pointer;
*@needle: pointer
*Return: h or Null
**/
char *_strstr(char *haystack, char *needle)
{
int y, z;
z = _strlen(haystack);
for (y = 0; y < z; y++)
{
if (*needle == haystack[y])
return (haystack + y);
}
return (NULL);
}
/**
**_strcpy - copies the string
*pointerrrrs
*@dest: pointers
*@src: pointers
*Return: dest
**/
char *_strcpy(char *dest, char *src)
{
int x, y, z;
y = _strlen(src);
z = 0;
for (x = 0; x <= y; x++)
{
dest[z] = src[x];
z++;
}
return (dest);
}
#include <stdio.h>
/**
 * print_number - hi
 * @n: hi
 */
void print_number(int n)
{
int x, n1, d, r;
n1 = n;
if (n == 0)
_putchar(n + 48);
else if ((n > 0) && (n < 10))
{
x = n1 % 10;
_putchar(x + 48);
}
else if ((n < 0) && (n > -10))
{
n1 = -n1;
x = n1 % 10;
_putchar('-');
_putchar(x + 48);
}
else
{
if (n < 0)
{
_putchar('-');
d = -1;
}
else
d = 1;
r = 11;
while (r >= 10)
{
d = d * 10;
r = n1 / d;
}
while ((d > 0) || (d < 0))
{
x = n1 / d;
n1 = n1 % d;
_putchar(x + 48);
d = d / 10;
}
}
}
/**
 * _itoa - int to str
 *
 * @n: number
 **/
char *_itoa(int n)
{
	char *s;
	int x = 0,
	y = 0,
	c = 0,
	i = 0,
	b = _abs(n),
	l = 0,
	e = 1;

	while (b != 0)
	{
		b /= 10;
		l++;
	}

	x = count_d10(n);
	if (n < 0)
	{
		y = 1;
		e = -1;
	}

	s = malloc(sizeof(char) * (l + y + 1));
	if (s == NULL)
		return (NULL);

	if (n < 0)
		s[i++] = '-';

	while (x != 0)
	{
		c = e * ((n / x) % 10) + '0';
		x /= 10;
		s[i] = c;
		i++;
	}

	s[i] = '\0';

	return (s);
}
