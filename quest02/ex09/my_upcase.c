char* my_upcase(char* param_1){
    if(strlen(param_1)==0){
        return "";
    }
    for (int i=0;i<=strlen(param_1)-1;i++){
        if(param_1[i]>96){
            param_1[i]-=32;
        }
        
    }
    return param_1;
}