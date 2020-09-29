#include "create_agent.h"

char *mx_strdup(const char *str) {
    
    char *dst = mx_strnew(mx_strlen(str));

    if (dst == NULL)
        return NULL;
    mx_strcpy(dst, str);
    return dst;
}
