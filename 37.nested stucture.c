#include<stdio.h>
struct student
{
    int id;
    struct
    {
        char first_name[50];
        char last_name[20];
    }name;
    float cgpa;

};
int main()
{
    struct student rahim;

    printf("Enter ID:");
    scanf("%d",&rahim.id);
    printf("Enter your name\n");
    printf("Enter first name:");
    scanf("%s",rahim.name.first_name);
    printf("Enter last name:");
    scanf("%s",rahim.name.last_name);
    printf("Enter CGPA:");
    scanf("%f",&rahim.cgpa);
    printf("*******Output*********\n");
    printf("%d %s %s %.2f",rahim.id,rahim.name.first_name,rahim.name.last_name,rahim.cgpa);
    return 0;
}
/**
The general form....
    struct structure_tag_name
    {
        structure_member 1;
        struct
        {
            .................
            structure_member;
            .................
        }structure_variable_name;
        ..........................
        ..........................
        structure_member N;
    };
    ************** OR *************
     struct structure_tag_name
    {
        structure_member 1;
        struct structure_tag_name;
        {
            .................
            structure_member;
            .................
        };
        struct member_structure_tag_name structure_variable_name;
        ..........................
        ..........................
        structure_member N;
    };
*/
