#include <unistd.h>
#include <stdio.h>

int max(int *tab, unsigned int len)
{
	int out;
	unsigned int i;

	i = 0;
	if(!tab || !len)
		return(0);
	out = tab[i];
	while(i < len)
	{
		if(tab[i] > out)
			out = tab[i];
		i++;
	}
	return(out);
}

int main()
{
	unsigned int len = 10;
	int tab[10] = {1,222,3,5,6,777,8,9,11,13};
	int out;
	out = max(&tab[0], len);
	printf("%d\n", out);
	return(0);
}

