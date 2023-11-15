#include "ft_list_foreach.h"
#include <stdlib.h>

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *list_pointer;
    list_pointer = begin_list;
    
    while (list_pointer)
    {
        (*f)(list_pointer->data);
        list_pointer = list_pointer->next;
    }
}

