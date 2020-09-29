//#include <stdio.h>
int mx_factorial_iter(int n) {
    int t = 1;

    for (int i = 1; i <= n; i++) {
        t *= i;
    }
    return t;
}

/*
int main() {
    printf("%d", mx_factorial_iter(5));
}*/
