/*
** EPITECH PROJECT, 2018
** my_put_nbr.c
** File description:
** displays the number set in parameter
*/

#include "my.h"

int power(int j)
{
    int b = 1;

    while (j != 1) {
        b = b * 10;
        j--;
    }
    return (b);
}

void number(int nb, int nb2, int j, int i)
{
    while (i != 0) {
        j = i;
        i--;
        nb2 = nb / power(j);
        if (nb2 > 9) {
            nb2 = nb2 % 10;
        }
        my_putchar(nb2 + 48);
    }
}

int my_put_nbr(int nb)
{
    int j = 0;
    int i = 0;
    int nb1 = nb;
    int nb2 = nb;

    if (nb == 0)
        my_putchar('0');
    if (nb < 0) {
        nb = nb * (-1);
        my_putchar('-');
    }
    while (nb1 != 0) {
        nb1 = nb1 / 10;
        i++;
    }
    number(nb, nb2, j, i);
    return (0);
}
