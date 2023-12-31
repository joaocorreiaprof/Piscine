/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:16:52 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/09/04 21:04:49 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//CODIGO NAO PASSOU NA MAQUINA
#include <unistd.h>
//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 97)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[100] = "SUCHAWONDERFULLWORLD";
	
	printf("%s", ft_strlowcase(str));
}
*/
