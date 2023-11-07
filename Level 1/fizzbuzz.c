/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:14:39 by marvin            #+#    #+#             */
/*   Updated: 2023/11/07 09:14:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    write_num(int num)
{
    char str[10] = "0123456789";

    if (num > 9)
        write_num (num / 10);
    write (1, &str[num % 10], 1);
    
}

int main(void)
{
    int num = 1;

    while (num <= 100)
        {
            if (num % 3 == 0)
                write (1, "fizz", 4);
            else if (num % 5 == 0)
                write (1, "buzz", 4);
            else if (num % 15 == 0)
                write (1, "fizzbuzz", 8);
            else
                write_num(num);
            write (1, "\n", 1);
            num++;
        }
        
}
       