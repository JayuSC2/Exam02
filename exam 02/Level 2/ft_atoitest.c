/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoitest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:01:25 by juitz             #+#    #+#             */
/*   Updated: 2023/11/06 15:29:15 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	num;
	
	sign = 1;
	
	while ((*str >= 9 && *str <= 12) || (*str == 32))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += *str - '0';
		str++;
	}
	return (num * sign);
}

int	main(void)
{
	char *str = "1337";
	int	result1;
	int	result2;
	
	result1 = ft_atoi(str);
	result2 = atoi(str);
	printf("%d\n", result1);
	printf("%d\n", result2);
}