#include <string.h>
#include <stdlib.h>
int ft_strlen(char *str1);
char *ft_strcpy(char *dest, char *src);
char *ft_strdup(char *str)
{
    char *str2;
   str2 = (char*)malloc((ft_strlen(str)+1) * sizeof(str2)); 
    ft_strcpy(str2, str);
    return(str2);
}