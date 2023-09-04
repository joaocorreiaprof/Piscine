/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:03:36 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/09/04 10:06:17 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main()
{
	char	test[100] = "HeY";

	printf("%d", ft_str_is_uppercase(test));
}
*/
