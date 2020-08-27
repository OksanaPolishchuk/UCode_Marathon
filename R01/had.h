#ifndef HAD_H
#define HAD_H

#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printint(int n);
int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char*s);
char *mx_strcpy(char *dst, const char *src);
int mx_selection_sort(char **arr, int size);

#endif // HAD_H
