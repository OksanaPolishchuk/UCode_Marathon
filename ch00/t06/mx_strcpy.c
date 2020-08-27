char *mx_strcpy(char *dst, const char *src) {
    int i = 0;
    int len = 0;

    while (src[len])
        len++;

    for (; src[i] != '\0'; i++)
        if (i == len)
            break;
        else
            dst[i] = src[i];
    dst[i] = '\0';
    return dst;
}

