//C program to find maximum between two numbers using switch case
//ni7

#include<stdio.h>
int main()
{
    int value1=0,value2=0;
    printf("Input first number: ");
    scanf("%d",&value1);
    printf("Input second number: ");
    scanf("%d",&value2);
    /* Expression (num1 < num2) will return either 0 or 1 */
    switch(value1<value2)
    {
        /* If condition (num1<num2) is false */
    case 0:
        printf("Maximum: %d",value1);
        break;
        /* If condition (num1<num2) is true */
    case 1:
        printf("Maximum: %d",value2);
        break;
    default:
        printf("error");
    }
}
