#include <string.h>
char *ft_strstr(char *str, char *to_find, int n)
{
    int i;

    i = 0;
    if (to_find[0] == '\0')
    {
        return (str);
    }
    while (*str != '\0')
    {
        while (i <= n)
        {
            i = 0;
            while (str[i] == to_find[i] && to_find[i] != '\0')
            {
                i++;
            }
            if (to_find[i] == '\0')
            {
                return (str[0]);
            }
            str++;
        }
    }
    return (NULL);
}