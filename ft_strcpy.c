#include <unistd.h>
#include <string.h>
#include <stdlib.h>
/*int ft_strlen(char *str1);*/

char ft_strcpy(char *dest, char *src)
{
    int i;
    i = 0;
   /* dest = (char *) malloc(ft_strlen(src));*/
    while (src[i] != '/0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '/0';
    return (dest);
}