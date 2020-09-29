#include <stdlib.h>

void mx_printchar(char c);
char *mx_strchr(const char *s, int c);
int mx_strlen(const char *s);
void mx_printstr(const char *s);

int main(int argc, char *argv[]) {
    char *str = NULL;

    if (argc >= 1) {
        str = argv[0];
        while (str) {
            if (!mx_strchr(&str[1], '/')) {
                mx_printstr(&str[1]);
                mx_printchar('\n');
                break;
            } else
                str = mx_strchr(&str[1], '/');
        }
    }
    return 0;
}

