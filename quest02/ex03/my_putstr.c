void my_putstr(char* str){
    int len = strlen(str);
    write(1, str, len);
}