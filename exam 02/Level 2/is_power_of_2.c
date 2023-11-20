/* Assignment name  : is_power_of_2
Expected files   : is_power_of_2.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows.
*/

int	    is_power_of_2(unsigned int n)
{
    while (n % 2 == 0)
        n /= 2;
    if (n == 1)
        return (1);
    else
        return (0);
}
/* #include <stdio.h>
int main (void)
{
    int n1 = 1;
    int n2 = 10;
    int n3 = 16;
    int n4 = 4;

    printf("%d\n", is_power_of_2(n1));
    printf("%d\n", is_power_of_2(n2));
    printf("%d\n", is_power_of_2(n3));
    printf("%d\n", is_power_of_2(n4));
} */