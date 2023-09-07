/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:02:58 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/09/07 17:06:48 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	r;
	int	i;

	i = 1;
	r = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		r = i * r;
		i++;
	}
	return (r);
}
/*
int	main(void)
{
	int	number;
	number = -309;

	printf("%d", ft_iterative_factorial(number));
}
*/
