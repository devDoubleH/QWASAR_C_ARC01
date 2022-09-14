char* my_strncpy(char* destination, const char* source, int num)
{
   
 
    char* ptr = destination;
 
   
    while (*source && num--)
    {
        *destination = *source;
        destination++;
        source++;
    }
 
    *destination = '\0';
 

    return ptr;
}