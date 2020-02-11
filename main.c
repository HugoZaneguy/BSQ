/*
** EPITECH PROJECT, 2019
** BSQ
** File description:
** CPE
*/

#include "include/my.h"
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    bsq_t *bsq = malloc(sizeof(bsq_t));

    if (error_g(ac) == 84) {
        return (84);
    } else if (ac == 2) {
        if (fs_open_file(&bsq, av) <  0)
            return (84);
        search(&bsq);
        print(&bsq);
    }
    free(bsq);
    return (0);
}