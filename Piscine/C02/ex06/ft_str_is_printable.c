/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:19:20 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/09/04 10:07:59 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] < 32 || str[x] > 127)
		{
			return (0);
		}
		x++;
	}
	return (1);
}
/*
int	main()
{
	char	test[100] = "A ¿Z";

	printf("%d", ft_str_is_printable(test));
}
*/
