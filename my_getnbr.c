/*
** EPITECH PROJECT, 2022
** my_getnbr
** File description:
** my_getnbr
*/

#include <stdarg.h>
#include <dirent.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "include/my.h"

int my_getisneg(char str, int a)
{
    if (str == '-') {
        a = -1;
    } else {
        a = 1;
    }
    return (a);
}

int my_getnbr(char const *str)
{
    int test = 0;
    int nbr = 0;
    int m = 0;
    int resultat = 1;

    while (m != my_strlen(str)) {
        if (str[m] == '+' || str[m] == '-') {
            resultat = my_getisneg(str[m], resultat);
        }
        if (str[m] >= '0' && str[m] <= '9') {
            nbr = nbr * 10;
            nbr = nbr + str[m] - '0';
            test = 1;
        }
        if (test == 1 && str[m] < 48 || test == 1 && 57 < str[m]) {
            break;
        }
        m++;
    }
    return (nbr * resultat);
}
