#include <stdio.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int n;

	if(a == 0 || b == 0)
		return(0);
	if(a > b)
		n = a;
	else
		n = b;
	while(1)
	{
		if(n % a == 0 && n % b == 0)
			return(n);
		++n;
	}
}

int main()
{
	unsigned int a = 44;
	unsigned int b = 20;
	unsigned int l;
	l = lcm(a, b);
	printf("%d\n", l);
	return(0);
}
