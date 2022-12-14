#include <stdio.h>

// user define
struct student
{
    int roll;
    float cgpa;
    char name[100];
};

void printInfo(struct student s1);


int main()
{

    struct student s1 = {1664, 9.4, "Sourabh"};
printInfo(s1);

// printf("Student name = %s\n",s1.name);

// struct student *ptr = &s1;
// printf("Student name = %s\n",ptr->name);

    return 0;
}

void printInfo(struct student s1){
    printf("Student Information\n");
printf("Student name = %s\n",s1.name);
printf("Student name = %d\n",s1.roll);
printf("Student name = %f\n",s1.cgpa);

}
