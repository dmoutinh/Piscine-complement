# include <fcntl.h>
# include <unistd.h>
# include <sys/stat.h>
# include <sys/types.h>

int	main(int argc, char **argv)
{
	write(1, &((char)argc), 1);
	return 0;
}
