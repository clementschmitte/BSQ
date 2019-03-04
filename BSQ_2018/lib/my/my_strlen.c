/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
** returns nb of characters found in string
*/

int my_strlen(char const *str)
{
    int num = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        num++;
    }
    return (num);
}
