#include <stdio.h>
//arrays of struct

struct student
{
    char name[20];
    float gpa;
};

int  main()
{   
    struct student student1 = {"Pumax",4.0};
    struct student student2 = {"King",2.0};
    struct student student3 = {"Lodl",3.2};
    struct student student4 = {"Fed",3.5};

    struct student students[]={student1,student2,student3,student4};
    
    for(int i=0;i<sizeof(students)/sizeof(students[0]);i++)
    {
        printf("name:%s ",students[i].name);
        printf("GPA:%.2f\n",students[i].gpa);
    }
    return 0;
    
}