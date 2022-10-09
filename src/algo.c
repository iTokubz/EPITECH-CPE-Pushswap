/*
** EPITECH PROJECT, 2020
** B-CPE-110-STG-1-1-pushswap-axel.derbisz
** File description:
** sort_algo
*/

#include "../include/pushswap.h"
#include "../include/my.h"
#include <stddef.h>
#include <stdlib.h>

void loop_chained_list(data_t *main_data)
{
    while (main_data->chained_list->temp != NULL) {
        if (main_data->chained_list->temp->next != NULL &&
        main_data->chained_list->temp->nbr
        > main_data->chained_list->temp->next->nbr) {
            sa(main_data);
            main_data->var->is_finished = 0;
        }
        pb(main_data);
        main_data->chained_list->temp = main_data->chained_list->temp->next;
    }
}

void sort_algo(data_t *main_data)
{

    while (main_data->var->is_finished == 0) {
        main_data->chained_list->temp = main_data->chained_list->list_a;
        main_data->var->is_finished = 1;
        if (check(main_data) == 1)
            return;
        loop_chained_list(main_data);
        while (main_data->chained_list->list_b != NULL) {
            pa(main_data);
        }
    }
}