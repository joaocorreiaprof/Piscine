/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:44:50 by tigoncal          #+#    #+#             */
/*   Updated: 2023/08/27 13:39:25 by tigoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_printar(int x, int y, int larg, int alt)
{
	if ((larg == 0 && alt == 0) || (larg == x - 1 && alt == y - 1))
	{
		ft_putchar('A');
	}
	else if ((larg == 0 && alt == y - 1) || (larg == x - 1 && alt == 0))
	{
		ft_putchar('C');
	}
	else if (alt == 0 || alt == y - 1 || larg == 0 || larg == x - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	alt;
	int	larg;

	alt = 0;
	larg = 0;
	while (alt < y)
	{
		while (larg < x)
		{
			ft_printar(x, y, larg, alt);
			larg++;
		}
		larg = 0;
		ft_putchar('\n');
		alt++;
	}
}
