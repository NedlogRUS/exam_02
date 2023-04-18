#include <unistd.h>

void	ft_putchar(char s, int c)
{
	while(c > 0)
	{
		write(1, &s, 1);
		c--;
	}
}

void	ft_repeat_alpha(char *str)
{
	while(*str)
	{
		if(*str >= 'a' && *str <= 'z')
			ft_putchar(*str, *str + 1 - 'a');
		else if(*str >= 'A' && *str <= 'Z')
			ft_putchar(*str, *str + 1 - 'A');
		else
			write(1, str, 1);
		++str;
	}
}

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	else
		ft_repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return(0);
}
