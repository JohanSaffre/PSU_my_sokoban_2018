/*
** EPITECH PROJECT, 2018
** my_get_nbr.c
** File description:
** gets number
*/

int my_get_nbr(char const *str)
{
    int i = 0;
    unsigned int r = 0;
    unsigned int max = 2147483647;
    int res = 0;
    int neg = 1;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            neg = neg * (-1);
        i = i + 1;
    }
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9') {
        r = r * 10 + (str[i] - 48);
        if (r > max)
            return (0);
        i++;
    }
    res = r;
    return (res * neg);
}
