// Passed Moulinette 2019.09.01

#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int shift = 7;
	unsigned char mask = 1;
	char out;

	while (shift >= 0)
	{
		printf("\n----\n");
		//printf("shift: %d\n", shift);
		//printf("octet: %d\n", octet);
		printf("octet >> shift: %d\n", octet >> shift);
		printf("octet >> shift && mask: %d\n", octet >> shift && mask);
		out = ((octet >> shift) & mask) + '0';
		write(1, &out, 1);
		--shift;
	}
}

#if 0
int	main(void)
{
	print_bits(2);
	write(1, "\n", 1);
}
#endif

int	main(void)
{
	print_bits(4);
	write(1, "\n", 1);
}

