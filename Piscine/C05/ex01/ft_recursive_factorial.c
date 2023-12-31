/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <jsilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:17:35 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/09/12 10:14:59 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb >= 1)
	{
		return (nb *= ft_recursive_factorial(nb -1));
	}
	else
	{
		return (1);
	}
}
/*
int	main(int argc, char **argv)
{
	int	fact;

	if (argc !=2)
	{
		printf("Input not accepted");
	}

	fact = ft_recursive_factorial(atoi(argv[1]));

	printf("the factorial of the number is: %d", fact);
	return (0);
}
*/
