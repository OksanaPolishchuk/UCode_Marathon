#include <stdio.h>
#include <unistd.h>

static void mx_printchar(char c) { 
    write(1, &c, 1);
}

static int mx_strlen(const char *s) {
    int counter = 0;

    while(s[counter]) {
    counter++;
    }
    return counter;
}

static void mx_printstr(const char*s) {
    write(1, s, mx_strlen(s));
}

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
}

