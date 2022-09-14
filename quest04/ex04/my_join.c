#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif


char* my_join(string_array* param_1, char* param_2){
    char* x = malloc(100);
    for(int i=0; i<param_1->size; i++){
        strcat(x,param_1->array[i]);
        if(i!=param_1->size-1){
            strcat(x,param_2);
        }
    }
    if(strcmp(x,"")!=0) return x;
}
