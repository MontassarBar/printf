#include "main.h"
#include <string.h>
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
