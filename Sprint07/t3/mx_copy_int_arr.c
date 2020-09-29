#include <stdlib.h>
#include <stddef.h>
int *mx_copy_int_arr(const int *src, int size) {
    int *arra = NULL;

    if (arra == NULL || src == NULL)
        return NULL;
    arra = malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        arra[i] = src[i];
    }
    return arra;
}
