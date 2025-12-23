#include "list.h"
#include <unistd.h>

// t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
// {
// 	t_list	*current;
// 	t_list	*next;
// 	int		temp;

// 	if (!lst)
// 		return (NULL);

// 	current = lst;
// 	while (current)
// 	{
// 		next = current->next;
// 		while (next)
// 		{
// 			if (!cmp(current->data, next->data))
// 			{
// 				// swap data
// 				temp = current->data;
// 				current->data = next->data;
// 				next->data = temp;
// 			}
// 			next = next->next;
// 		}
// 		current = current->next;
// 	}
// 	return (lst);
// }

//Second way
/*
#include "list.h"
#include "unistd.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int tmp;
	t_list *head;

	head = tmp;
	while (lst != NULL && lst->next != NULL)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;
			lst = head;
		}
		else
			lst = lst->next;
	}
	return (head);
}*/

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

t_list* sort_list(t_list* list, int (*cmp)(int, int))
{
	int flag = 1;
	t_list* cur;
	while(flag)
	{
		flag=0;
		for (cur = list;cur && cur->next; cur=cur->next)
		{
			if(!cmp(cur->data, cur->next->data))
			{
				swap(&cur->data, &cur->next->data);
				flag = 1;
			}
		}
	}
	return (list);
}

int main(void)
{
	
}
int ascending(int a, int b)
{
	return (a <= b);
}

/* helper to create a node */
t_list *new_node(int data)
{
	t_list *node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

/* helper to print list */
void print_list(t_list *list)
{
	while (list)
	{
		printf("%d -> ", list->data);
		list = list->next;
	}
	printf("NULL\n");
}

int main(void)
{
	t_list *list;

	/* create list: 5 -> 3 -> 8 -> 1 */
	list = new_node(5);
	list->next = new_node(3);
	list->next->next = new_node(8);
	list->next->next->next = new_node(1);

	printf("Before sort:\n");
	print_list(list);

	list = sort_list(list, ascending);

	printf("After sort:\n");
	print_list(list);

	return (0);
}