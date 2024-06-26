/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 22:07:38 by marvin            #+#    #+#             */
/*   Updated: 2023/11/06 22:07:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        while (argv[1][i])
            i++;
        i -= 1;
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i--;
        while ((argv[1][i] != ' ' && argv[1][i] != '\t') && i >= 0)
            i--;
        i += 1;
        while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
        {
            write (1, &argv[1][i], 1);
            i++;
        }  
    }
    write (1, "\n", 1); 
}