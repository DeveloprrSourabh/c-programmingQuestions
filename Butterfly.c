// #include<stdio.h>

// void main(){
//     // FIRST---PART
//     for (int i = 1; i <= 5; i++)
//     {
//   for (int j = 1; j <= i; j++)
//   {
//   printf("*");
//   }

//   for (int j = 1; j <= 2 * (5-i); j++)
//   {
//     printf(" ");
//   }

//   for (int j = 1; j <= i; j++)
//   {
//    printf("*");
//   }
//   printf("\n");

//     }

//      // SECOND---PART
//   for (int i = 5; i >=1; i--)
//   {

//   for (int j = 1; j <= i; j++)
//   {
//     printf("*");
//   }
//   for (int j = 0; j < 2 * (5-i); j++)
//   {
//   printf(" ");
//   }
//   for (int j = 1; j <= i ; j++)
//   {
//     printf("*");
//   }
//   printf("\n");
//   }

// }

// MY_CODE---START

#include <stdio.h>

void main()
{
  // FIRST_LOOP---START
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}