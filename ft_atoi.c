#include <unistd.h>
int ft_atoi(char *str)
{
    int i;
    int sign;
    int result;
    i = 0;
    sign = 1;
    result = 0;
 
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {

            if (str[i] == '+' || str[i] == '-')
            {
                if (str[i] == '-')
                {
                    sign = -1;
                }
                i++;
            }
        }   while (str[i] >= 0 && str[i] <= 9)
    {
        i++;
    }
}