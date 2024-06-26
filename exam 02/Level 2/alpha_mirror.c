/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:50:39 by juitz             #+#    #+#             */
/*   Updated: 2023/11/06 10:22:54 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			while (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				argv[1][i] = (122 - argv[1][i] + 97);
				write (1, &argv[1][i], 1);
				i++;
			}
			while (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				argv[1][i] = (90 - argv[1][i] + 65);
				write (1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write (1, "\n", 1);
}