/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:38:42 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/09/01 10:35:29 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	x;
	int	y;
	int	div_result;
	int	mod_result;

	x = 6;
	y = 2;

	ft_div_mod(x, y, &div_result, &mod_result);
	printf("%d\n", div_result);
	printf("%d", mod_result);
}
*/
