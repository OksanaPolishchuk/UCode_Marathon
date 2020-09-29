//#include <stdio.h>
double mx_pow_rec(double n, unsigned int pow) {
    double res = 0;
    if (pow == 0) 
        return 1;
    res = mx_pow_rec(n, pow -1);
    if(res <= 1.7976931348623157E+308 / n)
        return n * res;
    return 0;
}

/*
int main() {
    printf("%f", mx_pow_rec(2, 3));
}*/
