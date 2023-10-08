void	my_putchar(char c);
void	middle_star(unsigned int size, int lines_length);
int	big_lines(unsigned int size, int btw_spaces);
void	bottom_star(unsigned int size, int btw_spaces);
int	top_star(unsigned int size);

void	add_space(unsigned int nb)
{
	for (int i = 0; i < nb; i++)
	{
		my_putchar(' ');
	}
	
}

void	star(unsigned int size)
{
	int	btw_spaces;
	int	lines_length;

	if (size == 0)
		return ;
	btw_spaces = top_star(size);
	lines_length = big_lines(size, btw_spaces);
	middle_star(size, lines_length - 2);
	big_lines(size, btw_spaces);
	bottom_star(size, btw_spaces);
}