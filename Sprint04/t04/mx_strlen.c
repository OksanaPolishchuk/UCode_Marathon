int mx_strlen(const char*s) {
    int counter = 0;

    while (s[counter] && s[counter] != '\0') {
        counter++;
    }
    return counter;
}

