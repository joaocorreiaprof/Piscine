/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <jsilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:19:56 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/09/12 13:35:43 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0 && power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		r *= nb;
		power--;
	}
	return (r);
}
/*
int	main(int argc, char **argv)
{
	int	power;

	if (argc != 3)
	{
		printf("Too few or too many arguments");
		return (0);
	}

	power = ft_iterative_power(atoi(argv[1]), atoi(argv[2]));
	printf("the power of the number is: %d", power);
	return (0);
}
*/
