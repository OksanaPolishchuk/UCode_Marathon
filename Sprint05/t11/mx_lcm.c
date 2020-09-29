//#include <stdio.h>
int mx_gcd(int a, int b);

int mx_lcm(int a, int b) {
    if(a < 0)
        a *= -1;
    if(b < 0)
        b *= -1;
    long c = (a * b) / mx_gcd(a, b);
    if (c > 2147483647)
        return 0;
    else
        return (int)c;
}

/*
int main() {
    printf("%d", mx_lcm(20, 214748364));
}*/
