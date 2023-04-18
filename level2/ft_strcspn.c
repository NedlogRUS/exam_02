#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j = 0;

	while(s[i] != '\0')
	{
		while(reject[j] != '\0' )
		{
			if(s[i] == reject[j])
				return(i);
			j++;
		}
		j = 0;
		i++;
	}
	return(i);
}

int main()
{
	char *s = "abcdefg";
	char *reject = "zyxmnprstd";
	size_t i;

	i = strcspn(s, reject);
	printf("%ld\n", i);
	i = ft_strcspn(s, reject);
	printf("%ld\n", i);
	return(0);
}
