#include<stdio.h>
#include<string.h>


//user define
struct student
{
int roll;
float cgpa;
char name[100]; 
};

int main(){
struct student ece[100];
ece[0].roll = 1664;
ece[0].cgpa = 9.4;
strcpy(ece[0].name,"Sourabh");

printf("Student name = %s\n",ece[0].name);
printf("Student roll = %d\n",ece[0].roll);
printf("Student cgpa = %f\n",ece[0].cgpa);


    return 0;
}