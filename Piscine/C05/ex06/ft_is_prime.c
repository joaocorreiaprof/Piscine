/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <jsilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:18:20 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/09/12 13:57:39 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2) 
	{
		return (0);
	}
	if (nb == 2) 
	{
		return (1);
	}
	i = 2;
	while (i < nb) 
	{
		if (nb % i == 0) 
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main(int argc, char **argv)
{
    int prime;
    (void)argc;
    prime = ft_is_prime(atoi(argv[1]));
    printf("%d", prime);
    return (0);
}
*/
