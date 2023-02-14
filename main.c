/*
** EPITECH PROJECT, 2021
** push swap
** File description:
** main
*/

#include "my.h"

int main(int argc, char **argv)
{
    if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'h') {
        my_putstr("usage: ./push_swap 2 1 8 1\n");
        return 0;
    }
    if (error_handler(argc, argv) == 84)
        return 84;
    return pushswap(argc, argv);
}
