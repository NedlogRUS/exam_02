#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i;
	int j;
	int out;

	out = 0;
	if(ac == 4)
	{
		i = atoi(av[1]);
		j = atoi(av[3]);
		if(av[2][0] == '+')
			out = i + j;
		else if(av[2][0] == '-')
				out = i - j;
		else if(av[2][0] == '*')
            	out = i * j;
		else if(av[2][0] == '/')
                out = i / j;
		else if(av[2][0] == '%')
                out = i % j;
		printf("%i",out);
	}
	printf("\n");
	return(0);
}
