/*
** EPITECH PROJECT, 2020
** strcat47
** File description:
** strcat47
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;

    for (; dest[i]; ++i);
    for (int k = 0; src[k]; ++k) {
        dest[i] = src[k];
        ++i;
    }
    dest[i] = '\0';
    return (dest);
}