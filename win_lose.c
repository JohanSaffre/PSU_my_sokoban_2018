/*
** EPITECH PROJECT, 2018
** win_lose.c
** File description:
** file to check lose and win
*/

#include <stdlib.h>
#include "my.h"

void test_storages(char *str, int *storages)
{
    int i = 0;

    while (storages[i] != -1) {
        if (str[storages[i]] == ' ')
            str[storages[i]] = 'O';
        i++;
    }
}

int count_storages(char const *str)
{
    int i = 0;
    int count = 0;

    while (str[i] != '\0') {
        if (str[i] == 'O')
            count++;
        i++;
    }
    return (i);
}

int *set_storages_pos(char const *str)
{
    int *storages;
    int count = 0;
    int i = 0;
    int pos_in_array = 0;

    count = count_storages(str);
    storages = malloc(sizeof(int *) * (count + 1));
    while (str[i] != '\0') {
        if (str[i] == 'O') {
            storages[pos_in_array] = i;
            pos_in_array++;
        }
        i++;
    }
    storages[pos_in_array + 1] = -1;
    return (storages);
}
