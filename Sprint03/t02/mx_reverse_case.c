#include <stdio.h>
#include <stdbool.h>
//#include <unistd.h>

bool mx_isupper(int c);
int mx_tolower(int c);
int mx_toupper(int c);
bool mx_islower(int c);
void mx_reverse_case(char *s) {
    int i = 0;
    
    while(s[i]) { 
        if (mx_isupper(s[i]))
            s[i] = mx_tolower(s[i]);
        else
            s[i] = mx_toupper(s[i]);
        i++;
    }
}

/*
int main() {
    char word[] = "HeLLo Neo";
    mx_reverse_case(word);
    printf("%s\n", word);
    return 0;
}*/

