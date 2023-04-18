#include <unistd.h>
#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
	unsigned int i = 1;

	while(i < n)
	{
		if(n % 2 != 0)
			return (0);
		n /= 2;
	}
	if(i == n)
		return(1);
	return(0);
}

int main()
{
	int i = 16;
	int j;

	printf("%d\n", (j % 2));
	j = is_power_of_2(i);
	printf("%d\n", j);
	return (0);
}
