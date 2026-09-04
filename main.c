#include <stdio.h>
#include<stdbool.h>

int main()
{
    char name[20],gender;
    int age;
    float gpa;


    printf("Name ");
    scanf("%s",&name);
    printf("Gender ");
    scanf(" %c",&gender);
    printf("Age ");
    scanf("%d",&age);
    printf("GPA ");
    scanf("%f",&gpa);

    printf("================\n");
    printf("Student Name %s\n",name);
    printf("Gender %c\n",gender);
    printf("Age %d\n",age);
    printf("GPA %.2f\n",gpa);

    return 0;
}
