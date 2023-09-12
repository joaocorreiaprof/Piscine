/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <jsilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:36:22 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/09/12 15:34:15 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}
/*
int	main(int argc, char **argv)
{
	if (argc != 3)
	{
	printf("Usage: %s base power\n", argv[0]);
	return (1);
	}

	int base = atoi(argv[1]);
	int power = atoi(argv[2]);

	int result = ft_recursive_power(base, power);
	printf("The power of the number is: %d\n", result);

	return (0);
}
*/
