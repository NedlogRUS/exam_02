#include <stdlib.h>
#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int j = 0;

    while(str[j])
    {
        if(str[j] == ' ' || str[j] == 9)
            j++;
        while(str[j] && (str[j] >= '0' || str[j] == '9'))
        {
            i *= 10;
            i += str[j] - '0';
            j++;
        }
    }
    return(i);
}

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

int is_prime(int num)
{
	int i = 3;
	
	if (num <= 1)
		return (0);
	if (num % 2 == 0 && num > 2)
		return (0);
	while (i < (num / 2))
	{
		if (num % i == 0)
			return 0;
		i += 2;
	}
	return 1;
}

int main(int argc, char *argv[])
{
	int sum = 0;
	
	if (argc == 2)
	{
		int nb = atoi(argv[1]);
		while (nb > 0)
			if (is_prime(nb--))
				sum += (nb + 1);
		ft_putnbr(sum);
	}
	if (argc != 2)
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}
