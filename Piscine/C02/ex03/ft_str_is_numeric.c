/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:58:43 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/08/31 16:15:12 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] < '0' || str[x] > '9' )
		{
			return (0);
		}
		x++;
	}
	return (1);
}

int	main()
{
	char	test[100] = "Hello";

	printf("%d", ft_str_is_numeric(test));
}
