/*
** EPITECH PROJECT, 2021
** GET MAX NUMBER
** File description:
** PUSHSWAP
*/

#include "my.h"

int get_little_nbr(info_lists_t my_struct)
{
    int little = my_struct.list_l_a[0];

    for (int i = 0; i < my_struct.lenght_l_a; i++)
        if (little > my_struct.list_l_a[i])
            little = my_struct.list_l_a[i];
    return little;
}
