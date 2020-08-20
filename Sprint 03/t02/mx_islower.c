//#include <stdio.h>
#include <stdbool.h>

bool mx_islower(char c) {
    if(c >= 97 && c <= 122)
        return 1;
    return c; 
}

/*
int main() {
    printf("%d", mx_islower('n'));
}*/
