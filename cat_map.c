/*
** EPITECH PROJECT, 2022
** cat_map
** File description:
** cat_map
*/

#include <stdarg.h>
#include <dirent.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "./include/my.h"
#include <fcntl.h>

char ** cat_map(char *buffer,char *path,int x)
{
    int fs = open(path, O_RDONLY);
    int resultat = read(fs,buffer,x);

    if (resultat >= 0) {
        buffer[resultat] = '\0';
        algo (buffer);
    }
}
