#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;

	if(ac == 3)
	{
		while(av[2][i])
		{
			if(av[2][i] == av[1][j])
				j += 1;
			i++;
		}
		i = 0;
		if(!av[1][j])
			while(av[1][i])
				write(1, &av[1][i++], 1);
	}
	write(1,"\n", 1);
	return(0);
}
