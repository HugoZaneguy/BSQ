/*
** EPITECH PROJECT, 2019
** day4
** File description:
** my_strlen
*/

#include "../../include/my.h"

int my_strlen(char const *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++);

    return (i);
}
