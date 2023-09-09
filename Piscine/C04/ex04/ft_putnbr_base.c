/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 11:23:07 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/09/09 11:26:04 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nb, char *base);
void	write_base(long int nb, char *base, int div);
int		check_base(char *base);

void	ft_putnbr_base(int nb, char *base)
{
	int			i;
	long int	j;

	i = check_base(base);
	j = 0;
	if (i > 1)
	{
		if (nb == -2147483648)
		{
			write(1, "-", 1);
			j = nb;
			j *= -1;
			write_base(j, base, i);
			write(1, "\n", 1);
			return ;
		}
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		write_base(nb, base, i);
	}
	write(1, "\n", 1);
}

void	write_base(long int nb, char *base, int div)
{
	char	n;

	if ((nb / div) == 0)
	{
		n = base[nb % div];
		write(1, &n, 1);
		return ;
	}
	else
		write_base((nb / div), base, div);
	n = base[nb % div];
	write(1, &n, 1);
	return ;
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			else if (base[j] == '+' || base[j] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	int	nb;

	nb = -2147483648;
	ft_putnbr_base(nb, "0123456789");
	ft_putnbr_base(nb, "01");
	ft_putnbr_base(nb, "0123456789ABCDEF");
	ft_putnbr_base(nb, "poneyvif");
}
*/
