/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** display an integer.
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int left;
    int endnumber;

    if (nb < 0) {
        my_putchar('-');
        nb = - nb;
        my_put_nbr(nb);
    } else {
        endnumber = nb % 10;
        left = nb / 10;
        if (left != 0)
            my_put_nbr(left);
        my_putchar(endnumber + 48);
    }
    return 0;
}
