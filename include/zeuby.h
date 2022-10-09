/*
** EPITECH PROJECT, 2020
** zeuby.h
** File description:
** zeuby
*/

#ifndef ZEUBY_H_
#define ZEUBY_H_

typedef struct eval_expr_s
{
    char *in_paren;
    int start_paren;
    int end_paren;
    int k;
    char *my_op;
    int pos_op_final;
    char *good_op;
    char *opperators;
    char **my_calc_tab;
    int i_cpf;
    char *result;
    char *copy_base;
    int pos_tab_op;
    int pos_op;
    char *copy_paren;
    int prio;
} expr_t;

#endif /* !ZEUBY_H_ */