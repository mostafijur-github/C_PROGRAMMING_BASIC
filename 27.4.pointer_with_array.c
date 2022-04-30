#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,8};
    int *ptr;
    ptr = arr;
    printf("%d %d \n",*ptr,*(ptr+1));
    *(ptr+3) = 11;
    printf("%d\n",arr[3]);
    return 0;
}
