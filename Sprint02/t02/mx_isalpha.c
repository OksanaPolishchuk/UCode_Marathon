i// #include <stdio.h>
#include <stdbool.h>

bool mx_isalpha(int c) {
    if((c >= 65 && c <= 90) || (c >= 97 && c >= 122)) 
        return 1;
    return 0;
}

/*
int main() {

    printf("%d", mx_isalpha('a'));
}
*/
