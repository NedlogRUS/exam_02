#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int *new;
	int i = 0;
	if (start < end)
	{
		new = malloc(sizeof(int) * (end - start));
		if (!new)
			return 0;
		while(i <= (end - start))
		{
			new[i] = start + i;
			i++;
		}
	}
	else if (start > end)
	{
		new = malloc(sizeof(int) * (start - end));
		if (!new)
			return 0;
		while(i <= (start - end))
		{
			new[i] = start - i;
			i++;
		}
	}
	else
	{
		new = malloc(1);
		new[0] = 0;
	}
	return new;
}

int main()
{
	int i = 0;
	int start = 0;
	int end = -3;
	int *j;
	j = ft_range(start, end);
	while(i < 4)
		printf("%d\n", j[i++]);
	return(0);
}
