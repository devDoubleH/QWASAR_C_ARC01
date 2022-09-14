
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


integer_array* my_count_on_it(string_array* param_1) {
    integer_array* x = malloc(sizeof(integer_array));
    x->size = param_1->size;
    x->array = malloc((param_1->size)*sizeof(int));
    for (int i = 0; i < param_1->size; i++) {
        x->array[i] = (int)strlen(param_1->array[i]);
    }
    return x;
}