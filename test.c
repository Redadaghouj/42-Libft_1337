#include "libft.h"

int main()
{
	t_list *head = NULL;
	head = (t_list *) malloc(sizeof(t_list));
	if (!head)
		return 0;
	t_list *ptr = head;
	ptr->next = NULL;
	ptr->content = "2";
	t_list *second_to_first = (t_list *) malloc(sizeof(t_list));
	if (!second_to_first)
		return 0;
	ptr = second_to_first;
	second_to_first->content = "1";
	second_to_first->next = head;
	while(ptr != NULL)
	{
		printf("%s\n", (char *) ptr->content);
		ptr = ptr->next;
	}
}