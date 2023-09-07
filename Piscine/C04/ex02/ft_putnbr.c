/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:37:34 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/09/07 20:08:17 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	digit;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb; 
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	digit = nb % 10 + '0'; 
	ft_putchar(digit); 
}
/*
int	main(void)
{
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(69);
	write(1, "\n", 1);
	ft_putnbr(330);
	write(1, "\n", 1);
	ft_putnbr(41223456);
	write(1, "\n", 1);
	ft_putnbr(32);
	write(1, "\n", 1);
	ft_putnbr(-420);
	write(1, "\n", 1);
	ft_putnbr(123456890);
	write(1, "\n", 1);
	ft_putnbr(-99882200);
	write(1, "\n", 1);
	return (0);
}
*/
