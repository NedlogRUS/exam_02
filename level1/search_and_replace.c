#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

void	search_and_replace(char *str, char a, char b)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i] == a)
		{
			str[i] = b;
			write(1, &str[i], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if(ac != 4 || ft_strlen(av[2]) != 1 || ft_strlen(av[3]) != 1)
	{
		write(1, "\n", 1);
		return(0);
	}
	else
		search_and_replace(av[1], av[2][0], av[3][0]);
	write(1, "\n", 1);
	return(0);
}
