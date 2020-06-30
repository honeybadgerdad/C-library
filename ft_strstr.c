#include <string.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		i = 0;
		while (str[i] == to_find[i] && to_find[i] != '\0')
		{
			i++;
		}
		if (to_find[i] == '\0')
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}
