int my_string_index(char* param_1, char param_2)
{
int i=0;
int a=strlen(param_1);
int b=0;
while(i<a){
    if(param_1[i]==param_2){
       b=i;
        break;
    }else{
        b=-1;
    }
    i++;
}
return b;
}