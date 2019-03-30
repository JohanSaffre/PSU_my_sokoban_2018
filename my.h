/*
** EPITECH PROJECT, 2018
** library
** File description:
** 101pong
*/

#ifndef MY_
#define MY_

#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int my_strlen(char const *str);
int my_get_nbr(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
void mover_down(char *str, int i, int line_len);
void mover_up(char *str, int i, int line_len);
void mover_left(char *str, int i);
void mover_right(char *str, int i);
int *set_storages_pos(char const *str);
void test_storages(char *str, int *storages);
void error_management(char const *str);
void print_man(void);
int my_sokoban(char *str, int line_len, int *storages);
int map_and_move(char *str, int line_len, int key);

#endif /* MY_ */
