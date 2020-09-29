#include <stdio.h>

int mx_strlen(const char*s) {
    int counter = 0
;
    while(s[counter] && s[counter] != '\0') {
    counter++;
    }
    return counter;
}

/*int main() {
    int i = 0;
    i = mx_strlen("text");
    printf("i = %d", i);
}
*/
