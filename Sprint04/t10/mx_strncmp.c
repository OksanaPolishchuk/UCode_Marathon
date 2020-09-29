#include <stdio.h>
#include <string.h>
int mx_strncmp(const char *s1, const char *s2, int n) {
    int i = 0;

    while ((s1[i] == s2[i]) && (i < n - 1)) {
        if (s1[i] == '\0' && s2[i] == '\0') 
            return 0;
        i++;
    }
    return (const unsigned char)s1[i] - (const unsigned char)s2[i];
}


int main() {
    int n = 3;
    char *s1 = "-10100";
    char *s2 = "1500";
    printf("%d\n", mx_strncmp(s1, s2, n));
    printf("%d", strncmp(s1, s2, n));
}
