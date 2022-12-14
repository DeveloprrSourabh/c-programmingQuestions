#include <stdio.h>

// user define
struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{

    struct student s1 = {1664, 9.4, "Sourabh"};
printf("Student name = %s\n",s1.name);

struct student *ptr = &s1;
printf("Student name = %s\n",ptr->name);

    return 0;
}