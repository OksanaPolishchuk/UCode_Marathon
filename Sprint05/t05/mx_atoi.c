#include <stdbool.h>
//#include <stdio.h>
bool mx_isdigit(int c);

bool mx_isspace(char c);

int mx_atoi(const char *str) {
    int result = 0;
    for (int i = 0; str[i] != '\0' ; i++) {
        if (mx_isdigit(str[i])) {
            result = result * 10 + (str[i] - 48);
            if (mx_isspace(str[i+1])) break;
        }
    }
    return result;
}

/*
int main() {
    char str[] = "12345";
    printf("%d", mx_atoi(str));
}*/
