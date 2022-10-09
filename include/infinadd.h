/*
** EPITECH PROJECT, 2020
** repo_temp_infadd
** File description:
** infinadd
*/

#ifndef INFINADD_H_
#define INFINADD_H_

typedef struct infinadd_var_s
{
    int i;
    int ret;
    int return_new;
    int index_res;
    int calc1;
    int res;
    int calc2;
} infinadd_var_t;

typedef struct infin_s
{
    int len_str1;
    int len_str2;
    char *calc1;
    int neg;
    int error;
    char *str1;
    int equal;
    char *str2;
    char *calc2;
    int neg_str1;
    int neg_str2;
    int print_minus;
    char *new_res;
    int good_len_malloc;
    infinadd_var_t *var;
    char *res;
    int diff;
    int diff2;
    int max_string;
} infin_t;




#endif /* !INFINADD_H_ */
