/*
** EPITECH PROJECT, 2019
** day3
** File description:
** my_putchar
*/

#include <unistd.h>
#include "../../include/my.h"

int my_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}
