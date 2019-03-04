/*
** EPITECH PROJECT, 2018
** finder.c
** File description:
** BSQ
*/

#include "include/my.h"
#include "include/struct.h"

int x_check(bsq_t *work, int x, int y)
{
    for (int i = 0; i < work->count; i++) {
        x--;
        if (y >= work->nb_lines || x >= work->nb_chars)
            return (84);
        if (work->tab[y][x] != '.') {
            return (0);
        }
    }
    return (1);
}

int y_check(bsq_t *work, int x, int y)
{
    for (int i = 0; i < work->count; i++) {
        y--;
        if (y >= work->nb_lines || x >= work->nb_chars)
            return (84);
        if (work->tab[y][x] != '.')
            return (0);
    }
    return (1);
}

void resize(bsq_t *work, int x, int y)
{
    if (work->size_max < work->size) {
        work->size_max = work->size;
        work->x_max = x - work->size;
        work->y_max = y - work->size;
    }
}

void finder(bsq_t *work, int x, int y)
{
    work->count = 1;
    work->size = 1;

    while (work->tab[y][x] == '.') {
        y++;
        x++;
        if (x_check(work, x, y) == 84 || y_check(work, x, y) == 84)
            break;
        if (x_check(work, x, y) == 0 || y_check(work, x, y) == 0)
            break;
        if (work->tab[y][x] == '.' && x_check(work, x, y) == 1 &&
        y_check(work, x, y) == 1) {
            work->count++;
            work->size++;
        }
    }
    resize(work, x, y);
}
