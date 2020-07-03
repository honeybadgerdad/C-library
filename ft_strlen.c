#include <string.h>
int ft_strlen(char *str1)
{
    int i;
    i = 0;
    while (str1[i] != '\0')
    {
        i++;
    }
    return (i);
}