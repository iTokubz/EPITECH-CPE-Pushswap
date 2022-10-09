/*
** EPITECH PROJECT, 2020
** B-CPE-110-STG-1-1-pushswap-axel.derbisz
** File description:
** functions
*/

#include "../include/pushswap.h"
#include "../include/my.h"
#include <stddef.h>
#include <stdlib.h>

void sa(data_t *main_data)
{
    swap_element(&main_data->chained_list->list_a->nbr,
    &main_data->chained_list->list_a->next->nbr);
    write(1, "sa ", 3);
}

void pb(data_t *main_data)
{
    main_data->chained_list->new_node =
    malloc(sizeof(*main_data->chained_list->new_node));
    main_data->chained_list->new_node->nbr =
    main_data->chained_list->list_a->nbr;
    main_data->chained_list->new_node->next = main_data->chained_list->list_b;
    main_data->chained_list->list_b = main_data->chained_list->new_node;
    count_nb_nodes_la(main_data);
    if (main_data->var->nb_nodes_la >= 0)
        main_data->chained_list->list_a = main_data->chained_list->list_a->next;
    write(1, "pb ", 3);
}

void pa(data_t *main_data)
{
    main_data->chained_list->new_node =
    malloc(sizeof(*main_data->chained_list->new_node));
    main_data->chained_list->new_node->nbr =
    main_data->chained_list->list_b->nbr;
    main_data->chained_list->new_node->next = main_data->chained_list->list_a;
    main_data->chained_list->list_a = main_data->chained_list->new_node;
    count_nb_nodes_lb(main_data);
    if (main_data->var->nb_nodes_lb >= 0)
        main_data->chained_list->list_b = main_data->chained_list->list_b->next;
    if (check(main_data) == 0 || check(main_data) == 1
    && main_data->var->nb_nodes_lb > 1) {
        write(1, "pa ", 3);
    }
    if (check(main_data) == 1 && main_data->var->nb_nodes_lb == 1)
        write(1, "pa\n", 3);
}