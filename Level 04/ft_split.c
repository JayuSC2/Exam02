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
    int i = 0;
    int j = 0;
    int k = 0;
    int wc = 0;

    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        if (str[i])
            wc++;
        while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
            i++;
    }
    char **out = (char **)malloc(sizeof(char *) * (wc + 1));
    i = 0;
    while (str[i])
    {
        while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        j = i;
        while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
            i++;
        if (i > j)
        {
            out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
            ft_strncpy(out[k++], &str[j], i - j);
        }
    }
    out[k] = NULL;
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