#include "header.h"

bool mx_isdigit(int c) {
    if (c >= 48 && c <= 57) {
        return true;
    }
    else {
        return false;
    }
}

//int main() {
//    printf("%d\n",mx_isdigit('0'));
//} 

