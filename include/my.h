/*
** EPITECH PROJECT, 2020
** repo_day10
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

#include "pushswap.h"

void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char *str);
char *infinadd(char *str, char *str2);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char *my_strdup(char const *src);
char **my_str_to_word_array(char *str);
int my_show_word_array(char * const *tab);
char *fill_zero(char *str);
char *check_op(char *copy);
char *my_div_inf(char *str1, char *str2);
char *my_get_str(char *str);
char *fill_copy(char *str);
char *add(char *nbr1, char *nbr2);
char *modul(char *nbr1, char *nbr2);
char *divid(char *nbr1, char *nbr2);
char *sub(char *nbr, char *nbr2);
char *mul(char *nbr1, char *nbr2);
int my_int_len(int nb);
char *my_itoa(int nbr);
char *clean_space(char *str);
char *infinadd(char *str, char *str2);
char *mult(char *nb1, char *nb2);
char *infinmodul(char *str, char *str2);
int check_op_paren( char *str);
int check_all_paren(char *str);
int more_error(char *str);
int check_error_2(char *str);
int check_just_ope(char *str);
void pb(data_t *main_data);
void pa(data_t *main_data);
void sa(data_t *main_data);
int error_handling(char **av);
list_t *init(int ac, char **av);
linked_list_t *my_params_to_list(int ac, char **av);
linked_list_t *my_init_list(linked_list_t *list, char *str);
void init_data(data_t *main_data, int ac, char **av);
var_t *init_variable(void);
int check(data_t *main_data);
void count_nb_nodes_lb(data_t *main_data);
void swap_element(int *elem1, int *elem2);
void count_nb_nodes_la(data_t *main_data);
void loop_chained_list(data_t *main_data);
void sort_algo(data_t *main_data);
int start_pushswap(data_t *main_data);


#endif /* !MY_H_ */