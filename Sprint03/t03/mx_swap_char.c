//#include <stdio.h>
void mx_swap_char(char *s1, char *s2) {
    char let = *s1; 
    *s1 = *s2;
    *s2 = let; 
}

/*
int main() {
    char str[] = "ONE";
    
    mx_swap_char(&str[0], &str[1]);
    mx_swap_char(&str[1], &str[2]);
    printf("%s\n", str);
    return 0;
}*/
