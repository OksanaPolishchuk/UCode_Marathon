#include "file_to_str.h"

char *mx_file_to_str(const char *filename) {
    int file = open(filename, O_RDONLY);   
    int len = 0;
    char buffer;
    char *str;

    if (file > 0) {
        while ((read(file, &buffer, 1)))
            len++;
        close(file);    
        if (len > 0) {
            file = open(filename, O_RDONLY);
            str = mx_strnew(len);
            for (int i = 0; read(file, &buffer, 1); i++)
                str[i] = buffer;
            close(file);
            return str;
        }
    }
    return NULL;
}
