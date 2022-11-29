/*
** EPITECH PROJECT, 2022
** str_to_word_array
** File description:
** str_to_word_array
*/

#include <stdarg.h>
#include <dirent.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "./include/my.h"


char* get_word(char* buffer, int first, int last)
{
    int i = 0;
    char* str = malloc(sizeof(char) * (last - first + 1));

    for (i = first; i < last; i++) {
        str[i - first] = buffer[i];
    }
    str[i - first] = '\0';
    return str;
}

char **str_to_word_array(char *buffer)
{
    char **adr_tab = NULL;
    int a = 0;
    int b = 0;
    int last_space = 0;
    for (b = 0; buffer[b] != '\0'; b++)
        if (buffer[b] == '\n') {
            a++;
        }
    adr_tab = malloc(sizeof(char*) * (a + 1) );
    if (adr_tab == NULL)
        return (0);
    adr_tab[a] = '\0';
    for (b = 0, a = 0; buffer[b] != '\0' ; b++)
        if (buffer[b] == '\n') {
            adr_tab[a] = get_word(buffer, last_space, b);
            last_space = b + 1;
            a++;
        }
    return (adr_tab);
}
