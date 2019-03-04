/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main for BSQ
*/

#ifndef STRUCT_H
#define STRUCT_H

typedef struct bsq_s
{
    char **tab;
    int size_max;
    int size;
    int nb_lines;
    int nb_chars;
    int x_max;
    int x_max2;
    int y_max;
    int count;
} bsq_t;

#endif /* STRUCT_H */
