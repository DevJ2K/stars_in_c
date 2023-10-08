void	my_putchar(char c);
void	add_space(unsigned int nb);

void	my_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		my_putchar(str[i]);
		i++;
	}
}

int	top_star(unsigned int size)
{
	int btw_spaces;

	btw_spaces = -1;
	if (size == 1)
	{
		add_space(3);
		my_putstr("*\n");
		return (1);
	}
	for (int i = 1; i < size + 1; i++)
	{
		add_space(size * 2 + size - i);
		my_putchar('*');
		if (btw_spaces > 0)
		{
			add_space(btw_spaces);
			my_putchar('*');
		}
		my_putchar('\n');
		btw_spaces += 2;
	}
	return (btw_spaces - 2);
}

void	bottom_star(unsigned int size, int btw_spaces)
{
	if (size == 1)
	{
		add_space(3);
		my_putstr("*\n");
		return ;
	}
	for (int i = 0; i < size; i++)
	{
		add_space(size * 2 + i);
		my_putchar('*');
		if (btw_spaces > 0)
		{
			add_space(btw_spaces);
			my_putchar('*');
		}
		my_putchar('\n');
		btw_spaces -= 2;
	}
}

int	big_lines(unsigned int size, int btw_spaces)
{
	int	lines_length;

	lines_length = 0;
	for (int i = 0; i < size * 2 + 1; i++)
	{
		my_putchar('*');
		lines_length++;
	}
	add_space(btw_spaces);
	lines_length += btw_spaces;
	for (int i = 0; i < size * 2 + 1; i++)
	{
		my_putchar('*');
		lines_length++;
	}
	my_putchar('\n');
	return (lines_length);
}

void	middle_star(unsigned int size, int lines_length)
{
	for (int i = 1; i < size + 1; i++)
	{
		add_space(i);
		my_putchar('*');
		add_space(lines_length - i - 1);
		my_putstr("*\n");
		lines_length--;
	}
	if (size == 1)
		return ;
	for (int i = size - 1; i > 0; i--)
	{
		add_space(i);
		my_putchar('*');
		add_space(lines_length - i + 1);
		my_putstr("*\n");
		lines_length++;
	}
}