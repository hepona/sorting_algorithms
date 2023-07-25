#include "sort.h"

/**
 * insertion_sort_list - sort a doubly linked list
 * @list: list of integer
*/
void insertion_sort_list(listint_t **list)
{
    listint_t *tmp;
    int i;

    for (i = 0; *list != NULL; i++)
    {
        tmp = (*list);
        if (tmp->n > tmp->next->n && tmp->next->n > tmp->prev->n) /*so (tmp->n) > (tmp->next)->n > (tmp->prev->n)*/
        {
            tmp->prev = 
        }
    }
    
}