/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:13:50 by marvin            #+#    #+#             */
/*   Updated: 2023/11/06 19:13:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char    *ft_strpbrk(const char *s, const char *accept)
{
    int i = 0;
    int j;

    while (s[i])
    {
        j = 0;
        while (accept[j])
        {
            if (s[i] == accept[j])
                return ((char *)s + i);
            j++;
        }
        i++;
    }
    return (NULL);
}

int	main(void)
{
	const char *str = "thisisWTF";
	const char *accept = "WTF";
	
	printf("%s\n", strpbrk(str, accept));
	printf("%s", ft_strpbrk(str, accept));
}