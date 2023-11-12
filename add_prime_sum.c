/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:15:43 by marvin            #+#    #+#             */
/*   Updated: 2023/11/12 16:15:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi (char *str)
{
    int res = 0;

    while (*str)
        res = res * 10 + *str++ - '0';
    return (res);

}
void ft_put_nbr(int num)
{
    char digit;
    
    if (num > 9)
    {
        ft_put_nbr(num / 10);
        num = num % 10;
    }

    digit = num + '0';
    write(1, &digit, 1);
}

/* void ft_put_nbr (int num)
{
    char digit;
    while (num > 9)
        ft_put_nbr(num / 10);
    digit = num % 10 + '0';
    write (1, &digit, 1);
} */

int is_prime (int num)
{
    int i = 2;

    if (num <= 1)
        return (0);
    while (i <= num / 2)
    {
        if (num % i == 0)
             return (0);
        i++;
    }
    return (i);
}

int main(int argc, char **argv)
{

    if (argc == 2)
    {
        int num = ft_atoi(argv[1]);
        int sum = 0;

        while (num > 0)
        {
            if (is_prime(num))
                sum += num;
            num--;
        }
        ft_put_nbr(sum);
    }
    write (1, "\n", 1);
    return (0);
}

    