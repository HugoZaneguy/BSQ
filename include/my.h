/*
** EPITECH PROJECT, 2019
** delivery
** File description:
** my
*/

#ifndef my_h
#define my_h

typedef struct s_bsq {
    char *buffer;
    int move;
    int line;
    int read;
} bsq_t;

int main(int ac, char **av);
int error_g(int ac);
int fs_open_file(bsq_t **bsq, char **av);
int my_putchar(char c);
int my_strlen(char const *str);
int my_putstr(char const *str);
void search(bsq_t **bsq);
int find_square(bsq_t *bsq, int size, int x);
int find_char(char c);
void print_square(bsq_t **bsq, int size, int x);
void print(bsq_t **bsq);

#endif /* !my_h */