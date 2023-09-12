/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <jsilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:33:07 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/09/12 11:45:50 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	exp;

	exp = 1;
	if (nb > 0)
	{
		while (exp * exp <= nb)
		{
			if (exp * exp == nb)
				return (exp);
			if (exp > 46340)
				return (0);
			exp++;
		}
	}
	return (0);
}
/*
int	main(int argc, char **argv)
{
	int res;

	if (argc != 2)
	{
		printf("Input not accepted!");
		return (0);
	}
	res = ft_sqrt(atoi(argv[1]));
	printf("The square root of the number %d is: %d\n", atoi(argv[1]), res);
	return (0);
}
*/
