#include <unistd.h>

int chek(char c, char *str, int j)
{
	int i = 0;
	while(i < j)
	{
		if(str[i] == c)
			return(0);
		i++;
	}
	return(1);
}

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;

	if(ac == 3)
	{
		while(av[1][i])
			i++;
		while(av[2][j])
		{
			av[1][i] = av[2][j];
			i++;
			j++;
		}
		i++;
		av[1][i] = '\0';
		j = 0;
		while(av[1][j])
		{
			if(chek(av[1][j], av[1], j) == 1)
				write(1, &av[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
