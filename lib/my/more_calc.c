/*
** EPITECH PROJECT, 2020
** more calc
** File description:
** more_calc
*/

#include "../../include/my.h"

int sous(int n, int n2)
{
    int result = n - n2;

    my_put_nbr(result);
    my_putchar('\n');
    return (0);
}

int modulo(int n, int n2)
{
    int result = 0;

    if (n2 <= 0) {
        my_putstr("Stop: modulo by zero\n");
        return (84);
    }

    result = n % n2;
    my_put_nbr(result);
    my_putchar('\n');
    return (0);
}