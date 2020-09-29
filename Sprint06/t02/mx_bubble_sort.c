//#include <stdio.h>
int mx_strcmp(const char *s1, const char *s2);

int mx_bubble_sort(char **arr, int size) {
    int counter = 0;
    char *temp;

    for (int i = 0; i < size - 1; i++) {
        for (int j = size - 1; j > i; j--) { 
            if (mx_strcmp(arr[j - 1], arr[j]) > 0) {
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
                counter++;
            }
        }
    }
    return counter;
}

/*
int main() {
   // char *arr[] = {"abc", "xyz", "ghi", "def"};
    char *arr2[] = {"abc", "acb", "a"};
   // printf("%d", mx_bubble_sort(arr, 4));
   
    printf("%d", mx_bubble_sort(arr2, 3));
} \*