#include <stdbool.h>

static bool mx_isdigit(int c) {
	bool i = false;

	if (c >= '0' && c<='9')
		i = true;
	return i;
}

static bool mx_isspace(char c) {
    bool i = false;
    
	if (c==' ' || c=='\t' || c=='\n'
		|| c=='\v' || c=='\f' || c=='\r')
		i = true;
	return i;
}

int mx_atoi(const char *str) {
    int x = 0;
    int y = 0;
    int z = 1;

    while(!mx_isdigit(str[x])) {
        if (!mx_isspace(str[x]) && str[x] != '-' && str[x] != '+')
            return 0;
            x++;
    }
    if (str[x - 1] == '-') {
        z = -z;
    }
    for(; mx_isdigit(str[x]); x++) {
        y = ((y * 10) + (str[x] - '0'));
    }
    if (z < 0)
        y = -y;
        return y;
}
