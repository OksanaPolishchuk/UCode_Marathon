#include "part_of_the_matrix.h"

int mx_result(int num1, int num2, char operation) {
    if (operation == '+')
        return num1 + num2;
    if (operation == '-')
        return num1 - num2;
    if (operation == '*')
        return num1 * num2;
    if (operation == '/')
        return num1 / num2;
    return 0;
}

int mx_q_to_num(char *s) {
    int i = 0;
    int counter = 0;
    int res = 1;

    while (s[i]) {
        if (s[i] == '?')
            counter++;
        i++;
    }
    if (counter == 1)
        return 0;
    for (int j = 1; j < counter; j++)
        res *= 10;
    return res;
}

char mx_sign(char *s) {
    int i = 0;

    while (s[i]) {
        if (s[i] == '+')
            return '+';
        if (s[i] == '-')
            return '-';
        if (s[i] == '*')
            return '*';
        if (s[i] == '/')
            return '/';
        i++;
    }
    return '+';
}

int main(int argc, char **argv) {
    int num1;
    int num2;
    int q_num1 = 0;
    int q_num2 = 0;
    argv[1] = mx_strtrim(argv[1]);
    argv[2] = mx_strtrim(argv[2]);
    argv[3] = mx_strtrim(argv[3]);
    argv[4] = mx_strtrim(argv[4]);

    if (argc == 0)
        return 1;
    if (argc != 5) {
        mx_printerr("usage: ./part_of_the_matrix [operand1] [operation] [operand2] [result]\n");
        exit(1);
    }
    for (int i = 1; i != 5; ++i) {
        if (i == 2)
            continue;
        for (int j = 0; argv[i][j] != '\0'; ++j) {
            if (!mx_isdigit(argv[i][j]) && argv[i][j] != '?') {
                mx_printerr("Invalid operation: ");
                mx_printerr(argv[i]);
                mx_printerr("\n");
                exit(1);
            }
        }
    }

    if ((mx_strlen(argv[2]) != 1) &&
        (
                mx_strcmp(argv[2], "+") != 0 ||
                mx_strcmp(argv[2], "-") != 0 ||
                mx_strcmp(argv[2], "*") != 0 ||
                mx_strcmp(argv[2], "/") != 0)) {
        mx_printerr("Invalid operation: ");
        mx_printerr(argv[2]);
        mx_printerr("");
        exit(1);
    }

    if (mx_atoi(argv[1]))
        num1 = mx_atoi(argv[1]);
    else {
        num1 = mx_q_to_num(argv[1]);
        q_num1++;
    }

    if (mx_atoi(argv[3]))
        num2 = mx_atoi(argv[3]);
    else {
        num2 = mx_q_to_num(argv[3]);
        q_num2++;
    }
    for (int i = 0; i < 10; i++) {
        mx_printint(num1);
        mx_printchar(' ');
        mx_printstr(argv[2]);
        mx_printchar(' ');
        mx_printint(num2);
        mx_printchar(' ');
        mx_printchar('=');
        mx_printchar(' ');
        mx_printint(mx_result(num1, num2, mx_sign(argv[2])));
        mx_printchar('\n');
        if (q_num1)
            num1++;
        if (q_num2)
            num2++;
    }
    return 0;
}
