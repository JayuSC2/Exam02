/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:21:33 by marvin            #+#    #+#             */
/*   Updated: 2023/11/07 10:21:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j;

    if (argc == 3)
    {
        while (argv[1][i])
        {
            write (1, &argv[1][i], 1);
            i++;
        }
        i = 0;
        while (argv[1][i])
        {
            j = 0;
            while (argv[2][j])
            {
                if (argv[1][i] != argv[2][j])
                    write (1, &argv[2][j], 1);
                j++;
            }
            i++;
        }
    }
    write (1, "\n", 1);
}