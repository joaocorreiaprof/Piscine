/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <jsilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:54:09 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/09/12 16:02:03 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	prime(int npn)
{
	int	n;

	n = 2;
	while (n < (npn / (n - 1)))
	{
		if ((npn % n) == 0)
			return (0);
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	npn;

	if (nb <= 2)
		return (2);
	npn = nb;
	while (prime(npn) == 0)
		npn++;
	return (npn);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	res;

	if (argc != 2)
	{
		printf("Input not accepted!");
		return (0);
	}
	res = ft_find_next_prime(atoi(argv[1]));
	printf("The next prime number is: %d\n", res);
	return (0);
}
*/
