/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:08:14 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/09/02 13:11:42 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "joao";

	printf("%s", ft_strupcase(str));
}
*/
/*
int	main(void)
{
	char	str[] = "Joao";
	char	dest[5];
	int	i;
	
	i = 0;

	dest = ft_strupcase(str);
	while (str[i] != '\0')
	{
		write(1, &dest[i], 1);
		i++;
	}
}
*/
