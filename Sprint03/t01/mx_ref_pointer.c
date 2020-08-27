//#include <stdio.h>
void mx_ref_pointer(int i, int ******ptr) {
    ******ptr = i;
}

/*
int main() {
    int test = 1;
    int *test2 = &test;
    int **test3 = &test2;
    int ***test4 = &test3;
    int ****test5 = &test4;
    int *****test6 = &test5;
    mx_ref_pointer(7, &test6);
    printf("%d", test);
}*/
