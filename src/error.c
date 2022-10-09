/*
** EPITECH PROJECT, 2020
** B-CPE-110-STG-1-1-pushswap-axel.derbisz
** File description:
** error
*/

#include "../include/pushswap.h"
#include "../include/my.h"
#include <stddef.h>
#include <stdlib.h>

int is_alpha(char **av, int i, int j)
{
    if (av[i][j] < '0' || av[i][j] > '9') {
        return (84);
    }
    return (0);
}

int error_handling(char **av)
{
    int error = 0;

    for (int i = 1; av[i]; ++i) {
        for (int j = 0; av[i][j]; ++j) {
            error = (is_alpha(av, i, j) == 84) ? (84) : (0);
        }
    }
    return (error);
}