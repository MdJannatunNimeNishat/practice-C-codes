//C program to check positive negative or zero using switch case
//ni7

#include<stdio.h>
int main()
{
    int num;
    printf("Input number: ");
    scanf("%d",&num);
    switch(num>0)
    {
    case 1:
        printf("%d is positive",num);
        break;
    case 0:
        switch(num<0)
        {
        case 1:
            printf("%d is negative",num);
            break;
        case 0:
            printf("%d is zero",num);
            break;
        default:
            printf("invalid!");
            break;

        }

    }
}
