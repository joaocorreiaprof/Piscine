/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:43:49 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/09/11 09:55:42 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	j;
	int	k;

	(void)argc;
	j = 1;
	while (argv[j])
	{
		k = 0;
		while (argv[j][k])
		{
			ft_putchar(argv[j][k]);
			k++;
		}
		ft_putchar('\n');
		j++;
	}
}
