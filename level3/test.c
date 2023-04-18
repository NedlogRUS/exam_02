#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
	int i = 0;
	int *out;

	if(start < end)
	{
		out = malloc(sizeof(int) * (end - start) + 1);
		if(!out)
			return(0);
		while(i <= end - start)
		{
			out[i] = start + i;
			i++;
		}
		return(out);
	}
	else if(start > end)
	{
		out = malloc(sizeof(int) * (start - end) + 1);
		if(!out)
			return(0);
		while(i <= start - end)
		{
			out[i] = start - i;
			i++;
		}
		return(out);
	}
		out = malloc(1);
		out[0] = 0;
		return(out);
}

int main()
{
	int i = 0;
	int start = -5;
	int end = 5;
	int *j;
	j = ft_range(start, end);
	while(i < 11)
		printf("%d\n", j[i++]);
	return(0);
}
