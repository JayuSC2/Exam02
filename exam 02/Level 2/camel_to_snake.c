/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:26:16 by juitz             #+#    #+#             */
/*   Updated: 2023/11/06 11:07:27 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main (int argc, char **argv)
{
	int	 i = 0;

	while (argv[1][i])
	{
		if (argv[1][i] >= 65 && argv[1][i] <= 90)
		{
			argv[1][i] = argv[1][i] + 32;
			write (1, "_", 1);
		}
		write (1, &argv[1][i], 1);
		i++;
	}
}

/* int	main(void)
{
	char *str = "thisWillNotWork";
	char *output;
	
	output = camel_to_snake(str);
	return (0);
} */


