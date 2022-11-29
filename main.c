/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include <stdarg.h>
#include <dirent.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "./include/my.h"

int main (int argc, char **argv)
{
    if (argc == 2) {
        open_map(argv[1]);
    }

    if (argc == 3) {
        generate_map(argc,argv);
    }
}
