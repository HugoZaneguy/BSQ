/*
** EPITECH PROJECT, 2019
** delivery
** File description:
** bsq
*/

#include "include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void search(bsq_t **bsq)
{
    int i = 0;
    int j = 0;

    for (;(*bsq)->buffer[i] != '\n'; i++)
        j++;
    j = j + 1;
    (*bsq)->move = j;
    i = j;
    j = 0;
    for (;(*bsq)->buffer[i] != '\n'; i++)
        j++;
    (*bsq)->line = j + 1;
}

int find_char(char c)
{
    int i = 0;

    if (c == '.')
        i = 1;

    return (i);
}

int find_square(bsq_t *bsq, int size, int x)
{
    int i = x + bsq->move;
    int j = 0;
    int k = 0;
    char c;

    for (k = 0; k < size; k++) {
        for (j = 0; j < size; j++) {
            c = bsq->buffer[i + j];
            if (find_char(c) == 0) {
                return (1);
            }
        }
        i += bsq->line;
    }
    return (0);
}

void print_square(bsq_t **bsq, int size, int x)
{
    int i = x + (*bsq)->move;
    int j = 0;

    for (int k = 0; k < size; k++) {
        while (j < size) {
            (*bsq)->buffer[i + j] = 'x';
            j++;
        }
        i = i + (*bsq)->line;
        j = 0;
    }
    (*bsq)->buffer = (*bsq)->buffer + (*bsq)->move;
    write(1, (*bsq)->buffer, my_strlen((*bsq)->buffer));
}

void print(bsq_t **bsq)
{
    int size_max = 0;
    int pos_max = 0;
    int size = 1;
    int i = 0;

    for (i = 0; (*bsq)->buffer[i] != '\0'; i++) {
        for (;find_square(*bsq, size, i) == 0; size++);
        if (size - 1 > size_max) {
            size_max = size - 1;
            pos_max = i;
        }
    }
    print_square(&(*bsq), size_max, pos_max);
    //free(&(*bsq)->buffer);
}