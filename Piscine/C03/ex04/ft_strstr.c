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
	while (str[i] != '\0')
	{
		if (str[i] == to_find[i] || to_find[x] == '\0')
		{
			x++;
		}
		else
		{
			x = 0;
			i++;
		}
	}
	if (x == 0)
	{
		return ("NULL");
	}
	else
	{
		return (&str[i - x]);
	}
}
/*
int	main(void)
{
	char	string[] = "Help me god!";
	char	to_find[] = "god";

	ft_strstr(string, to_find);
	printf("%s\n", string);
	printf("%s", to_find); 
}
*/