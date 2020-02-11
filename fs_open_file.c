/*
** EPITECH PROJECT, 2019
** delivery
** File description:
** fs_open_file
*/

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "include/my.h"

int fs_open_file(bsq_t **bsq, char **av)
{
    struct stat stats;
    int size = 10050 * 10000;
    int fd = open(av[1], O_RDONLY);

    stat(av[1], &stats);
    (*bsq)->buffer = malloc(sizeof(char) * (size + 1));
    read(fd, (*bsq)->buffer, stats.st_size);
    (*bsq)->buffer[stats.st_size] = '\0';

    return (0);
}