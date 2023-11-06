/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:32:23 by marvin            #+#    #+#             */
/*   Updated: 2023/11/06 18:32:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

size_t ft_strlen(const char *s)
{
    int i = 0;

    while (s[i])
        i++;
    return (i);
}

char *ft_strdup(const char *s)
{
    char *duplicate;
    int i = 0;

    duplicate = malloc(sizeof(char) * ft_strlen(s) + 1);
    if (!duplicate)
        return (NULL);
    while (s[i] != '\0')
    {
        duplicate[i] = s[i];
        i++;
    }
    duplicate[i] = '\0';
    return (duplicate);
}

int main(void)
{
    const char *s = "HELLO";

    printf("%s\n", ft_strdup(s));
    printf("%s\n", strdup(s));
}
