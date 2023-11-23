#include <stdlib.h>
int     *ft_rrange(int start, int end)
{
	int *range;
	int i = 0;
	int flag = 0;

	if (end - start < 0)
	{
		range = malloc(sizeof(int) * ((end - start) *-1 + 1));
		flag = 1;
	}
	else
		range = malloc(sizeof(int) * ((end - start) + 1));

	while (flag == 0 && end >= start)
	{
		range[i] = end;
		end--;
		i++;
	}
	while (flag == 1 && end <= start)
	{
		range[i] = end;
		end++;
		i++;
	}
	return(range);
}
#include <stdio.h>
int main(void)
{
	int *range;
	int start = -2;
	int end = -3;
	int i = 0;

	range = ft_rrange(start, end);

	while (i < (end - start) *-1 + 1)
		printf("%d\n", range[i++]);
}