//#include <stdio.h>
char *mx_strstr(const char *s1, const char *s2);

int mx_strlen(const char *s);

int mx_count_substr(const char *str, const char *sub) {
    int count = 0;
    const char *buffer = str;

    //if (mx_strlen(str) == 0 || mx_strlen(sub) == 0)
    //    return 0;
    while ((buffer = mx_strstr(buffer, sub)) != 0) {
        buffer++;
        count++;
    }   
    return count;
}

/*
int main() {
    const char *str = "yo yo yo";
    const char *sub = "yo";
    
    printf("%d", mx_count_substr(str, sub));
}*/
