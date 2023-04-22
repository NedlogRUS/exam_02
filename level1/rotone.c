#include <stdio.h>
#include <unistd.h>

void rotone(char *str)
{
	char *out = str;
	int c = 0;

	while(out[c])
	{
		if(out[c] >= 'A' && out[c] <= 'Y')
		{
			out[c] += 1;
			write(1, &out[c], 1);
		}
		else if(out[c] >= 'a' && out[c] <= 'y')
		{
			out[c] += 1;
			write(1, &out[c], 1);
		}
		else if(out[c] == 'z')
		{
			out[c] += 'a';
			write(1, &out[c], 1);
		}
		else if(out[c] == 'Z')
		{
			out[c] -= 'A';
			write(1, &out[c], 1);
		}
		else
			write(1, &out[c], 1);
		c++;
	}
}

int main(int ac, char **av)
{
	if(ac == 2)
		rotone(av[1]);
	write(1, "\n", 1);
	return(0);
}

