#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(10*sizeof(int));

    ptr[0] = 5;
    ptr[1] = 6;
    ptr[9] = 10;
    printf("ptr[0] = %d\nptr[1] = %d\nptr[9] = %d\n",ptr[0],ptr[1],ptr[9]);
    free(ptr);
    return 0;
}
/**
    Prototype of malloc() function...
    void *malloc(size_t size);
    in details....
    ptr = (cast_type *) malloc(size_t size);
    Note:When we are using malloc() function we must free it using free() function.
*/
