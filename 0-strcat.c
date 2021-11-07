#include "main.h"
#include <string.h>
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
