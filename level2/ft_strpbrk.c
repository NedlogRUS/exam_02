#include <string.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int j;
	char *out = (char *)s1;

	while(*out)
	{
		j = 0;
		while(s2[j])
		{
			if(*out == s2[j])
				return(out);//(char *) out;
			j++;
		}
		out++;
	}
	return(0);
}

int main()
{
	char *s1 = "abcd";
	char *s2 = "c";
	char *p;
	
	p = strpbrk(s1, s2);
	printf("%s\n", p);
	p = ft_strpbrk(s1, s2);
        printf("%s\n", p);
	return(0);
}
