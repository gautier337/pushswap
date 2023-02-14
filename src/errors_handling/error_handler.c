/*
** EPITECH PROJECT, 2021
** error_handler
** File description:
** pushswap
*/

#include "my.h"

int isNumber(int i, int argc, char **argv)
{
    for (int x = 0; x < my_strlen(argv[i]); x++) {
        if (argv[i][x] == '-')
            x++;
        if (!(argv[i][x] >= '0' && argv[i][x] <= '9')) {
            my_putstr(ERROR_MSG);
            return 84;
            }
        }
    return 0;
}

int error_handler(int argc, char **argv)
{
    if (argc == 1) {
        my_putstr(ERROR_MSG);
        return 84;
    }
    for (int i = 1; i < argc; i++)
        if (isNumber(i, argc, argv) == 84)
            return 84;
    return 0;
}
