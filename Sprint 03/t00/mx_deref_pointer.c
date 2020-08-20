//#include <stdio.h>
void mx_deref_pointer(char ******str) {
    *****str = "Follow the white rabbit!";  
}

/*
int main() {
    char *str = "hello";
    char **a = &str;
    char ***b = &a;
    char ****c = &b;
    char *****d = &c;
    char ******i = &d;
    mx_deref_pointer(&d);
    printf("%s", str);
}*/
