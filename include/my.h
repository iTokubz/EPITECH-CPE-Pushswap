/*
** EPITECH PROJECT, 2020
** repo_day10
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

#include "infinadd.h"
#include "eval_expr.h"
#include "zeuby.h"
#include "multiplinf.h"
#include "div.h"
#include "bsq.h"
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
void fill_zero_calc(infin_t *data);
void put_zero_for_calc(infin_t *data);
void compare_strings(char *str, char *str2, infin_t *data);
void fill_my_calc(infin_t *data, char *str, char *str2);
void my_add_str1_str2(infin_t *data);
void my_add_str2_str1(infin_t *data);
char *clean_copy(char *copy, eval_t *data);
char *check_op(char *copy);
void do_the_add(infin_t *data, char *str, char *str2);
char *sub_or_add(infin_t *data, char *str, char *str2);
void check_res_sup_and_one(infin_t *data);
void calcul_integ(infin_t *data);
void check_res_inf(infin_t *data);
void check_res_sup_and_sup_one(infin_t *data);
void check_neg(char *str, char *str2, infin_t *data);
void init_my_addinf(char *str, char *str2, infin_t *data);
void init_var_str2_str1(infin_t *data);
void init_var(infin_t *data);
void init_var_div(divid_t *data);
void init_my_2_calc_strings(infin_t *data);
void find_nbr(divid_t *data);
char *clean_str(divid_t *data, char *dividende, char c);
void utils_div(divid_t *data, int i);
char *my_div_inf(char *str1, char *str2);
void fill_struct_start(char *str, char *str2, divid_t *data);
char *fill_diviseur(divid_t *data);
char *fill_dividende(divid_t *data);
void fill_struct_str1_and_str2(char *str, char *str2, infin_t *data);
void do_the_neg(infin_t *data, char *str, char *str2);
int my_biggest_nbr_str(infin_t *data);
void is_print_neg(infin_t *data);
void malloc_neg(infin_t *data, char *str, char *str2);
void fill_struct_str1_and_str2_neg_1(char *str, char *str2, infin_t *data);
void init_var_sub_str1_str2(infin_t *data);
void init_var_sub_str2_str1(infin_t *data);
void create_new_res_string(infin_t *data, int len_zero);
void fill_new_res_string(infin_t *data, int len_zero);
void fill_new_res_string_no_neg(infin_t *data, int len_zero);
void erase_zero(infin_t *data);
int check_is_zero(infin_t *data);
void my_sub_str1_str2_reverse(infin_t *data);
void my_sub_str1_str2(infin_t *data);
void my_sub_str2_str1(infin_t *data);
void do_the_sub(infin_t *data, char *str, char *str2);
void check_neg_sub(infin_t *data, char *str, char *str2);
void calc_neg(infin_t *data);
void check_reverse_str1_sup_str2(infin_t *data);
void check_reverse_str1_inf_str2(infin_t *data);
void check_reverse_equal(infin_t *data);
void calc_neg_str1_str2(infin_t *data);
void check_str1_str2_sup(infin_t *data);
void check_str1_str2_inf(infin_t *data);
void check_str1_str2_equal(infin_t *data);
void calc_neg_str2_str1(infin_t *data);
void check_str2_str1_inf(infin_t *data);
void check_str2_str1_sup(infin_t *data);
void check_str2_str1_equal(infin_t *data);
void for_for_neg_2(char *str, char *str2, infin_t *data);
void for_for_neg_1(char *str, char *str2, infin_t *data);
void my_str_tol(char *str, expr_t *dt);
int count_word(char *str, expr_t *dt);
char *my_get_str(char *str);
char *fill_copy(char *str);
char *count_nb_number(char *str, eval_t *data, expr_t *dt);
char *clean_copy(char *copy, eval_t *data);
char *add(char *nbr1, char *nbr2);
char *modul(char *nbr1, char *nbr2);
char *divid(char *nbr1, char *nbr2);
char *sub(char *nbr, char *nbr2);
char *mul(char *nbr1, char *nbr2);
char *my_do_op(char *nbr1, char op, char *nbr2, expr_t *dt);
int utils_count_word_2(char *str, int i, expr_t *dt);
int count_word_2(char *str, expr_t *dt);
int check_op_fill_op(char c, expr_t *dt);
void my_fill_op(char *str, expr_t *dt);
int my_int_len(int nb);
char *my_itoa(int nbr);
void calc_the_prio(expr_t *dt, char c);
int check_prio(char *str, expr_t *dt);
void fill_paren_copy(char *str, expr_t *dt);
char *utils_clean_copy_final(expr_t *dt, char *str);
char *clean_copy_final(char *str, expr_t *dt);
char *clean_copy_paren(char *str, expr_t *dt);
void calc_my_paren(char c, expr_t *dt);
void get_pos_op(char *str, expr_t *dt, char c);
void calc_paren(expr_t *dt);
void check_paran(expr_t *dt, char *str);
int count_paren(char *str, expr_t *dt);
void fill_copy_base(char *str, expr_t *dt);
char *clean_string_base(char *str, expr_t *dt);
void prio(expr_t *dt);
void no_prio(expr_t *dt, int len);
void calc_final_string(char *str, expr_t *dt);
char *clean_space(char *str);
void change_nb(multiplinf_t *mult);
void check_signe(multiplinf_t *mult, char *nb1, char *nb2);
char *infinadd(char *str, char *str2);
char *mult(char *nb1, char *nb2);
void get_size(multiplinf_t *mult, char *nb1, char *nb2);
char *calcul_mult(multiplinf_t *mult, char *nb1, char *nb2);
void calcul_res(int n, int result, multiplinf_t *mult);
void fill_with_zero(multiplinf_t *mult);
char *infinmodul(char *str, char *str2);
int check_if_zero(multiplinf_t *mult);
int check_op_paren( char *str);
int check_all_paren(char *str);
void erase_z(multiplinf_t *mult);
void create_new_res_str(multiplinf_t *mult, int len_zero);
int more_error(char *str);
int check_error_2(char *str);
int check_just_ope(char *str);
void fill_new_res_str_no_neg(multiplinf_t *mult, int len_zero);
void fill_new_res_str(multiplinf_t *mult, int len_zero);
void check_signe(multiplinf_t *mult, char *nb1, char *nb2);
int init_buffer_read(char **av, bsq_t *data);
void get_y(bsq_t *data);
void get_x(bsq_t *data);
void do_one_column(bsq_t *data);
void do_1_x_1(bsq_t *data);
void do_one_line(bsq_t *data);
void check_basic_empty(bsq_t *data, int i, int k);
int check_special_cases(bsq_t *data);
void check_basic_filled(bsq_t *data, int i, int k);
void my_malloc_int_tab(bsq_t *data);
void add_one(bsq_t *data, int k, int i);
void transform_square_available(bsq_t *data, int i, int k);
void add_zero(bsq_t *data, int k, int i);
void transform_string_to_matrice_zero_one(bsq_t *data);
void init_var_bsq(bsq_t *data);
int find_a_square(bsq_t *data, int i, int k);
void define_the_square(bsq_t *data);
int check_buffer(bsq_t *data);
void print_my_final_tab(bsq_t *data);
void transform_matrice_into_char_tab(bsq_t *data);
void my_malloc_char_tab(bsq_t *data);
void find_the_biggest_square(bsq_t *data);
int check_error_bsq(bsq_t *data);
int check_backslash_n(bsq_t *data);
int check_first_line(bsq_t *data);
int check_length(bsq_t *data);
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