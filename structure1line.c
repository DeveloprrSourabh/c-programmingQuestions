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
printf("Student roll = %d\n",s1.roll);
printf("Student cgpa = %f\n",s1.cgpa);
    return 0;
}