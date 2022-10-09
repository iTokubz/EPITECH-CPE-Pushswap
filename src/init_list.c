/*
** EPITECH PROJECT, 2020
** B-CPE-110-STG-1-1-pushswap-axel.derbisz
** File description:
** init_list
*/

#include "../include/pushswap.h"
#include "../include/my.h"
#include <stddef.h>
#include <stdlib.h>

linked_list_t *my_init_list(linked_list_t *list, char *str)
{
    linked_list_t *element = malloc(sizeof(linked_list_t));

    element->nbr = my_getnbr(str);
    element->next = list;

    return (element);
}

linked_list_t *my_params_to_list(int ac, char **av)
{
    int i = ac - 1;
    linked_list_t *list = NULL;

    while (i > 0) {
        list = my_init_list(list, av[i]);
        --i;
    }
    return (list);
}

list_t *init(int ac, char **av)
{
    list_t *chained_list = malloc(sizeof(*chained_list));
    chained_list->list_a = my_params_to_list(ac, av);
    chained_list->list_b = NULL;
    chained_list->temp = NULL;
    return (chained_list);
}