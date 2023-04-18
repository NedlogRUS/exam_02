#include "ft_list.h"
#include <stdio.h>

int	ft_list_size(t_list *begin_list)
{
	int i = 0;

	t_list *j = begin_list;
	if(!begin_list)
		return(0);
	while(j != 0);
	{
		i++;
		j = j->next;
	}
	return(i);
}
