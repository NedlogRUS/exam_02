// #include <stdlib.h>
// #include <stdio.h>

// typedef struct    s_list
// {
//     struct s_list *next;
//     void          *data;
// }                 t_list;

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *t;
    t = begin_list;

    while(t)
    {
        (*f)(t->data);
        t = t->next;
    }
}

// void cmp(void *a)
// {
//     printf("cmp-%s\n", a);
// 	return;
// }

// void	print_list(t_list *begin_list)
// {
// 	t_list *t = begin_list;
// 	while (t != 0)
// 	{
// 		printf("%s\n", t->data);
// 		t = t->next;
// 	}
// }

// int main()
// {
// 	t_list *one;

//     char sa[] = "a";
// 	one = (t_list *)malloc(sizeof(t_list));
// 	one->data = sa;

// 	t_list *two;

//     char sb[] = "b";
// 	two = (t_list *)malloc(sizeof(t_list)); 
// 	two->data = sb;

// 	t_list *tre;

//     char sc[] = "cc";
// 	tre = (t_list *)malloc(sizeof(t_list)); 
//     tre->data = sc;

// 	t_list *fou;

//     char sd[] = "dd";
// 	fou = (t_list *)malloc(sizeof(t_list)); 
//     fou->data = sa;

// 	one->next = two;
// 	two->next = tre;
// 	tre->next = fou;
// 	fou->next = NULL;

// 	t_list *begin_list;

// 	begin_list = one;

// 	print_list(begin_list);
// 	printf("<check>\n");
// 	ft_list_foreach(begin_list, (*cmp)); 
// 	print_list(begin_list);     
// }