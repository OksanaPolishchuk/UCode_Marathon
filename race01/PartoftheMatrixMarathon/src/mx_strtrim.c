#include "part_of_the_matrix.h"

char *mx_strtrim(const char *str) {
    if (NULL == str)
        return NULL;

    int n = mx_strlen(str);
    int k1 = 0;
    int k2 = n - 1;

    while (k1 < n && str[k1] && mx_isspace(str[k1]))
        ++k1;
    while (k2 >= 0 && str[k2] && mx_isspace(str[k2]))
        --k2;

    int len = k2 - k1 + 1;
    if (len < 0)
        len = 0;
    char *result = mx_strnew(len);
    if (NULL == result)
        return NULL;

    result = mx_strncpy(result, str + k1, len);
    return result;
}
