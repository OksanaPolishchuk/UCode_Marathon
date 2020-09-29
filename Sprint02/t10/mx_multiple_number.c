//#include <stdio.h>
#include <stdbool.h>

bool mx_multiple_number(int n, int mult) {
    if(mult % n == 0)
        return true;
    return false;
}

/*
int main() {
    printf("%d", mx_multiple_number(3, 9));
}
*/

