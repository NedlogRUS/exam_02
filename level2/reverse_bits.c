#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char out = 0;
	
	while(i != 0)
	{
		out = out * 2 + (octet % 2);
		octet /= 2;
		i--;
	}
	return(out);
}

void	print_bits(unsigned char octet)
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
	unsigned char octet = 2;
	octet = reverse_bits(octet);
	print_bits(octet);
	return(0);
}
