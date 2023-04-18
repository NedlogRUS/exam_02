#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;

	while(str[i])
		i++;
	return(i);
}

int main(int argc, char **argv)
{
	char *out;
	int c;

	if(argc == 2)
	{
		c = ft_strlen(argv[1]);
		while(c != 0)
		{
			c--;
			write(1, &argv[1][c], 1);
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return(0);
}
