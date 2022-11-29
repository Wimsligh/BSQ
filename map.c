/*
** EPITECH PROJECT, 2022
** map
** File description:
** map
*/

#include <stdarg.h>
#include <dirent.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "./include/my.h"

int open_map(char const *path)
{
    struct stat sb;
    stat(path, &sb);
    char *buf = malloc(sizeof(char)*sb.st_size + 1);
    char **map = cat_map(buf, path, sb.st_size);
}

int generate_map(int argc,char **argv)
{
    int tmp = my_getnbr(argv[1]);
    int position = 0;

    for (int i = 0; i < my_getnbr(argv[1]); i++) {
        for (int x = 0; x < my_getnbr(argv[1]); x++) {
            my_putstr(argv[2]);
            position++;
        }
        if (position >= tmp) {
            position = 0;
        }
    }
    return (0);
}
