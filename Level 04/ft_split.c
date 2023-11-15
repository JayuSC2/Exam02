#include <unistd.h>
#include <stdlib.h>

char *ft_strncpy(char *s1, char *s2, size_t n)
{
    size_t i = 0;

    while (i < n && s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

char **ft_split(char *str)
{
    char **out;
    int i = 0;
    int start = 0;
    int put = 0;
    int wc = 0;

    while (str[i])
    {
        while (str[i] == ' ' || str[i] == '\t')
            i++;
        if (str[i])
            wc++;
        while (str[i] != ' ' && str[i] != '\t')
            i++;
    }
    out = (char**)malloc(sizeof(char *) * wc + 1);
    i = 0;
    while (str[i])
    {
        while(str[i] == ' ' || str[i] == '\t')
            i++;
        start = i;
        while (str[i] != ' ' && str[i] != '\t')
            i++;
        while (start < i)
        {
            out[put] = (char *)malloc(sizeof(char) * (i - start) + 1);
            ft_strncpy(out[put++], &str[start], i - start);
        }
        out[put] = '\0';
    }
    return (out);
}
#include <stdio.h>
int main(void)
{
    char *input = "This is a test string";
    char **result = ft_split(input);
    
    if (result)
    {
        int i = 0;
        while (result[i] != NULL)
        {
            printf("Token %d: %s\n", i, result[i]);
            free(result[i]);
            i++;
        }

        free(result);
    }
    else
    {
        printf("ft_split returned NULL\n");
    }

    return 0;
}