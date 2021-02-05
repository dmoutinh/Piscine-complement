#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *range;
	i = 0;
	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
