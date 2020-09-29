//#include <stdio.h>
int mx_sqrt(int n) {
    if (n < 0) {
        return 0;
    }
        if (n == 0 || n == 1) {
        return n;
    }
    for (int num = 1;num < 46341 && num < n / 2;) {
        num++;
        if (num * num == n) {
        return num;
        }
    }
    return 0;
}

/*
int main() {
      int x = 4;
      printf("%d", mx_sqrt(x));
}*/
