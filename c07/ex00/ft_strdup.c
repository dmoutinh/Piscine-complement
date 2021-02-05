#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dupe;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	dupe = malloc(sizeof(char) * (len + 1));
	if (!dupe)
		return (NULL);
	while (src[i])
	{
		dupe[i] = src[i];
		i++;
	}
	dupe[i] = '\0';
	return (dupe);
}
