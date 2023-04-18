#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *str, char c)
{
    while(*str)
        {
            if(*str == c)
                return(char *) str;
            str++;
        }
    return(0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;

    while(s[i])
    {
        if(ft_strchr(accept, s[i]) == 0)
            return(i);
        i++;
    }
    return(i);
}

int main()
{
    char *s = "aaabbbdccc";
    char *f = "acb";
    printf("%lu\n", strspn(s, f));
    printf("%lu\n", ft_strspn(s, f));
    return(0);
}