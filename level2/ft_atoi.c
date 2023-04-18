#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int out;
	char *s;

	i = 0;
	sign = 1;
	out = 0;
	s = (char *)str;
	while(s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	if(s[i] == '-')
		sign = -1;
	if(s[i] == '-' || s[i] == '+')
		i++;
	while(s[i] >= '0' && s[i] <= '9')
	{
		out = out * 10 + s[i] - '0';
		i++;
	}
	out *= sign;
	return(out);
}

int main()
{
	char *str = "  -182593";
	int out = ft_atoi(str);
	printf("%d\n", out);
	return(0);
}
