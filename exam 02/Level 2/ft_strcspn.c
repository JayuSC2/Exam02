/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:00:24 by juitz             #+#    #+#             */
/*   Updated: 2023/11/06 16:37:16 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *str, const char *reject)
{
	int	i = 0;
	int	j = 0;

	while (str[i] != reject[j])
		i++;
		if (str[i] == reject[j])
			return (i);
		j++;
}

int	main(void)
{
	const char *str = "Hello";
	const char *reject = "llo";
	
	printf("%zu\n", strcspn(str, reject));
	printf("%zu", ft_strcspn(str, reject));
}