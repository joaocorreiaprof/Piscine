/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:10:09 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/08/31 14:57:27 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i; 

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z'))
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
	char	test[] = "HelloWorld";

	printf("%d", ft_str_is_alpha(test));
}*/
