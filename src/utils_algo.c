/*
** EPITECH PROJECT, 2020
** B-CPE-110-STG-1-1-pushswap-axel.derbisz
** File description:
** utils_algo
*/

#include "../include/pushswap.h"
#include "../include/my.h"
#include <stddef.h>
#include <stdlib.h>

void count_nb_nodes_la(data_t *main_data)
{
    linked_list_t *temp = main_data->chained_list->list_a;

    main_data->var->nb_nodes_la = 0;

    while (temp != NULL) {
        main_data->var->nb_nodes_la++;
        temp = temp->next;
    }
}

void swap_element(int *elem1, int *elem2)
{
    int temp = 0;
    temp = *elem1;
    *elem1 = *elem2;
    *elem2 = temp;
}

void count_nb_nodes_lb(data_t *main_data)
{
    linked_list_t *temp = main_data->chained_list->list_b;

    main_data->var->nb_nodes_lb = 0;

    while (temp != NULL) {
        main_data->var->nb_nodes_lb++;
        temp = temp->next;
    }
}

int check(data_t *main_data)
{
    count_nb_nodes_la(main_data);
    int counter = 1;

    linked_list_t *temp = main_data->chained_list->list_a;

    while (temp != NULL) {
        if (temp->next != NULL && temp->nbr <= temp->next->nbr) {
            ++counter;
        }
        temp = temp->next;
    }
    if (counter == main_data->var->nb_nodes_la)
        return (1);
    return (0);
}