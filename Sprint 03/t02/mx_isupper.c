//#include <stdio.h>
#include <stdbool.h>

bool mx_isupper(int c) {
    if(c >= 65 && c <= 90)
        return 1;
    else
        return 0;
}

/*
int main() {
    printf("%d", mx_isupper('f'));
}
*/
