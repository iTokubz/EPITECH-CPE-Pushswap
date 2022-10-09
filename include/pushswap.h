/*
** EPITECH PROJECT, 2020
** B-CPE-110-STG-1-1-pushswap-axel.derbisz
** File description:
** pushswap
*/

#ifndef PUSHSWAP_H_
#define PUSHSWAP_H_

typedef struct linked_list_s
{
    int nbr;
    struct linked_list_s *next;
} linked_list_t;

typedef struct utils_chained_list_t
{
    linked_list_t *list_a;
    linked_list_t *list_b;
    linked_list_t *temp;
    linked_list_t *new_node;
} list_t;

typedef struct var_utils_s
{
    int is_finished;
    int nb_nodes_la;
    int nb_nodes_lb;
} var_t;

typedef struct main_data_s
{
    list_t *chained_list;
    var_t *var;
} data_t;

#endif /* !PUSHSWAP_H_ */
