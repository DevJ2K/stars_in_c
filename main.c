#include <stdlib.h>
#include <unistd.h>

void	star(unsigned int size);

int	is_number(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else
			return (0);
	}
	return (1);
	
}
int	main(int argc, char **argv)
{
	if (argc == 2 && is_number(argv[1]))
		star(atoi(argv[1]));
	return(0);
}