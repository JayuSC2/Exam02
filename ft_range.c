/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:07:46 by marvin            #+#    #+#             */
/*   Updated: 2023/11/09 22:07:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int start, int end)
{
    int *tab;
    int i = 0;
    
    if (end <= start)
        return (NULL);
    tab = malloc(sizeof(int) * (end - start));
    while (start <= end)
    {
        tab[i] = start;
        i++;     
        start++;
    }
    return(tab);
}
/* #include <stdio.h>
int main(void)
{
    int start = 0;
    int end = 12;
    int *result = ft_range(start, end);
    int i = 0;
    
    while (i++ < (end - start))
    {
        printf("%d\n", result[i]);   
    }
    free(result);
} */