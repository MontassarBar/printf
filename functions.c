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
*_abs - abs
*@n: var
*Return: n
**/
int _abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
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
 * _itoa - int to str
 *
 * @n: number
 * Return: s
 **/
char *_itoa(int n)
{
	char *s;
	int x = 0,
	y = 0, c = 0, i = 0, b = _abs(n), l = 0, e = 1;

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
