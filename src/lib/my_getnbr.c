/*
** EPITECH PROJECT, 2021
** my_getnbr
** File description:
** return int
*/

int my_getnbr(char *str)
{
    int nb = 0;
    int nbneg = 0;
    int j = 1;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == '-') {
            nbneg += 1;
        } else
            j = j * 10;
    for (int i = nbneg; str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'); i++)
        if (str[i] >= '0' && str[i] <= '9') {
            j = j / 10;
            nb = nb + (str[i] - '0') * j;
        }
    if (nbneg % 2 == 1)
        nb = nb * - 1;
    return nb;
}
