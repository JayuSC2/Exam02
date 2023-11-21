void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	int temp;

	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}
#include <stdio.h>
int main (void)
{
	int tab[256] = {5, 8, 2, 3, 1};
	unsigned int size = 5;
	unsigned int i = 0;

	sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}