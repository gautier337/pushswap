/*
** EPITECH PROJECT, 2021
** my_ls
** File description:
** my_ls_header
*/

#ifndef my
    #define my

    #include <stdlib.h>
    #include <stdio.h>

    #define ERROR_MSG "Wrong arguments; errors.\n"

typedef struct info_lists {
    int *list_l_a;
    int *list_l_b;
    int lenght_l_a;
    int lenght_l_b;
} info_lists_t;

int pushswap(int argc, char **argv);
info_lists_t define_struct(info_lists_t my_struct, int argc, char **argv);

info_lists_t ra_function(info_lists_t my_struct);
info_lists_t pa_function(info_lists_t my_struct);
info_lists_t pb_function(info_lists_t my_struct);

int error_handler(int argc, char **argv);

int get_little_nbr(info_lists_t my_struct);
int lenght_int(int nbr);
int my_getnbr(char *str);
void my_putstr(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_strlen (char const *str);

#endif