//#include <stdio.h>
int mx_factorial_rec(int n) {

    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;
    unsigned t = n * mx_factorial_rec(n - 1); 
    return t;

}

/*
int main() {
    printf("%d", mx_factorial_rec(8));
}*/
