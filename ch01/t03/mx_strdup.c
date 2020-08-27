#include <stdlib.h>

static char *mx_strcpy(char *dst, const char *src) {
    int i;

    for (i = 0; src[i] != '\0'; i++)
        dst[i] = src[i];
    dst[i] = '\0';
    return dst;
}

char *mx_strdup(const char *str) { 
    char *dst = mx_strnew(mx_strlen(str));

    if (dst == NULL)
        return NULL;
    mx_strcpy(dst, str);
    return dst;
}

