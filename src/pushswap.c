/*
** EPITECH PROJECT, 2021
** pushswap
** File description:
** main
*/

#include "my.h"

info_lists_t put_lb_into_la(info_lists_t my_struct)
{
    for (int i = 0; i < my_struct.lenght_l_b; i++) {
        my_struct = pa_function(my_struct);
        if (i != my_struct.lenght_l_b - 1)
            my_putchar(' ');
        else
            my_putchar('\n');
    }
    return my_struct;
}

info_lists_t call_functions(info_lists_t my_struct, int n)
{
    if (n == 0) {
        my_struct = put_lb_into_la(my_struct);
        for (int i = 0; i < my_struct.lenght_l_a; i++)
            my_put_nbr(my_struct.list_l_a[i]);
        return my_struct;
    }
    int little = get_little_nbr(my_struct);
    for (int i = 0; my_struct.list_l_a[0] != little || i == my_struct.lenght_l_a; i++) {
        my_struct = ra_function(my_struct);
        if (n != 0)
            my_putchar(' ');
    }
    if (my_struct.list_l_a[0] == little) {
        my_struct = pb_function(my_struct);
        my_putchar(' ');
    }
    call_functions(my_struct, n - 1);
}

int is_tri_to_do(info_lists_t my_struct)
{
    int tri_to_do = 0;
    for (int i = 0; i < my_struct.lenght_l_a - 1; i++)
        if (my_struct.list_l_a[i] > my_struct.list_l_a[i + 1])
            tri_to_do = 1;
    return tri_to_do;
}

int pushswap(int argc, char **argv)
{
    info_lists_t my_struct;
    my_struct = define_struct(my_struct, argc, argv);

    if (is_tri_to_do(my_struct) == 1)
        my_struct = call_functions(my_struct, my_struct.lenght_l_a);
    else
        my_putchar('\n');
    return 0;
}
