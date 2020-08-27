//#include <stdio.h>
#include "had.h"

bool mx_isdigit(int c) {
    if(c >= 48 && c <= 57) {
        return 1;
    }
    return 0;
}

/*
int main() {
    printf("%d", mx_isdigit('8'));
}*/
