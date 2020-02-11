/*
** EPITECH PROJECT, 2019
** delivery
** File description:
** error_g
*/

#include "include/my.h"

int error_g(int ac)
{
    char *str;
    int i = 0;

    if (ac != 2) {
        my_putstr("to many or to few arguments !\n");
        return (84);
    }
    /*if (str[i] == 'o' && str[i] == '.') {
        return (0);
    } else {
        return (84);
    }*/
    return (0);
}

