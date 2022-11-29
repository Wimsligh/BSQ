/*
** EPITECH PROJECT, 2022
** algo
** File description:
** algo
*/

#include <stdarg.h>
#include <dirent.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "./include/my.h"

int printf_carre_v2(char **tab, int col, int row)
{
    square_info_t *info = malloc(sizeof(square_info_t));
    info->square_size = 1;
    info->final_x = 0;
    info->final_y = 0;

    for (; tab[col] != NULL;col++) {
        for (; tab[col][row] != '\0';row++) {
            supp_printf_carre_v2(tab,col,row,info);
        }
        row = 0;
    }
    display_carre(tab, info->square_size - 1, info->final_x, info->final_y);
}

int printf_carre(char **tab, int col, int row, int square_size)
{
    int tmp_1 = col + square_size;

    for (;col < tmp_1 && tab[col] != NULL;col++) {
        if (supp_2_printf_carre_v3(tab,col,row, square_size) == 0)
            return (0);
    }
    if (col < tmp_1)
        return (0);
    return (1);
}

int algo_v3(char *line, int j, int size)
{
    for (int b = j; line[b] != '\0' && b < j + size; b++) {
        if (line[b] == 'o') {
            return (0);
        }
    }
    return (1);
}

int algo_v2(char **tab, int i, int j, int size)
{
    for (int a = i; tab[a] != NULL && a < i + size; a++) {
        if (algo_v3(tab[a] , j , size == 0)) {
            return (0);
        }
    }
    return (1);
}

char **algo(char *buffer)
{
    char **tab;
    tab = str_to_word_array(buffer);
    printf_carre_v2(tab, 1, 0);
    return (0);
}
