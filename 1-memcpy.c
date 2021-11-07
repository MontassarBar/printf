#include "main.h"
#include <string.h>
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
