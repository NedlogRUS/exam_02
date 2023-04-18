#include <stdio.h>

int ft_strlen(char *s)
{
	int i = 0;

	while(s[i])
		i++;
	return(i);
}

char    *ft_strrev(char *str)
{
	char buf;
	int i;
	int j;

	i = ft_strlen(str);
	j = 0;
	while(i > j)
	{
		buf = str[j];
		str[j] = str[i - 1];
		str[i - 1] = buf;
		j++;
		i--;
	}
	return(str);
}

int main()
{
	char str[] = "abcde";
	char *out;
	out = ft_strrev(str);
	printf("%s\n", str);
	return(0);
}
