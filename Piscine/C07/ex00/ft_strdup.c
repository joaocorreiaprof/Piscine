/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-c <jsilva-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:13:14 by jsilva-c          #+#    #+#             */
/*   Updated: 2023/09/12 18:50:02 by jsilva-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(const char *src)
{
    if (src == NULL)
        return NULL;

    size_t src_len = 0;
    while (src[src_len] != '\0')
        src_len++;

    char *dup_str = (char *)malloc((src_len + 1) * sizeof(char));

    if (dup_str == NULL)
        return NULL;

    size_t i = 0;
    while (i <= src_len)
    {
        dup_str[i] = src[i];
        i++;
    }

    return dup_str;
}

#include <stdio.h>

char *ft_strdup(const char *src);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <source_string>\n", argv[0]);
        return 1;
    }

    char *source = argv[1];
    char *duplicate = ft_strdup(source);

    if (duplicate == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Source String: %s\n", source);
    printf("Duplicate String: %s\n", duplicate);

    // Remember to free the memory allocated for the duplicate string.
    free(duplicate);

    return 0;
}
