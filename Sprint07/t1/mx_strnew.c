//#include <stdio.h>
#include <stdlib.h>
char *mx_strnew(const int size)  {
    int i = 0;
    char *test = NULL;

    if (size < 0)
        return NULL;

    test = (char *)malloc((size +1) * sizeof(char));
    while (i < size) {;
        test[i] = '\0';
        i++;
    }
    test[i] = '\0';
    return test;
}

/*
int main() {
    printf("%s", mx_strnew(-1));
}*/
