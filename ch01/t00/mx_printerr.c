#include <unistd.h>

static int mx_strlen(const char *s) {
    int counter = 0;

    while(s[counter]) {
    counter++;
    }
    return counter;
}

void mx_printerr(const char *s) {
    write(2, s, mx_strlen(s));
}

