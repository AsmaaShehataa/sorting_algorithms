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
listint_t *temp = NULL, *curr = NULL, *prev = NULL;
if (list && *list && (*list)->next)
{
temp = (*list)->next;
while (temp)
{
curr = temp;
prev = temp->prev;
while (prev && curr->n < prev->n)
{
node_sw(&prev, &curr);
if (prev == *list) /* if curr now list head */
*list = curr;
print_list(*list);
prev = curr->prev;
}
temp = temp->next;
}
}
}
