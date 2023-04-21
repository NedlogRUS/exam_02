#include <stdio.h>
void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i;
    int buf;

    i = 0;

    while(i != size)
    {
        if(tab[i] > tab[i + 1])
        {
            buf = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = buf;
            i = 0;
        }
        else
            i++;
    }
    return;
}

int main()
{
    int i[] = {10,3,2,5,4,9,1,6,8,7};
    unsigned int j = 10;
    unsigned int c;

    c = 0;
    while(c != j)
        printf("%d\n", i[c++]);
    sort_int_tab(i, j);
    c = 0;
    while(c != j)
        printf("%d\n", i[c++]);
    return(0);
}