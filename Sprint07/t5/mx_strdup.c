#include <string.h>
//#include <stdio.h>

char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char*s);
char *mx_strnew(const int size);

char *mx_strdup(const char *str) {
	
    char *str1 = mx_strnew(mx_strlen(str1));
    mx_strcpy(str1, str);
        return str1;
}

/*
int main() {
    char *str = "0123456789";
    char *tt;
    tt = mx_strdup(str);
    printf("%s\n", tt);
}*/

