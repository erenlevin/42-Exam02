#include <stdio.h>
#include <unistd.h>

int max(int *tab, unsigned int len)
{
	int max;

	if (!len)
		return (0);
	max = tab[--len];
	while (len--)
		if (tab[len] > max)
			max = tab[len];
	return (max);
}

int main(void)
{
    int a[] = {1, 3, 2};

    printf("res: %d\n", max(a, 3));
    return (0);
}
