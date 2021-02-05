#include "ft_stock_str.h"

#include <unistd.h>

void	prchar(char c)
{
	write (1, &c, 1);
}

void	putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
	}
	if (nb >= 10)
	{
		putnbr(nb / 10);
		putnbr(nb % 10);
	}
	else
		prchar(nb + '0');
}

void 	putstr(char *s)
{
	int j;

	j = 0;
	while (s[j] != '\0')
	{
		prchar(s[j]);
		j++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str != 0)
	{
		putstr(par[i].str);
		prchar('\n');
		putnbr(par[i].size);
		prchar('\n');
		putstr(par[i].copy);
		prchar('\n');
		i++;
	}
}
