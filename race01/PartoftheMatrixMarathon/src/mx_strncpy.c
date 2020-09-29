#include "part_of_the_matrix.h"

char *mx_strncpy(char *dst, const char *src, int len) {
    int i = 0;

    while (src[i] != '\0' && i != len) {
       dst[i] = src[i];
        i++;
    }
    dst[i + 1] = '\0';
    return dst;
}
