/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:59:15 by marvin            #+#    #+#             */
/*   Updated: 2023/11/07 09:59:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *snake_to_camel(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] == '_')
        {
            i++;
            str[i] -= 32;
        }
        write (1, &str[i], 1);
        i++;
    }
    return (str);   
}

#include <stdio.h>

int main(void)
{
    char str[] = "i_will_crush_this";
    snake_to_camel(str);
}