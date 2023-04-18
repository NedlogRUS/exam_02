#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	if(!str)
		return;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return;
}

/*
void	ft_putstr(char *str)
{
	int	i = 0;

	while (str[i])
		write(1, &str[i++], 1);
}
*/

int main()
{
	char *str = "abcdef123456";
	
	ft_putstr(str);
	write(1, "\n", 1);
	return(0);
}
