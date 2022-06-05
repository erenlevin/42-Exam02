#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	size;
	int	*ret;
	int	*ptr;

	size = end - start;
	if (size)
	{
		ptr = (int *)malloc(sizeof(int) * size);
		if (ptr)
		{
			ret = ptr;
			while (start <= end)
			{
				*ptr = start;
				ptr++;
				start++;
			}
			return (ret);
		}
	}
	return (NULL);
}

int main(void)
{
	int a = -1;
	int b = 4;
	int i = 0;
	int *res;

	res = ft_range(a, b);
	while (i <= (b-a))
	{
		printf("%d, ", res[i]);
		i++;
	}
	return (0);
}
