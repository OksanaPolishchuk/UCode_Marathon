//#include <stdio.h>
//#include <string.h>
char *mx_strncpy(char *dst, const char *src, int len) {
    int i = 0;

    while (src[i] != '\0' && i != len) {
       dst[i] = src[i];
        i++;
    }
    dst[i + 1] = '\0';
    return dst;
}

/*
int main() {
    const char src[11] = "yo neo bro";
    char dst[11];
    memset (dst,'\0',11);
    printf("%s", dst);
    printf("%s", mx_strncpy(dst, src, 3));
}
*/
