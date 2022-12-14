#include <stdio.h>

int main()
{
    int a; // declare variable
    int b; // declare variable

    // first--input
    printf("Enter first number : ");
    scanf("%d", &a);

    // second--input
    printf("Enter second number : ");
    scanf("%d", &b);

    printf("Sum of two no. is : %d\n", a + b);
    return 0;
}