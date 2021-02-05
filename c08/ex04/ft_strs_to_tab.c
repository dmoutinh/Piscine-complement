#include "ft_stock_str.h"

#include <stdlib.h>

int						ft_strlen(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
		j++;
	return (j);
}

struct	s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int 		i;
	t_stock_str	*r;

	i = 0;
	r = malloc((ac + 1) * sizeof(t_stock_str));
	if (!r)
		return NULL;
	while (i < ac)
	{
		r[i].str = av[i];
		r[i].copy = av[i];
		r[i].size = ft_strlen(av[i]);
		i++;
	}
	r[i].str = 0;
	return (r);
}
