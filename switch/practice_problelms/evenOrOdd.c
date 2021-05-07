//C program to check even or odd number using switch case
//ni7
#include<stdio.h>
int main()
{
    int number=0;
    printf("Input number: ");
    scanf("%d",&number);
    switch(number%2==0)
    {
    case 0:
        printf("Odd number");
        break;
    case 1:
        printf("Even number");
        break;
    default:
        printf("invalid!");
        break;
    }
}
