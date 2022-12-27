#include <stdio.h>

// USER--DEFINE
struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{

    struct student ece[100];
    ece[0].roll = 10716;
    ece[0].cgpa = 28.9;
    ece[0].name[100] = "hjgjhg";

    printf("name of student is  : %S\n", ece[0].name);
    printf("Roll of student is  : %d\n", ece[0].roll);
    printf("cgpa of student is  : %f\n", ece[0].cgpa);

}
