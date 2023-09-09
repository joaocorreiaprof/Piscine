/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 20:38:44 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/09/04 21:03:30 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	if (to_find[i] == 0)
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + x] == to_find[x])
		{
			x++;
			if (to_find[x] == '\0')
			{
				return (&str[i]);
			}
		}
		x = 0;
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	string[] = "teteste";
	char	to_find[] = "teste";

	printf("%s", ft_strstr(string, to_find));
}
*/
