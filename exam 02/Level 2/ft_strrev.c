/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:08:14 by marvin            #+#    #+#             */
/*   Updated: 2023/11/06 20:08:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrev(char *str)
{
    char temp;
    int len = 0;
    int i = 0;

    while (str[len])
        len++;
    len -= 1;
    while (i < len)
    {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        i++;
        len--;
    }
    return (str);
}
#include <stdio.h>
int main(void)
{
    char str[] = "DAAAYUM";

    printf("%s", ft_strrev(str));
}