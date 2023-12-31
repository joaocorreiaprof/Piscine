/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:19:15 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/09/04 10:01:05 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] < 'a' || str[x] > 'z')
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
	char	test[100] = "Welcome";

	printf("%d", ft_str_is_lowercase(test));
}
*/
