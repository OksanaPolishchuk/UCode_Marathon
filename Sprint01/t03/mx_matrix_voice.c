#include <unistd.h>

void mx_matrix_voice(void) {
    char beep = 7;

    write(1, &beep, 1);
}

int main() {
    mx_matrix_voice();
}

