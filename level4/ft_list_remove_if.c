// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

// typedef struct testlist
// {
//     struct testlist *next;
//     	void        *data;
// }                   test;

void ft_list_remove_if(test **begin_list, void *data_ref, int (*cmp)())
{
    if(begin_list == NULL || *begin_list == NULL)
        return;
    
    test *t = *begin_list;

    if(cmp(t->data, data_ref) == 0)
    {
        *begin_list = t->next;
        free(t);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    t = *begin_list;
    ft_list_remove_if(&t->next, data_ref, cmp);
}

// void	print_list(test **begin_list)
// {
// 	test *t = *begin_list;
// 	while (t != 0)
// 	{
// 		printf("%s\n", t->data);
// 		t = t->next;
// 	}
// }

// int main()
// {
// 	test *one;

//     char sa[] = "a";
// 	one = (test *)malloc(sizeof(test));
// 	one->data = saa;

// 	test *two;

//     char sb[] = "b";
// 	two = (test *)malloc(sizeof(test)); 
// 	two->data = sbb;

// 	test *tre;

//     char scc[] = "cc";
// 	tre = (test *)malloc(sizeof(test)); 
//     tre->data = scc;

// 	test *fou;

//     char sdd[] = "dd";
// 	fou = (test *)malloc(sizeof(test)); 
//     fou->data = saa;

// 	one->next = two;
// 	two->next = tre;
// 	tre->next = fou;
// 	fou->next = NULL;

//     test **begin_list = &one;
// 	print_list(begin_list);
// 	printf("<check>\n");
// 	ft_list_remove_if(begin_list, saa, strcmp); 
// 	print_list(begin_list); 
// }
