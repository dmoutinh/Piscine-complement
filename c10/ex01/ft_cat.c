# include <fcntl.h>
# include <unistd.h>

void	put_error(char *dir)
{
	int i;

	i = 0;
	write(2, "ft_cat: ", 8);
	while (dir[i] != 0)
		i++;
	write(2, dir, i);
	write(2, ": No such file or directory\n", 28);
}

void	printt(void)
{
	char a;

	while (read(0, &a, 1) != 0)
		write(1, &a, 1);
}

int		main(int argc, char **argv)
{
	int		file;
	int		i;
	char	*rd;

	i = 0;
	if (argc < 2)
		printt();
	else
	{
		while (++i < argc)
		{
			file = open(argv[i], O_RDONLY);
			if (file >= 0)
				while (read(file, &rd, 1) != 0)
					write(1, &rd, 1);
			else
				put_error(argv[i]);
			close(file);
		}
	}
	return (0);
}
