/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <jsilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:37:50 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/09/05 19:08:09 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (((s1[i] && s2[i]) != '\0') && i < n) 
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else 
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}
/*
int     main(void)
{
    char    str1[] = "wwwlo";
    char    str2[] = "wwwld";
    int     t = 3;
    //int     result = ft_strncmp(str1, str2, t);

    printf("%d",ft_strncmp(str1, str2, t));
}
*/
