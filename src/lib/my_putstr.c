/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** No file there, just an epitech header example
*/

void my_putchar(char c);

void my_putstr (char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
}
