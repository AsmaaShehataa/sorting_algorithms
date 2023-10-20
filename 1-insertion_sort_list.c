#include "sort.h"

/**
 * node_sw - function that swaps two nodes
 * @left: left node
 * @right: right node
*/
void node_sw(listint_t **left, listint_t **right)
{
(*left)->next = (*right)->next;
(*right)->prev = (*left)->prev;
if ((*right)->next)
(*right)->next->prev = (*left);
if ((*left)->prev)
(*left)->prev->next = (*right);
(*right)->next = (*left);
(*left)->prev = (*right);
}

/**
 * insertion_sort_list - function sorts lists in an ascending order
 * @list: head of list to be sorted
*/
void insertion_sort_list(listint_t **list)
{
listint_t *temp_ll = NULL, *currentAs = NULL, *prev = NULL;
if (list && *list && (*list)->next)
{
temp_ll = (*list)->next;
while (temp_ll)
{
currentAs = temp_ll;
prev = temp_ll->prev;
while (prev && currentAs->n < prev->n)
{
node_sw(&prev, &currentAs);
if (prev == *list) /* if currentAs now list head */
*list = currentAs;
print_list(*list);
prev = currentAs->prev;
}
temp_ll = temp_ll->next;
}
}
}
