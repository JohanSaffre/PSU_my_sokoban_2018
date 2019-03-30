/*
** EPITECH PROJECT, 2018
** print_man.c
** File description:
** man printing file
*/

#include "my.h"

void print_man(void)
{
    my_putstr("USAGE\n");
    my_putstr("    ./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("     map  file representing the warehouse map, containing");
    my_putstr("'#' for walls, \n");
    my_putstr("          'P' for the player, 'X' for boxes and 'O' for");
    my_putstr("storage locations.");
}
