/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <jsilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:37:50 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/09/07 19:48:23 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n) 
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		if (s1[i] == '\0' || s2[i] =='\0')
		{
			return (0);
		}
		i++;
	}
	return (0);
}
/*
int     main(void)
{
    char    str1[] = "wwwl";
    char    str2[] = "wwwld";
    int     t = 4;

    printf("%d",ft_strncmp(str1, str2, t));
}
*/
