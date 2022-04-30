#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)calloc(10,sizeof(int));

    ptr[0] = 5;
    ptr[1] = 6;
    ptr[9] = 10;
    printf("ptr[0] = %d\nptr[1] = %d\nptr[9] = %d\n",ptr[0],ptr[1],ptr[9]);
    ptr = (int *)realloc(ptr, 20*sizeof(int));
    ptr[16] = 20;
    printf("ptr[16] = %d\n",ptr[16]);
    free(ptr);
    return 0;
}
/**
    Prototype of realloc() function...
    void *realloc(*ptr, size_t size);
    in details....
    ptr = (cast_type *) realloc(*ptr,size_t size);
    Note:When we are using realloc() function we must free it using free() function.

*/

