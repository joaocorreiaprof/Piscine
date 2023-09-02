/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:32:44 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/08/29 12:25:19 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int a[])
{
	ft_putchar (a[0] + '0');
	ft_putchar (a[1] + '0');
	ft_putchar (a[2] + '0'); 
	if (a[0] < 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	a[3];

	a[0] = 0;
	while (a[0] <= 7)
	{
		a[1] = a[0] + 1;
		while (a[1] <= 8)
		{
			a[2] = a[1] + 1;
			while (a[2] <= 9)
			{
				ft_putnbr(a);
				a[2]++;
			}
			a[1]++;
		}
		a[0]++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
