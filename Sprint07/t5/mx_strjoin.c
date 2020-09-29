#include <stddef.h>
//#include <stdio.h>

char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char*s);
char *mx_strnew(const int size);
char *mx_strcat(char *s1, const char *s2);
char *mx_strdup(const char *str);

char *mx_strjoin(char const *s1, char const *s2) {
    char *join = NULL;


    if (NULL == s1 && NULL == s2)
        return NULL;
    if (s1 && s2) {
        join = mx_strnew(mx_strlen(s1) + mx_strlen(s2));         
        join = mx_strcpy(join, s1);
        join = mx_strcat(join, s2);
    } 
    else if (s1) {
        return (char *)s1;
    }
    else {
        return (char *)s2;
    }   
    return join;
}

/*
int main() {
    char *str1 = "this";
    char *str2 = "dodge ";
    char *str3 = NULL;

    printf("%s\n", mx_strjoin(str2, str1));
    printf("%s\n", mx_strjoin(str1, str3));
    printf("%s\n", mx_strjoin(str3, str3));
}*/