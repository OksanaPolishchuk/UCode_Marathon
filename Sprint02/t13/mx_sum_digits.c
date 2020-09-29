//#include <stdio.h>
int mx_sum_digits(int num) {
    int sum = 0;
    for(sum = 0; num > 0; sum += num % 10, num /=10);
    return sum;
}

/*
int main() {
    printf("%d", mx_sum_digits(356));
}*/
