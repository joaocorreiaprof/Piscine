/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:17:35 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/09/07 20:18:57 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

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
int	main(void)
{
	printf("%i", ft_recursive_factorial(5));
	return (0);
}
*/
