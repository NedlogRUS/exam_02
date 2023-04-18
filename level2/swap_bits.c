#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
	octet = (octet << 4) | (octet >> 4);
	return(octet);
}

void print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit;

	while(i != 0)
	{
		i--;
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

int main()
{
	unsigned char octet = 111;
	print_bits(octet);
	write(1, "\n", 1);
	octet = swap_bits(octet);
	print_bits(octet);
	return(0);
}
