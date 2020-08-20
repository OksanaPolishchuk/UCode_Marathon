void mx_printchar(char c);

void mx_only_printable(void) {
    for (int i = 0; i < 16; i++) {
        if (i >= 0 && i < 10) 
            mx_printchar(i+48);
       else 
            mx_printchar(i+55);
    }
   mx_printchar('\n');
}


int main() {
    mx_only_printable();
}

