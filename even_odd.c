#include<stdio.h>
int main()
{
    int num1;
    printf("Enter a number: ");
    scanf("%d",&num1);
    if(num1 % 2==0){
        printf("The number you entered is even");
    }
    else{
        printf("The number you entered is odd");
    }
    return 0;
}
