#include<stdio.h>
int main()
{
    int num;
    printf("Enter your Number: ");
    scanf("%d",&num);
    int check = num%2==0?printf("Even Number"):printf("Odd Number");
}
