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

void ft_union(char *str1, char *str2)
{
    int tab[256] = {0};
    int a;

    while (str1[a])
    {
        if (tab[(int)str1[a]] == 0)
        {
            tab[(int)str1[a]] = 1;
            write (1, &str1[a], 1);
        }
        a++;
    }
    a = 0;
    while (str2[a])
    {
        if (tab[(int)str2[a]] == 0)
        {
            tab[(int)str2[a]] = 1;
            write (1, &str2[a], 1);
        }
        a++;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
        ft_union(av[1], av[2]);
    write (1, "\n", 1);
    return (0);
}

/* int main(int argc, char **argv)
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
} */