void	ft_putchar(char c);

void	ft_print_first_line(int x)
{
    int		x_length;
    
    x_length = 1;
    ft_putchar('A');
    while (x_length < x - 1)
    {
        ft_putchar('B');
        x_length++;
    }
    if (x != 1)
        ft_putchar('A');
    ft_putchar('\\n');
}
void	ft_print_mid_line(int x, int y)
{
    int x_length;
    int y_length;

    y_length = 1;
    while (y_length < y - 1)
    {
	ft_putchar('B');
	x_length = 1;
	while (x_length < x - 1)
	{
		ft_putchar(' ');
		x_length++;
	}
	if (x != 1)
		ft_putchar('B');
	ft_putchar('\\n');
	y_length++;
  }
}

void	ft_print_last_line(int x, int y)
{
    int		x_length;

    x_length = 1;
    ft_putchar('C');
    while (x_length < x - 1)
    {
        ft_putchar('B');
        x_length++;
    }
    if (x != 1)
        ft_putchar('C');
    ft_putchar('\n');
}

void    rush(int x, int y)

{
    if (x > 0 && y > 0)
    {
        ft_print_first_line(x);
        ft_print_mid_line(x,y);
        ft_print_last_line(x,y);
    }
    else if(x == 0 && y > 0)
    {
        while (y > 0)
        {
            ft_putchar('\n');
            y--;
        }
    }
}