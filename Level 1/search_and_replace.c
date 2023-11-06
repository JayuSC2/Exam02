/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:48:14 by marvin            #+#    #+#             */
/*   Updated: 2023/11/05 16:48:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *s)
{
    int i = 0;

    while (s[i])
        i++;
    return (i);
}

int main    (int argc, char **argv)
{
    int i = 0;

    if (argc == 4 && ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
    {
        while (argv[1][i])
        {
            if (argv[1][i] == argv[2][0])
            {
                argv[1][i] = argv[3][0];
            }
            i++;
        }
        i = 0;
        while (argv[1][i])
        {
            write (1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
}