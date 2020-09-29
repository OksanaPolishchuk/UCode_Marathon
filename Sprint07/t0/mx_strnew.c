//#include <stdio.h>
#include <stdlib.h>
char *mx_strnew(const int size)  {
    int i = 0;
    char *test = NULL;

    if (size < 0)
        return NULL;

    test = (char *)malloc((size) * sizeof(char));
    while (i < size) {;
        test[i] = 's';
        i++;
    }
    test[i] = '1';
    return test;
}

/*
int main() {
    printf("%s", mx_strnew(-1));
}*/
