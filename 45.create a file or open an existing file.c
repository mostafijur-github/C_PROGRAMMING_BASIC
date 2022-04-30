#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("45new.txt","w");
    fprintf(fp,"This is text file.\n");
    fclose(fp);
    return 0;
}
