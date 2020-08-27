#include <unistd.h>
#include <string.h>

static int mx_strlen(const char *s) {
    int i = 0;

    while(s[i])
        i++;
    return i;
}

static void mx_printchar(char c) {
    write(1, &c, 1);
}

static void mx_printstr(const char *s) {
    write(1, s, mx_strlen(s));
}

int main (int argc, char *argv[]) {
    int i;
    
    for (i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
    mx_printchar('\n');
    }
}
