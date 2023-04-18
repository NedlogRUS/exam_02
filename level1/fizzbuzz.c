#include <unistd.h>

void ft_putnbr(int i)
{
	int j;
	char a;

	j = i;
	if(j > 9)
	{
		ft_putnbr(j / 10);
		j %= 10;
	}
	a = j + '0';
	write(1, &a, 1);
}

int main()
{
	int i = 1;

	while(i <= 100)
	{
		if(i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if(i % 5 == 0)
			write(1, "buzz", 4);
		else if(i % 3 == 0)
			write(1, "fizz", 4);
		else 
			ft_putnbr(i);
		i++;
		write(1, "\n", 1);
	}
	return(0);
}
