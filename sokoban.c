/*
** EPITECH PROJECT, 2018
** sokoban.c
** File description:
** file with sokoban functions
*/

#include "my.h"

int my_sokoban(char *str, int line_len,  int *storages)
{
    int key = getch();

    map_and_move(str, line_len, key);
    test_storages(str, storages);
    erase();
    printw(str);
    refresh();
    return (key);
}
