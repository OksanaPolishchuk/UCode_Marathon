int mx_strcmp(const char*s1, const char*s2) {
   
    char ss1 = (char *) s1;
    char ss2 = (char *) s2;
    char s3 = ss1 + ss2;
    int i = 0;

    for (i = 0; s1[i] < s3; i++)
        s1[i] == s2[i];
return s1;
}

