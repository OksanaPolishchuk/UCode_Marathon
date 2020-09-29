int mx_strcmp (const char *s1, const char *s2);
int mx_strlen(const char *s);

int mx_selection_sort(char **arr, int size){
    int count = 0;
    int min;
    char *temp;
    for (int i = 0; i < size; i++){
        min = i;
        for(int j = i + 1; j < size; j++){
            if (mx_strlen(arr[min]) > mx_strlen(arr[j]))
                min = j;
            if (mx_strlen(arr[min]) == mx_strlen(arr[j])) {
                if (mx_strcmp(arr[min], arr[j]) < 0)
                    min = j;
            }
        }   
        if (i < min){
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = arr[i];
            count++;
        }
    }
    return count;
}

