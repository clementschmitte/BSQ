/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** function that returns a number, sent to the function as a string.
*/

void negative(const char *str, int *L, int *c)
{
    if (*(str + *L) == '-' && (*(str + *L + 1) > 47 && *(str + *L + 1) < 58)) {
        *c = -1;
        *L += 1;
    }
}

int my_getnbr(char const *str)
{
    int L = 0;
    int a = 0;
    long b = 0;
    int c = 1;

    while (*(str + L) != '\0') {
        negative(str, &L, &c);
        if (*(str + L) > 47 && *(str + L) < 58) {
            b += *(str + L) - 48;
            b *= 10;
            a++;
        } else if (a)
            break;
        L++;
    }
    b /= 10;
    if (b > 2147483647)
        return 0;
    return (c * (int) b);
}