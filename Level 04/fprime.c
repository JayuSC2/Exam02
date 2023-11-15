#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
    int prime;
    int number;
    if (argc == 2)
    {
        prime = 2;
        number = atoi(argv[1]);
        if (number == 1)
            printf("1");
        while (number >= prime)
        {
            if (number % prime == 0)
            {
                printf("%d", prime);
                if (number == prime)
                    break ;
                printf("*");
                number /= prime;
                prime--;
            }
            prime++;
        }

    }
    printf ("\n");
    return (0);
}