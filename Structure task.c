#include <stdio.h>
#include <stdlib.h>
struct employee
{
    char name[20];
    char employee_id[10];
    int experience[2];
    float salary[8];
};
int main()
{
 struct employee e1;
 printf("\n Name:");
 gets(e1.name);
 printf("Employee ID:");
 gets(e1.employee_id);
 printf("Experience:");
 gets(e1.experience);
 printf("Salary:");
 gets(e1.salary);
 printf("\n");
 struct employee e2;
 printf("Name:");
 gets(e2.name);
 printf("Employee ID:");
 gets(e2.employee_id);
 printf("Experience:");
 gets(e2.experience);
 printf("Salary:");
 gets(e2.salary);
 printf("\n");
 struct employee e3;
 printf("Name:");
 gets(e3.name);
 printf("Employee ID:");
 gets(e3.employee_id);
 printf("Experience:");
 gets(e3.experience);
 printf("Salary:");
 gets(e3.salary);
 printf("\n");
 struct employee e4;
 printf("Name:");
 gets(e4.name);
 printf("Employee ID:");
 gets(e4.employee_id);
 printf("Experience:");
 gets(e4.experience);
 printf("Salary:");
 gets(e4.salary);
 printf("\n");
 struct employee e5;
 printf("Name:");
 gets(e5.name);
 printf("Employee ID:");
 gets(e5.employee_id);
 printf("Experience:");
 gets(e5.experience);
 printf("Salary:");
 gets(e5.salary);
 printf("\n");
 return 0;
}


