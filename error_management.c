/*
** EPITECH PROJECT, 2018
** error_management.c
** File description:
** file to manage errors for my_sokoban
*/

#include <stdlib.h>
#include "my.h"

void error_management(char const *str)
{
    int i = 0;
    int x_num = 0;
    int o_num = 0;

    while (str[i] != '\0') {
        if (str[i] == 'X')
            x_num++;
        if (str[i] == 'O')
            o_num++;
        if (str[i] != 'X' && str[i] != 'O' && str[i] != ' ' && str[i] != 'P' &&
            str[i] != '\n' && str[i] != '#')
            exit (84);
        i++;
    }
    if (x_num < o_num) {
        my_putstr("Wrong map, please verify your map");
        exit (84);
    }
}
