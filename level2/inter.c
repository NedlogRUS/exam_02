#include <unistd.h>

int inter(char *str, char c, int b)
{
    while(str[b] && b >= 0)
    {
        if(str[b] == c)
            return(1);
        b--;
    }
    return(0);
}

int main(int ac, char **av)
{
    int i = 0;
    int j;
    int b;

    if(ac == 3)
    {
        while(av[1][i])
        {
            j = 0;
            while(av[2][j])
            {
                if(av[1][i] == av[2][j])
                {
                    b = i - 1;
                    if(inter(av[1], av[1][i], b) == 1)
                        break;
                    write(1, &av[1][i], 1);
                    break;
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}