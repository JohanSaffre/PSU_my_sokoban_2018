/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main file for sokoban
*/

#include "my.h"

void move_player(char *str, int i, int line_len, int key)
{
    if (key == KEY_DOWN && str[i + line_len + 1] != '#')
        mover_down(str, i, line_len);
    if (key == KEY_UP && str[i - line_len - 1] != '#')
        mover_up(str, i, line_len);
    if (key == KEY_LEFT && str[i - 1] != '#')
        mover_left(str, i);
    if (key == KEY_RIGHT && str[i + 1] != '#')
        mover_right(str, i);
}

int map_and_move(char *str, int line_len, int key)
{
    int i = 0;
    int j = 0;
    int storages = 0;

    while (str[i] != 'P')
        i++;
    move_player(str, i, line_len, key);
    while (str[j] != '\0') {
        j++;
        if (str[j] == 'O')
            storages++;
    }
    if (storages == '0')
        return (1);
    return (0);
}

int test_win(char *str, int *storages)
{
    int i = 0;

    while (storages[i] != -1) {
        if (str[storages[i]] != 'O' && str[storages[i]] != 'P') {
            i++;
        } else
            return (0);
    }
    return (1);
}

int size_buf(char const *filepath)
{
    struct stat sb;
    int size;

    stat(filepath, &sb);
    size = sb.st_size;
    return (size);
}

int main(int ac, char **av)
{
    int sizebuf = size_buf(av[1]);
    int fd = open(av[1], O_RDONLY);
    char buffer[sizebuf];
    int size = sizebuf + 1;
    int line_len = 0;
    int res = read(fd, buffer, size);
    char *str = buffer;
    char *begin = str;
    int *storages = set_storages_pos(str);
    int key;

    if (av[1][0] == '-' && av[1][1] == 'h') {
        print_man();
        return (0);
    }
    initscr();
    error_management(str);
    erase();
    printw(str);
    while (str[line_len] != '\n')
        line_len++;
    keypad(stdscr, TRUE);
    while (key != 'q') {
        if (test_win(str, storages)) {
            endwin();
            return (0);
        }
        else
            key = my_sokoban(str, line_len, storages);
        if (key == 32) {
            endwin();
            main(ac, av);
            return (0);
        }
    }
    endwin();
    return (0);
}
