void mx_printchar(char c);
void mx_printstr(const char*s);
int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char*s);

static void sort(char **arr, int size) {
    for (int step = 0; step < size; step++) {
        for (int i = step; i < size; i++) {
            char *temp = 0;
            if (mx_strcmp(arr[step], arr[i]) > 0) {
                temp = arr[step];
                arr[step] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main(int argc, char *argv[]) {
    sort(argv, argc);
    for (int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
}

