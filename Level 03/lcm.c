/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:12:53 by marvin            #+#    #+#             */
/*   Updated: 2023/11/13 21:12:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    lcm(unsigned int a, unsigned int b)
{
    int n;

    if (a == 0 || b == 0)
        return (0); 
    if (a > b)
        n = a;
    else
        n = b;
    while (1)
    {
        if (n % a == 0 && n % b == 0)
            return (n);
        n++;
    }
}
#include <stdio.h>
int main(void)
{
    unsigned int a = 12;
    unsigned int b = 10;

    printf("%d", lcm(a, b));
}