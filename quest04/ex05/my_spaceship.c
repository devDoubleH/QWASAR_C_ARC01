#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int findIndex(char *arr, const char *x){
    for(int i = 0; i < strlen(arr); i++){
        char y = arr[i];
        if(y == *x){
            return i;
        }
    }
    return 0;
}


char* my_spaceship(const char *str){
    int index, x=0, y=0;
    char buffer[100];
    char *c_s = "up", *sides[4] = {"up", "right", "down", "left"};
    for(int i = 0; i < strlen(str); i++){        
        if(str[i] == 'R'){
            index = findIndex(*sides, c_s) + 1;
            if(index < 4 && index > -1){
                c_s = sides[index];
            }else{
                index = 0;
                c_s = sides[index];
            }
        }else if(str[i] == 'L'){
            index = findIndex(*sides, c_s) - 1;
            if(index < 4 && index > - 1){
                c_s = sides[index];
            }else{
                index = 3;
                c_s = sides[index];
            }
        }else if(str[i] == 'A'){
            if(c_s == "up"){ y--;}
            else if(c_s == "down"){ y++;}
            else if(c_s == "left"){ x--;}
            else if(c_s == "right"){ x++;}
        }
    }
    sprintf(buffer, "{x: %d, y: %d, direction: '%s'}",x,y,c_s);
    printf("%s", buffer);
    return 0;
}


int main(){
    my_spaceship("RAALALL");
    return 0;
}