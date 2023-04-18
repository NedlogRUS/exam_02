/*#include <unistd.h>

void	last_word(char *str)
{
	int	j = 0;
	int i = 0;

	while (str[i])
	{
		if ((str[i] == ' ' || str[i] == 9) && str[i + 1] >= 33 && str[i + 1] <= 126)
			j = i + 1;
		i++;
	}
	while (str[j] >= 33 && str[j] <= 127)
	{
		write(1, &str[j], 1);
		j++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
*/


#include <unistd.h>

void ft_last_word(char *s)
{
	int i = 0;
	int j = 0;

	while(s[i])
	{
		if((s[i] == 32 || s[i] == 9) && s[i + 1] >= 33 && s[i + 1] <= 126)
			j = i + 1;
		i++;
	}
	while(s[j] >= 33 && s[j] <= 127)
	{
		write(1, &s[j], 1);
		j++;
	}
}

int main(int ac, char **av)
{
	int i;
	if(ac == 2)
		ft_last_word(av[1]);
	write(1, "\n", 1);
	return(0);
}
