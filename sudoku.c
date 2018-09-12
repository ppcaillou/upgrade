#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int **grid)
{
	int i;
	int j;

	i = -1;
	ft_putchar('\n');
	ft_putchar('\t');
	while(++i < 9)
	{
		j = -1;
		while (++j < 9)
		{
			if (grid[i][j] != 0)
				ft_putchar(grid[i][j] + '0');
			else
				ft_putchar('.');
			ft_putchar(' ');
		}
			ft_putchar('\n');
			ft_putchar('\t');
	}
	ft_putchar('\n');
	ft_putchar('\n');

}

void truc(int i)
{
	printf("i = %d\n", i);
}

int	**fill_grid(char **tab, int **tab_r)
{
	int i;
	int j;

	i = 0;
	tab_r = (int**)malloc(sizeof(int*) * 9);
	while (++i <= 9)
	{
		(tab_r[i - 1]) = (int*)malloc(sizeof(int) * 20);
		j = -1;
		while (++j < 9)
		{
			if (tab[i][j] == '.')
			{
				tab_r[i-1][j] = 0;
			}
			else
				tab_r[i-1][j] = tab[i][j] - '0';
		}
	}
	return (tab_r);
}

/*void	ft_recursif(char **tab_r, char **tab_t, int i, int j)
{
	while (i <= 9 && j <= 9)
	{
		if (!is_safe(grid, i , j)
			grid[i][j]++;
		else if (j < 9)
			j++;
		else
			i++;
	}
	if (solution)
		ft_print(grid);

}*/

int	main(int ac, char **av)
{
	int	**tab_r;
	int	**tab_t;

	tab_r = fill_grid(av, tab_r);
	tab_t = fill_grid(av, tab_t);
	ft_print(tab_r);

	return (0);
}

/*----------------------*/
/*
	".5.189.6." "...5..38." ".1..6...5" ".8..35..6" "52.....34" "9..74..1." "2...5..4." ".94..2..." ".6.394.2."
*/
/*----------------------*/
