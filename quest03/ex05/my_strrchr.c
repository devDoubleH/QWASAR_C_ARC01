char* my_strrchr(char* str, char c) {
   const char* position = 0;
    int i = 0;
    for(i = 0; ;i++) {
        if((unsigned char) str[i] == c) {
            position = &str[i];
        }
        if (str[i]=='\0') break;
    }
    return (char *) position;
}