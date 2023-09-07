/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:51:23 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/09/07 13:06:21 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_string(char *string)
{
	int	j;

	j = 0;
	while (string[j] != '\0')
	{
		write(1, &string[j], 1);
		j++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while(argc > i)
	{
		ft_print_string(argv[i]);
		i++;
	}
}
