char* my_downcase(char* param_1)
{
if(strlen(param_1)==0){
        return "";
    }
    for (int i=0;i<=strlen(param_1)-1;i++){
        if(param_1[i]<91&&param_1[i]>64){
            param_1[i]+=32;
        }
        
    }
    return param_1;
}