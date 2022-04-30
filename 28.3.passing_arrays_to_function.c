#include<stdio.h>

void arr_function(int arr_func[5]);

int main()
{
    int arr[5]={2,3,4,5,6};
    printf("In main function array[3] = %d\n",arr[3]);
    arr_function(arr);
    return 0;
}
void arr_function(int arr_func[5])
{
    printf("In arr_function array[3] = %d\n",arr_func[3]);
}
