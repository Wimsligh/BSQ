/*
** EPITECH PROJECT, 2022
** print_carre
** File description:
** print_carre
*/

#include <dirent.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "./include/my.h"

int display_carre(char **tab, int square_size, int i, int j)
{
    int tmp_1 = i + square_size;
    int tmp_2 = j + square_size;

    for (int x = i; x < tmp_1 ;x++) {
        for (int y = j; y < tmp_2 ;y++) {
            tab[x][y] = 'x';
        }
    }
    for (int b = 1; tab[b] != NULL;b++) {
        my_printf("%s\n",tab[b]);
    }
}

int supp_printf_carre_v2(char **tab, int col, int row,
square_info_t *info)
{
    while (printf_carre(tab,col,row, info->square_size) == 1) {
        info->square_size++;
        info->final_x = col;
        info->final_y = row;
    }
}

int supp_2_printf_carre_v3(char **tab, int col, int row, int square_size)
{
    int tmp_2 = row + square_size;

    for (;row < tmp_2  ;row++) {
        if (tab[col][row] == 'o' || tab[col][row] == '\0' ||
        tab[col][row] == '\n') {
            return (0);
        }
    }
    return (1);
}
