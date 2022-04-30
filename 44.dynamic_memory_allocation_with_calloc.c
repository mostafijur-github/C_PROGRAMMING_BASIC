#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr; char *ptr2;
    ptr = (int *)calloc(10,sizeof(int));
    ptr2 = (int *)calloc(10,sizeof(int));
    ptr2 = "NBIU";
    printf("%s\n",ptr2);
    ptr[0] = 5;
    ptr[1] = 6;
    ptr[9] = 10;
    printf("ptr[0] = %d\nptr[1] = %d\nptr[9] = %d\n",ptr[0],ptr[1],ptr[9]);
    free(ptr);
    return 0;
}
/**
    Prototype of calloc() function...
    void *calloc(size_t n, size_t size);
    in details....
    ptr = (cast_type *) calloc(size_t n,size_t size);
    Note:When we are using calloc() function we must free it using free() function.

*/
