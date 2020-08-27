#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

static void mx_printchar(char c) {
    write(1, &c, 1);
}

static int mx_strlen(const char *s) {
    int i = 0;

    while (s[i])
        i++;
    return i;
}

static void mx_printstr(const char *s) {
    write(1, s, mx_strlen(s));
}

static void mx_printerr(const char *s) {
    write(2, s, mx_strlen(s));
}

int main(int argc, char *argv[]) {
    int file_ptr = open(argv[1], O_RDONLY);
    char buffer[1];

    if (argv[2] != NULL || argc > 2) {
        mx_printerr("usage: ./read_file [file_path]\n");
        return -1;
    }
    if (file_ptr == -1) {
        mx_printerr("error\n");
                return 0;
    }
    while (read(file_ptr, buffer, 1))
        mx_printstr(buffer);
    mx_printchar('\n');
    if (close(file_ptr) > 0)
        mx_printerr("error\n");
    close(file_ptr);
    return 0;
}
