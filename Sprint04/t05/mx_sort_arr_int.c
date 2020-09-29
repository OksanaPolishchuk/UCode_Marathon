//#include <stdio.h>
void mx_sort_arr_int(int *arr, int size) {
    for (int step = 0; step < size; step++) {
        for (int i = step; i < size; i++) {
            int temp = 0;
            if (arr[step] > arr[i]) {
                temp = arr[step];
                arr[step] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

/*
int main() {
    int arr[] = {3, 55, -11, 1, 0, 4, 22};
     mx_sort_arr_int(arr, 7);
    for (int i = 0;i < 7; i++)
         printf("%d  ",arr[i]);
}*/
