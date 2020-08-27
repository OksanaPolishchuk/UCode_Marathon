#ifndef PART_OF_THE_MATRIX_H
#define PART_OF_THE_MATRIX_H

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>

bool mx_isdigit(int c);
void mx_printchar(char c);
int mx_atoi(const char *str);
void mx_printint(int num);
void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_result(int num1, int num2, char operation);
int mx_q_to_num(char *s);
char mx_sign(char *s);
int mx_strlen(const char *s);
void mx_printerr(const char *s);
char *mx_strnew(const int size);
bool mx_isspace(char c);
char *mx_strdup(const char *s1);
int mx_strcmp(const char *s1, const char *s2);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strtrim(const char *str);
int main(int argc, char **argv);

#endif
