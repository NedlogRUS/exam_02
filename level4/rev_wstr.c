#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;
    
    if(ac == 2)
    {
        i = 0;
        while(av[1][i])
            i++;
        i--;
        while(i >= 0)
        {
            if(av[1][i - 1] == ' ' || av[1][i - 1] == 9 || av[1][i - 1] == '\0')
            {
                j = i;
                while(av[1][i] && av[1][j] != ' ' && av[1][j] != 9 && av[1][j] != '\0')
                {
                    write(1, &av[1][j], 1);
                    j++;
                }
                if(av[1][i - 1] != '\0')
                    write(1, " ", 1);
            }
            i--;
        }
    }
    write(1, "\n", 1);
    return(0);
}