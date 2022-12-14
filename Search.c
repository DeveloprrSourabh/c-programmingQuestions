#include<stdio.h>

int main(){
    int n,i;

    printf("Enter a number to generate the table: ");
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++){
        printf("\n %d*%d = %d",n,i,(n*i));
        
    }
    printf("\n");
}