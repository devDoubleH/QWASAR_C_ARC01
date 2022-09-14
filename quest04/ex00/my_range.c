int* my_range(int i, int j)
{
    static int arr[100];
    int k = 0;
    while(i<j){
        arr[k] = i;
        i++;
        k++;
    }
    return arr;
}