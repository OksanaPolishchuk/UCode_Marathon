//#include <stdio.h>
int mx_max(int a, int b, int c) {
    int max = 0;

    if(a >= b)
        max = a;
    else
        max = b;
    if(c > max)
        max = c;
    return max;
}

/*
int main() {

    printf("%d", mx_max(-1, 1, 2));
}*/
