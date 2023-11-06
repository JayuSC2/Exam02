/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:59:39 by marvin            #+#    #+#             */
/*   Updated: 2023/11/06 20:59:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stddef.h>
#include <stdio.h>

/* size_t  ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    int j;

    while(s[i])
    {
        j = 0;
        while (accept[j] == s[i])
        {
            if (s[i] != accept[j])
                return (i);
            j++; 
        }
        i++;
    }
    return (i);   
} */
#include <stddef.h>

size_t ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    int j;

    while (s[i]) 
    {
        j = 0;
        while (accept[j])
        {
            if (s[i] == accept[j])
                break;
            j++;
        }
        if (!accept[j])
            return (i);
        i++;
    }
    return (i);
}



int	main(void)
{
	const char *str = "HELLOMELEQS";
	const char *accept = "HELLOMEL";
	
	printf("%zu\n", ft_strspn (str, accept));
	printf("%zu", strspn(str, accept));
}