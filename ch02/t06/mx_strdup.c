#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static char *mx_strcpy(char *dst, const char *src) {
    int counter = 0;

    while (src[counter]) {
        dst[counter] = src[counter];
        counter++;
    }
    dst[counter] = '\0';
    return dst;
}

static char *mx_strnew(const int size) {
	char *str = NULL;
    int i = 0;

    if (size < 0 || !(str = (char *)malloc((size +1) * sizeof(char))))
        return NULL;
    while (i < size + 1)
        str[i++] = '\0';
    return str;
}

static int mx_strlen(const char *s) {
    int i = 0;

    while(s[i])
        i++;
    return i;
}

char *mx_strdup(const char *str) {
    char *duplicate = NULL;

    if (!(duplicate = mx_strnew(mx_strlen(str))))
        return NULL;
    if (!mx_strcpy(duplicate, str))
        return NULL;
    return duplicate;
}
