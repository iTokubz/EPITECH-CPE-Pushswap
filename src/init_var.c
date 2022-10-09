/*
** EPITECH PROJECT, 2020
** B-CPE-110-STG-1-1-pushswap-axel.derbisz
** File description:
** init_var
*/

#include "../include/pushswap.h"
#include "../include/my.h"
#include <stddef.h>
#include <stdlib.h>

var_t *init_variable(void)
{
    var_t *var = malloc(sizeof(*var));
    var->is_finished = 0;
    var->nb_nodes_la = 0;
    var->nb_nodes_lb = 0;
    return (var);
}
