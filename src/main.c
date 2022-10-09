/*
** EPITECH PROJECT, 2020
** B-CPE-110-STG-1-1-pushswap-axel.derbisz
** File description:
** pushswap
*/

#include "../include/pushswap.h"
#include "../include/my.h"
#include <stddef.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    data_t *main_data = malloc(sizeof(*main_data));
    if (error_handling(av) == 84)
        return (84);
    init_data(main_data, ac, av);
    if (check(main_data) == 1) {
        my_putchar('\n');
        return (0);
    }
    start_pushswap(main_data);
    return (0);
}