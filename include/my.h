/*
** EPITECH PROJECT, 2022
** printf
** File description:
** my.h
*/
#include <stdarg.h>
#include <dirent.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef MY_H_
    #define MY_H_

typedef struct square_info {
    int square_size;
    int final_x;
    int final_y;
} square_info_t;

void my_putchar(char c);
int my_printf(const char *, ...);
char **str_to_word_array(char *buffer);
int my_getisneg(char str, int a);
char **algo(char *buffer);
int algo_v2(char **tab, int i, int j, int size);
int algo_v3(char *line, int j, int size);
int generate_map(int argc,char **argv);
int my_getnbr(char const *str);
int printf_carre(char **tab, int col, int row, int square_size);
int printf_carre_v2(char **tab, int col, int row);
int display_carre(char **tab, int square_size, int i, int j);
int supp_printf_carre_v2(char **tab, int col, int row,
square_info_t *info);
int supp_2_printf_carre_v3(char **tab, int col, int row, int square_size);
char* get_word(char* buffer, int first, int last);
int my_printf_2(int,va_list, const char *, int);
int my_putstr(char const *str);
int my_strlen(char const *str);
char ** cat_map(char *buffer,char *path,int x);
int open_map(char const *path);
void my_putchar(char);
int my_strlen(char const *str);
int my_putstr(char const *);
int my_digit(char const my_char);
int flag_a_maj(va_list,int);
int flag_p(va_list,int);
int flag_n(va_list,int,char * str);
int flag_b(va_list,int);
int flag_s_maj(va_list,int);
int flag_e(va_list,int);
int flag_e_maj(va_list,int);
int flag_g(va_list,int);
int flag_g_maj(va_list,int);
int flag_a(va_list,int);
int flag_s(va_list,int);
int flag_c(va_list,int);
int flag_i(va_list,int);
int flag_d(va_list,int);
int flag_pr(va_list,int);
int flag_u(va_list,int);
int flag_o(va_list,int);
int flag_x(va_list,int);
int flag_x_maj(va_list,int);
int flag_f(va_list,int);
int flag_f_maj(va_list,int);
int my_put_bin(unsigned, int);
int my_put_float(double);
int my_put_hexa_float(double);
int my_put_hexa_maj(unsigned);
int my_put_hexa_min(unsigned);
int my_put_nbr(int, int, int);
int my_put_nbr_count(int,int, int);
int my_digit(char const);
int my_put_octet(unsigned);
int get_precision(const char *, int, va_list);
int get_precision_star(const char *,va_list,int,int);
int my_put_pointer(int);
char *my_str_min(char *);
int my_put_scientific_maj(double);
int my_put_scientific_min(double);
int my_put_short_maj(double);
int my_put_short_min(double);
int my_put_str_s(char const *);
int my_put_unsigned(unsigned);
int tableau(va_list,const char *,int,int);

#endif /* !MY_H_ */
