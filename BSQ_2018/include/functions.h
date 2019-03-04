/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main for BSQ
*/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

int x_check(bsq_t *work, int x, int y);

int y_check(bsq_t *work, int x, int y);

void resize(bsq_t *work, int x, int y);

void finder(bsq_t *work, int x, int y);

void put_x(bsq_t *work);

int error(char **av, char *buff, bsq_t *work);

#endif /* FUNCTIONS_H */
