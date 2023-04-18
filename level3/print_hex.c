#include <unistd.h>

int ft_ai(char *s)
{
	int n = 0;

	while(*s)
	{
		n = n * 10;
		n = n + *s - '0';
		++s;
	}
	return(n);
}

void	print_hex(int n)
{
	char hex[] = "0123456789abcdef";

	if(n >= 16)
		print_hex(n / 16);
	write(1, &hex[n % 16], 1);
}

int main(int ac, char **av)
{
	if(ac == 2)
		print_hex(ft_ai(av[1]));
	write(1, "\n", 1);
	return(0);
}
