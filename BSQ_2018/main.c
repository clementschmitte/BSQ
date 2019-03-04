/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** BSQ
*/

#include <sys/stat.h>
#include <fcntl.h>
#include "include/my.h"
#include "include/struct.h"
#include "include/functions.h"

int count_char(char *buff)
{
    int count = 0;
    int nb = 0;

    for (; buff[count] != '\n'; count++);
    count++;
    for (; buff[count] != '\n'; count++)
        nb++;
    return (nb);
}

void string_in_tab(bsq_t *work, char *buff)
{
    int pos = 0;
    int y = 0;
    work->tab = malloc(sizeof(char *) * (work->nb_lines + 1));

    for (; buff[pos] != '\n'; pos++);
    pos++;
    for (; y < work->nb_lines; y++) {
        work->tab[y] = malloc(sizeof(char) * (work->nb_chars + 1));
        for (int x = 0; x < work->nb_chars + 1; x++) {
            work->tab[y][x] = buff[pos];
            pos++;
        }
    }
}

void verifier(bsq_t *work, int x, int y)
{
    if (work->tab[y][x] == '.') {
        finder(work, x, y);
    }
}

void squares(bsq_t *work)
{
    int x = 0;
    int y = 0;

    for (; y < work->nb_lines - work->size_max; y++) {
        for (; work->tab[y][x] != '\0'; x++) {
            verifier(work, x, y);
        }
        x = 0;
    }
}

int main(int ac, char **av)
{
    menu_help(av);
    bsq_t *work;
    work = malloc(sizeof(bsq_t));
    struct stat sizeFile;
    stat(av[1], &sizeFile);

    char *buff = malloc(sizeof(char) * sizeFile.st_size);
    int fd;
    fd = open(av[1], O_RDONLY);
    read(fd, buff, sizeFile.st_size);
    work->nb_lines = my_getnbr(buff);
    work->nb_chars = count_char(buff);
    work->count = 0;
    string_in_tab(work, buff);
    squares(work);
    put_x(work);
    if (error(av, buff, work) == 84)
        return (84);
    return (0);
}
