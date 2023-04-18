#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_strlen(char *s)
{
	int i = 0;

	while(s[i])
		i++;
	return(i);
}

char    *ft_strdup(char *src)
{
	int i;
	char *new;

	i = ft_strlen(src);
	new = (char *)malloc(sizeof(char) * i + 1);
	if(!new)
		return(0);
	i = 0;
	while(src[i])
	{
		new[i] = src[i];
		i++;
	}
	i++;
	new[i] = '\0';
	return(new);
}

int main()
{
	char *s = "Ziga-zaga";
	char *new;

	new = strdup(s);
	printf("%s\n", new);
	free(new);
	new = ft_strdup(s);
	printf("%s\n", new);
	free(new);
	return(0);
}

