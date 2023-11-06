/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:25:39 by marvin            #+#    #+#             */
/*   Updated: 2023/11/06 23:25:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int max(int *tab, unsigned int len)
{
    int    result;
    unsigned int i = 0;
    
    if (len == 0)
        return (0);
    while (i < len)
    {
        if (result < tab[i])
            result = tab[i];
        i++;
    }
    return (result);
}
#include <stdio.h>
int main(void)
{
    int tab[] = {100, 2, 3000, 4, 5};
    unsigned int len = 5;
    printf("%d", max(tab, len));
}