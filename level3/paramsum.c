#include <unistd.h>

void ft_putnbr(int ac)
{
	char c;

	if(ac >= 10)
		ft_putnbr(ac / 10);
	c = (ac % 10) + '0';
	write(1, &c, 1);
}


int main(int ac, char **av)
{
	ft_putnbr(ac - 1);
	write(1, "\n", 1);
	return(0);
}
