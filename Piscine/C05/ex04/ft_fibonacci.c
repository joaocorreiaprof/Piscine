/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <jsilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:51:40 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/09/12 13:50:36 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1 || index == 2)
	{
		return (1);
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}
/*
int	main(int argc, char **argv)
{
	int	n;
	int	res;

	if (argc != 2)
	{
		printf("Input nao aceite!");
		return (0);
	}
	n = atoi(argv[1]);
	res = ft_fibonacci(n);
	printf("The number %d in Fibonacci sequence is: %d\n", n, res);
	return (0);
}*/
