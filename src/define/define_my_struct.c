/*
** EPITECH PROJECT, 2021
** push swap
** File description:
** main
*/

#include "../../includes/my.h"

info_lists_t define_struct(info_lists_t my_struct, int argc, char **argv)
{
    my_struct.list_l_a = malloc(sizeof(int) * (argc));
    my_struct.lenght_l_a = argc - 1;
    my_struct.lenght_l_b = argc - 1;
    my_struct.list_l_b = malloc(sizeof(int) * (argc));
    for (int i = 0; i < argc - 1; i++)
        my_struct.list_l_a[i] = my_getnbr(argv[i + 1]);
    return my_struct;
}
