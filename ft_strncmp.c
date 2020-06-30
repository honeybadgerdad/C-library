#include<unistd.h>
#include<string.h>
int	ft_strncmp(char *s1, char *s2, int n)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && i <= n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] == s2[i])
		{
			i++;
			if ((s1[i] == '\0' && s2[i]) == '\0')
			{
				return (0);
			}
		}
	}
	return (0);
}