/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:19:30 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/09/05 10:34:31 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		i++;
		count++; 
	}
	return (count);
}
/*
int	main(void)
{
	char	string[100] = "LUKE! IM YOUR FATHER!";

	printf("The number of characters is: %d\n", ft_strlen(string));
}
*/
