#include <unistd.h>
void mx_only_printable(void) {
    char i = 0;
 
    for (i = 0; i < 126 && i > 31; i++) {
        write(1, &i, 95);
    }
}

