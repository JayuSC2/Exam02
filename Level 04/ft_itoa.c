#include <stdlib.h>
#include <limits.h>

int num_len(int num)
{
    int len = 1;

    while (num / 10)
    {
        num /= 10;
        len++;
    }
    return (len);
}

char    *ft_itoa(int nbr)
{
    char *str_nb;
    long    num;
    int digits;

    num = nbr;
    digits = num_len(num);
    if (num == -2147483648)
        return("-2147483648\0");
    if (num < 0)
    {
        num *= -1;
        digits++;
    }
    str_nb = malloc(sizeof(char) * (digits + 1));
    if (!str_nb)
        return (NULL);
    str_nb[digits] = '\0';
    while (digits--)
    {
        str_nb[digits] = num % 10 + '0';
        num /= 10;
    }
    if (nbr < 0)
    {
        str_nb[0] = '-';
        num = -num;
    }
    return (str_nb);
}
#include <stdio.h>
int main(void)
{
    int num1 = 92342;
    int num2 = -92342;
    int num3 = INT_MIN;
    printf("%s\n", ft_itoa(num1));
    printf("%s\n", ft_itoa(num2));
    printf("%s\n", ft_itoa(num3));
}