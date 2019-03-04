/*
** EPITECH PROJECT, 2018
** firtree
** File description:
** task firtree
*/

int my_strcmp(char const *s1, char const *s2)
{
    for (int i = 0; s1[i] && s2[i]; i++) {
        if (s1[i] == '\0' || s2[i] == '\0')
            return (0);
        if (s1[i] != s2[i])
            return (0);
    }
    return (1);
}
