#include <stddef.h>
#include <stdio.h>

char *mx_strjoin(char const *s1, char const *s2);
void mx_strdel(char **str);
char *mx_strnew(const int size);

char *mx_concat_words(char **words) {
    char *result = NULL;

    if (words && NULL == words[0]) {
        return mx_strnew(0);
    }

    for (int i = 0; words && words[i]; ++i) {
        char *tmp = result;
        result = mx_strjoin(tmp, words[i]);
        mx_strdel(&tmp);
        if (NULL == result)
            return NULL;
        if (words[i + 1]) {
            tmp = result;
            result = mx_strjoin(tmp, " ");
            mx_strdel(&tmp);
            if (NULL == result)
                return NULL;
        }
    }
    return result;
}

