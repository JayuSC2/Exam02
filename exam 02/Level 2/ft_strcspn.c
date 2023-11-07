/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:00:24 by juitz             #+#    #+#             */
/*   Updated: 2023/11/06 21:26:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *str, const char *reject)
{
	int	i = 0;
	int j;
	while (str[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (str[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

int	main(void)
{
	const char *str = "thisisWTF";
	const char *reject = "WTF";
	
	printf("%zu\n", strcspn(str, reject));
	printf("%zu", ft_strcspn(str, reject));
}