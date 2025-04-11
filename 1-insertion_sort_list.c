#include "sort.h"
/**
* insertion_sort_list - Sorts a doubly linked list of integers
* in ascending order using the Insertion sort algorithm
*
* @list: Double pointer to the head of the doubly linked list
*/
void insertion_sort_list(listint_t **list)
{
listint_t *current, *insertion_point, *temp;
if (list == NULL || *list == NULL || (*list)->next == NULL)
return;
current = (*list)->next;
while (current != NULL)
{
temp = current;
current = current->next;
while (temp->prev != NULL && temp->n < temp->prev->n)
{
insertion_point = temp->prev;
if (insertion_point->prev != NULL)
insertion_point->prev->next = temp;
else
*list = temp;
if (temp->next != NULL)
temp->next->prev = insertion_point;
insertion_point->next = temp->next;
temp->prev = insertion_point->prev;
insertion_point->prev = temp;
temp->next = insertion_point;
print_list(*list);
}
}
}
