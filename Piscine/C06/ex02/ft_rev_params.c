/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:16:00 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/09/07 12:50:46 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fr_putreverse_string(char *string)
{
	int	j;

	j = 0;
	while (string[j] != '\0')
	{
		write(1, &string[j], 1);
		j++ ;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc -1;
	while (argc > i)
	{
		fr_putreverse_string(argv[i]);
		i--;
	}
	return (0);
}
