/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:58:40 by marvin            #+#    #+#             */
/*   Updated: 2023/11/06 21:58:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_power_of_2(unsigned int n)
{
    if (n % 2 == 0)
        return (1);
    return (0);
}

#include <stdio.h>

int main(void)
{
    unsigned int n = 46;
    
    printf("%d", is_power_of_2(n));
}
