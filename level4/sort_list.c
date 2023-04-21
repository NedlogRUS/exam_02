// #include <stdio.h>
// #include <stdlib.h>

// typedef struct testlist test;

// struct testlist
// {
// 	int data;
// 	test *next;
// };

// int cmp(int a, int b)
// {
// 	return (a <= b);
// }

test	*sort_list(test* lst, int (*cmp)(int, int))
{
	int	swap;
	test	*tmp;

	tmp = lst;
	while(lst->next != NULL)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}



// void print_data(test one)
// {
// 	printf("%d\n", one.data);
// }

// int main()
// {
// 	test *one;

// 	one = (test *)malloc(sizeof(test));
// 	one->data = 12;

// 	test *two;

// 	two = (test *)malloc(sizeof(test)); 
// 	two->data = 10;

// 	test *tre;

// 	tre = (test *)malloc(sizeof(test)); 
// 	tre->data = 15;

// 	one->next = two;
// 	two->next = tre;
// 	tre->next = NULL;

// 	test *tmp;

// 	tmp = one;

// 	while(tmp != NULL)
// 	{
// 		print_data(*tmp);
// 		tmp = tmp->next;
// 	}
	
// 	tmp = one;
// 	tmp = sort_list(tmp,(*cmp));
// 	while(tmp != NULL)
// 	{
// 		print_data(*tmp);
// 		tmp = tmp->next;
// 	}        
// }
