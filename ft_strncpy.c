#include <unistd.h>
#include <string.h>
char	*strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (src[i] != '\0')
		if (i < n)
		{
			dest[i] = src[i];
			i++;
		}
		else
		{
			dest[i] = '\0';
			i++;
		}
	return (dest);
}
