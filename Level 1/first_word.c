/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:34:59 by marvin            #+#    #+#             */
/*   Updated: 2023/11/04 14:34:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    if (argc != 2)
        write (1, "\n", 1);
    else
    {
        while (argv[1][i] == 32 || argv[1][i] == 9)
            i++;
        while ((argv[1][i] != 32 || argv[1][i] != 9) && argv[1][i])
        {
            write (1, &argv[1][i], 1);
            i++;
        }
        write (1, "\n", 1);
    }
} 
/* #include <unistd.h>

int main (int argc, char **argv)
{
	int i = 0;
	
	if (argc == 2)
	{
		while (argv[1][i] == 32 || argv[1][i] == 9)
			i++;
		while ((argv[1][i] != 32 && argv[1][i] != 9) && argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
} */