#include <stdlib.h>

int 	c_ins(char c, char *s)
{
	int l;

	l = 0;
	while (s[l] != '\0')
	{
		if (s[l] == c)
			return (1);
		l++;
	}
	return (0);
}

int		s_number(char *str, char *charset)
{
	int l;
	int r;

	l = 0;
	r = 0;
	while (str[l] != '\0')
	{
		if (str[l] != '\0' && c_ins(str[l], charset))
		{
			if (str[l + 1] != '\0' && !c_ins(str[l + 1], charset))
			{
				l++;
				while (str[l] != '\0' && !c_ins(str[l], charset))
				{
					l++;
					if (str[l] != '\0' && c_ins(str[l], charset))
					{
						l--;
						r++;
						break ;
					}
				}
			}
		}
		l++;
	}
	return (r);
}

char	**ft_split(char *str, char *charset)
{
	int i;
	int j;
	int g;
	char **tabbed;

	i = 0;
	j = 0;
	tabbed = malloc((s_number(str, charset) + 1) * sizeof(char*));
	if (!tabbed)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] != '\0' && c_ins(str[i], charset))
		{
			if (str[i + 1] != '\0' && !c_ins(str[i + 1], charset))
			{
				i++;
				g = 0;
				while (str[i] != '\0' && !c_ins(str[i], charset))
				{
					tabbed[j][g] = str[i];
					g++;
					i++;
					if (str[i] != '\0' && c_ins(str[i], charset))
					{
						tabbed[j][g] = '\0';
				        i--;
				        j++;
						break ;
					}
				}
			}
		}
		i++;
	}
	tabbed[j] = 0;
	return (tabbed);
}
