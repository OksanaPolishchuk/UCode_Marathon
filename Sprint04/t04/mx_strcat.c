//#include <stdio.h>
int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2) {
    int s1_leng = mx_strlen(s1);
    int s2_leng = mx_strlen(s2);
    int full_len = s1_leng + s2_leng;
    int j = 0;
    int i;

    for (i = s1_leng ; i < full_len; i++) {
        s1[i]  = s2[j];
        j++;

   }
    s1[i++] = '\0';
    return s1;
}

/*
int main() {
    char s1[] = "hel";
    char s2[] = "lo";
    printf("%s", mx_strcat(s1, s2));
}*/
