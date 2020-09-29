#include <stdbool.h>
//#include <stdio.h>

bool mx_isspace(char c) { 
    if((c >= 9 && c <= 13 )|| c == 32) 
        return 1;
    return 0;
}

/*
int main() {    
    printf("%d", mx_isspace(' '));
}*/
