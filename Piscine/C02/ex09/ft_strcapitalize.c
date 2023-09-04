/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <jsilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:49:47 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/09/04 21:05:10 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//CODIGO NAO PASSOU NA MAQUINA 
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '/')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
			i++;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') && i != 0)
			str[i] = str[i] + 32;
		else if ((str[i] >= 'a' && str[i] <= 'z') && i == 0)
			str[i] = str[i] - 32;
		else
			str[i] = str[i];
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "ola+eSTou-MUITO cAnSaDo!";
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
*/
