#include <stdio.h>
#include <unistd.h>

void root_13(char *str)
{
	char *out = str;
	int c = 0;

	while(out[c])
	{
		if(out[c] >= 'A' && out[c] <= 'M')
		{
			out[c] += 13;
			write(1, &out[c], 1);
		}
		else if(out[c] >= 'N' && out[c] <= 'Z')
		{
			out[c] -= 13;
			write(1, &out[c], 1);
		}
		else if(out[c] >= 'a' && out[c] <= 'm')
		{
			out[c] += 13;
			write(1, &out[c], 1);
		}
		else if(out[c] >= 'n' && out[c] <= 'z')
		{
			out[c] -= 13;
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
		root_13(av[1]);
	write(1, "\n", 1);
	return(0);
}
