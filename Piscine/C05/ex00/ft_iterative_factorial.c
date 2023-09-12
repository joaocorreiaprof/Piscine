/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <jsilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:02:58 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/09/12 13:33:39 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	r;

	i = 1;
	r = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		r *= i;
		i++;
	}
	return (r);
}
/*
int	main(int argc, char **argv)
{
	int	fact;

	if (argc != 2)
	{
		printf("Input not accepted");
		return (0);
	}
	fact = ft_iterative_factorial(atoi(argv[1]));
	printf("The factorial of the number is: %d\n", fact); 
	return (0);
}
*/
