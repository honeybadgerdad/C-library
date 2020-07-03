#include <string.h>
#include <stdlib.h>
int ft_strlen(char *str1);
char *ft_strncpy(char *dest, char *src, unsigned int n);
char *ft_strndup(char *str, int n)
{
    char *str2;
   str2 = (char*)malloc((n+1) * sizeof(str2)); 
    ft_strncpy(str2, str, n);
    return(str2);
}