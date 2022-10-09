/*
** EPITECH PROJECT, 2020
** B-CPE-110-STG-1-1-pushswap-axel.derbisz
** File description:
** init_main_data
*/

#include "../include/pushswap.h"
#include "../include/my.h"
#include <stddef.h>
#include <stdlib.h>

void init_data(data_t *main_data, int ac, char **av)
{
    main_data->chained_list = init(ac, av);
    main_data->var = init_variable();
}
