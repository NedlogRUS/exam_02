#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int i = 0;
	int *new;
	if (start < end)
	{
		new = malloc(sizeof(int) * (end - start) + 1);
		while (i <= (end - start))
		{
			new[i] = end - i;
			i++;
		}
	}
	else if (start > end)
	{
		new = malloc(sizeof(int) * (start - end) + 1);
		while(i <= (start - end))
		{
			new[i] = end + i;
			i++;
		}
	}
	else
	{
		new[0] = 0;
	}
	return new;
}

int main()
{
	int i = 0;
	int start = 1;
	int end = 5;
	int *j;
	j = ft_rrange(start, end);
	while(i < 5)
		printf("%d\n", j[i++]);
	return(0);
}
