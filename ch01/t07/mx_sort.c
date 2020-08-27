#include <stdbool.h>

void mx_sort(int *arr, int size, bool (*f)(int, int)) {
    int m = i;
   
    for (int i = 0; i < size - 1; i ++) {
        for (int j = i + 1; j < size; j++) {
            if (f(arr[m], arr[j]))
                m = j;
        }

        int t = arr[m];
        arr[m] = arr[i];
        arr[i] = t;
    }
}

