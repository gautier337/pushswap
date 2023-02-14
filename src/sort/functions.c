/*
** EPITECH PROJECT, 2021
** pushswap
** File description:
** main
*/

#include "my.h"

info_lists_t ra_function(info_lists_t my_struct)
{
    int first_element = my_struct.list_l_a[0];
    my_struct.list_l_a[my_struct.lenght_l_a] = first_element;
    for (int i = 0; i < my_struct.lenght_l_a; i++)
        my_struct.list_l_a[i] = my_struct.list_l_a[i + 1];
    my_putstr("ra");
    return my_struct;
}

info_lists_t pb_function(info_lists_t my_struct)
{
    for (int i = my_struct.lenght_l_b; i > 0; i--)
        my_struct.list_l_b[i] = my_struct.list_l_b[i - 1];
    my_struct.list_l_b[0] = my_struct.list_l_a[0];
    for (int i = 0; i < my_struct.lenght_l_a; i++)
        my_struct.list_l_a[i] = my_struct.list_l_a[i + 1];
    my_struct.lenght_l_a--;

    my_putstr("pb");
    return my_struct;
}

info_lists_t pa_function(info_lists_t my_struct)
{
    for (int i = my_struct.lenght_l_b; i > 0; i--)
        my_struct.list_l_b[i] = my_struct.list_l_b[i - 1];
    my_struct.list_l_a[0] = my_struct.list_l_b[0];
    my_putstr("pa");
    return my_struct;
}
