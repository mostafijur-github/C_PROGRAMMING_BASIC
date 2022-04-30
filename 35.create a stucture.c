#include<stdio.h>

int main()
{
    struct student
    {
        int id;
        char name[50];
        float cgpa;
    }s1;
    struct student s2;
    printf("Enter id,name,cgpa for first student.\n");
    scanf("%d",&s1.id);
    scanf("%s",s1.name);
    scanf("%f",&s1.cgpa);
    printf("Enter id,name,cgpa for second student.\n");
    scanf("%d",&s2.id);
    scanf("%s",s2.name);
    scanf("%f",&s2.cgpa);
    printf("%d %s %f\n",s1.id,s1.name,s1.cgpa);
    printf("%d %s %f\n",s2.id,s2.name,s2.cgpa);

    return 0;
}
/**
When we create a structure tag then it not use memory,
When we create a structure variable then it use memory,
General form....
      struct
      {
         structure_member1;
         structure_member2;
         .................
         .................
         structure_member N;
      }structure_variable_name;

      -----------OR---------
     struct structure_tag_name
      {
         structure_member1;
         structure_member2;
         .................
         .................
         structure_member N;
      }structure_variable_name;

       -----------OR---------
     struct structure_tag_name
      {
         structure_member1;
         structure_member2;
         .................
         .................
         structure_member N;
      };
      struct structure_tag_name structure_variable_name;

**/
