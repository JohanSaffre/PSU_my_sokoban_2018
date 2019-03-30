/*
** EPITECH PROJECT, 2018
** move_player.c
** File description:
** playermove functions
*/

void mover_down(char *str, int i, int lin)
{
    if (str[i + lin + 1] == 'X') {
        if (str[i +  (lin + 1) * 2] != '#' && str[i +  (lin + 1) * 2] != 'X') {
            str[i + (lin + 1) * 2] = 'X';
            str[i + lin + 1] = 'P';
            str[i] = ' ';
        }
    } else {
        str[i + lin + 1] = 'P';
        str[i] = ' ';
    }
}

void mover_up(char *str, int i, int line)
{
    if (str[i - line - 1] == 'X') {
        if (str[i -  line * 2 - 2] != '#' && str[i -  line * 2 - 2] != 'X') {
            str[i - line * 2 - 2 ] = 'X';
            str[i - line - 1] = 'P';
            str[i] = ' ';
        }
    } else {
        str[i - line - 1] = 'P';
        str[i] = ' ';
    }
}

void mover_left(char *str, int i)
{
    if (str[i - 1] == 'X') {
        if (str[i - 2] != '#' && str[i - 2] != 'X') {
            str[i - 2] = 'X';
            str[i - 1] = 'P';
            str[i] = ' ';
        }
    } else {
        str[i - 1] = 'P';
        str[i] = ' ';
    }
}

void mover_right(char *str, int i)
{
    if (str[i + 1] == 'X') {
        if (str[i + 2] != '#' && str[i + 2] != 'X') {
            str[i +  2] = 'X';
            str[i +  1] = 'P';
            str[i] = ' ';
        }
    } else {
        str[i + 1] = 'P';
        str[i] = ' ';
    }
}
