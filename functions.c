#include "main.h"
#include <string.h>
/**
**_memset - fills memory with a constant byte
*loop
*@s: pointer
*@b: var
*@n: var
*Return: s
**/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;
for (x = 0; x < n; x++)
s[x] = b;

return (s);
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
z = strlen(src);
i = strlen(dest);
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
y = strlen(s1);
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
y = strlen(s);
a = strlen(accept);
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
y = strlen(s);
z = strlen(accept);
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
z = strlen(haystack);
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
y = strlen(src);
z = 0;
for (x = 0; x <= y; x++)
{
dest[z] = src[x];
z++;
}
return (dest);
}