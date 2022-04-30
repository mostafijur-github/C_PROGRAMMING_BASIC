///A simple program that takes information
///for student whose number 10
#include<stdio.h>

struct student
{
    int id;
    char name[50];
    float cgpa;
};
int main()
{
    struct student list[10];
    int i;
    printf("Enter id,name,cgpa\n");
    for(i=0;i<10;i++)
    {
       scanf("%d %s %f",&list[i].id,list[i].name,&list[i].cgpa);
    }
    for(i=0;i<10;i++)
    {
       printf("%d %s %f\n",list[i].id,list[i].name,list[i].cgpa);
    }

    return 0;
}
