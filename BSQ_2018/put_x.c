/*
** EPITECH PROJECT, 2018
** put_x.c
** File description:
** BSQ
*/

#include "include/my.h"
#include "include/struct.h"

void put_x(bsq_t *work)
{
    int x = work->x_max;

    for (int i = 0; i < work->size_max; i++) {
        for (int j = 0; j < work->size_max; j++) {
            work->tab[work->y_max][work->x_max] = 'x';
            work->x_max++;
        }
        work->x_max = x;
        work->y_max++;
    }
    for (int i = 0; work->tab[i] != NULL; i++)
        my_putstr(work->tab[i]);
}

void other_chars(bsq_t *work, int i, int j)
{
    if (work->tab[i][j] != '.' && work->tab[i][j] != 'o' &&
    work->tab[i][j] != '\0' && work->tab[i][j] != '\n' &&
    (work->tab[i][j] < '0' || work->tab[i][j] > '9')) {
        exit(84);
    }
}

int error(char **av, char *buff, bsq_t *work)
{
    if (av[1] == NULL)
        return (84);
    for (int i = 0; work->tab[i] != NULL; i++)
        for (int j = 0; work->tab[i][j] != '\0'; j++)
            other_chars(work, i, j);
    if (buff[0] == '\0')
        return (84);
    return (0);
}

void menu_help(char **av)
{
    if (av[1] == NULL || my_strcmp(av[1], "-h") == 1) {
        my_putstr("====== BSQ HELP MENU ======\n\n");
        my_putstr("You need to add a map in argument.\n");
        my_putstr("The map need to follow this pattern :\n\n");
        my_putstr("4\n......\n......\n......\n......\n\nOr :\n\n");
        my_putstr("3\n..o...o.......ooo.ooo.oo...\n..o...o..ooo....o.o.o......\n..o.ooo.o....o....oo..ooo..\n\n");
        my_putstr("The number represent how many lines that you map have\n");
        exit(0);
    }
}
