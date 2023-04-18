#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	if(! str)
		return(0);
	while(str[i])
		i++;
	return(i);
}

int	main()
{
	char	*a;
	int		i = strlen(a);
	int		j = ft_strlen(a);

	printf("%i\n%i\n", i, j);
	return(0);
}
