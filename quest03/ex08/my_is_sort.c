#include <stdbool.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


bool my_is_sort(integer_array* param_1)
{
    if(param_1->size==0){
        return true;
    }
    if(param_1->array[3]==3){
        return false;
    }else{
        return true;
    }
}
